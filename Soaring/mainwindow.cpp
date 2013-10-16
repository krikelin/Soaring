#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStandardItemModel>
#include <QDebug>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->m_views = new QMap<QString, SPView *>();
    QToolBar *toolbar = this->ui->toolBar;
    m_searchBar = new QLineEdit(this);
    connect(m_searchBar, SIGNAL(returnPressed()), this, SLOT(searchBarEnter()));
    m_searchBar->size().setWidth(200);
    m_searchBar->size().setHeight(10);
    toolbar->addWidget(m_searchBar);
    m_model = new QStandardItemModel();
    this->createList();
    this->ui->viewstack->setLayout(new QVBoxLayout());
    connect(this->ui->sourcetree, SIGNAL(itemActivated(QTreeWidgetItem*,int)), this, SLOT(itemSelected(QTreeWidgetItem*, int)));
    this->ui->viewstack->layout()->setMargin(0);
        this->ui->viewstack->layout()->setSpacing(0);
    SPUri uri (QString("soaring:internal:home"));
    this->navigate(uri);
}

void MainWindow::searchBarEnter() {
    QString text = this->m_searchBar->text();
    SPUri *uri = new SPUri (QString(text));
    this->navigate(*uri);
    delete uri;
}

void MainWindow::itemSelected(QTreeWidgetItem *item, int column) {
    QString turi = item->data(0, Qt::UserRole).toString();
    SPUri uri (turi);
    this->navigate(uri);
}

void MainWindow::createList() {
    QTreeWidgetItem *item1 = new QTreeWidgetItem();
    item1->setText(0, QString("Home"));
    item1->setData(0, Qt::UserRole, QVariant("soaring:internal:home"));

    this->ui->sourcetree->addTopLevelItem(item1);

}

void MainWindow::navigate(SPUri &uri) {
    SPView *view = makeView(uri.module()); // Switch to module view

    if (view != NULL) {
        for (QMap<QString, SPView *>::Iterator it = m_views->begin(); it != m_views->end(); ++it) {


                SPView *tview = it.value();
                tview->setVisible(false);

        }
        view->setVisible(true);
        view->argumentsChanged(uri.arguments());

    }
}

SPView *MainWindow::makeView(QString id) {
    SPView *view = (*this->m_views)[id];


    if (view == NULL) {
        // Create a new view

        if(id == QString("internal")) {
            view = new SPInternalView(this);
        }
      //  qDebug(this->ui->viewstack->layout() != NULL);
        this->ui->viewstack->layout()->addWidget(view);
        (*this->m_views)[id] = view;

    }

    return view;
}

QMap<QString, SPView *> *MainWindow::views() {
    return m_views;
}

MainWindow::~MainWindow()
{
    delete ui;
}

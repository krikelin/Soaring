#include "spiderpage.h"
#include <QFrame>
#include <QTextBlock>
#include "flowlayout.h"
#include "spiderclasses.h"
#include <QLabel>
#include <QImage>
SpiderPage::SpiderPage(QWidget *parent) :
    QWidget(parent)
{


}
void SpiderPage::setPage(QString fileName) {
    QFile file (fileName);
    if(file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QString data = file.readAll();
       file.close();
       this->setDocument(data);
    }
}

void SpiderPage::setDocument(QString document) {
    m_domDocument = new QDomDocument();
    m_domDocument->setContent(document); // Set document
    // Now begin making the tree

    QVBoxLayout *flowLayout = new QVBoxLayout(this);
    QDomNodeList nodes = m_domDocument->documentElement().childNodes();
    QDomElement parent = m_domDocument->documentElement();
    QWidget *parentWidget = this;
    for(int i = 0; i < nodes.count(); i++) {
        QDomNode node = nodes.at(i);
          if(node.nodeType() == QDomNode::ElementNode) {
            QDomElement element = (QDomElement)node.toElement();
            QWidget *widget = makeElement(element, this);

        //    widget->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
            int flex = 0;
            if(element.hasAttribute(QString("flex"))) {
                flex = element.attribute("flex").toInt();

            }
            ((QBoxLayout*)flowLayout)->addWidget(widget, flex);
        break;
       }
    }
    this->setLayout(flowLayout);
}
QWidget* SpiderPage::makeElement(QDomElement& elm, QWidget *parent) {
    QWidget *view = NULL;
    if (elm.tagName() == QString("hbox")) {

        QHBoxLayout *hboxLayout = new QHBoxLayout();
        view = new QFrame();
    //    if (view->layout() == NULL)
        view->setLayout(hboxLayout);
        // set properties


    } else if(elm.tagName() == QString("vbox")) {
        QVBoxLayout *vboxLayout = new QVBoxLayout();
        view = new QFrame();
         if (view->layout() == NULL)
        view->setLayout(vboxLayout);

    } else if(elm.tagName() == QString("flow")) {
        QHBoxLayout *hboxLayout = new QHBoxLayout();
        view = new QFrame();
        view->setLayout(hboxLayout);
    } else if(elm.tagName() == QString("text")) {
        QLabel *text = new QLabel();
        text->setText(elm.text());
        text->setWordWrap(true);
        view = text;
    } else if(elm.tagName() == QString("link")) {
        QLabel *text = new QLabel();
        text->setCursor(Qt::PointingHandCursor);
        text->setText(elm.text());
        text->setWordWrap(true);
        view = text;
    } else if(elm.tagName() == QString("img")) {
        QLabel *imageLabel = new QLabel();
        QImage image(":/img/cover.png");
        imageLabel->setPixmap(QPixmap::fromImage(image));
        view = imageLabel;
    } else if(elm.tagName() == QString("grid")) {
        QGridLayout *gridLayout = new QGridLayout();
        QFrame *frame = new QFrame();
        frame->setLayout(gridLayout);
        view = frame;
    } else if(elm.tagName() == QString("toolbar")) {
        QHBoxLayout *gridLayout = new QHBoxLayout();
        QWidget *frame = new QWidget();

        frame->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        frame->setProperty("class", QVariant("toolbar"));
        frame->setLayout(gridLayout);
        frame->size().setWidth(parent->width());
        view = frame;
    } else {
        return new QWidget();
    }
    for(int i = 0; i < elm.attributes().length(); i++) {
        QDomAttr attribute = elm.attributes().item(i).toAttr();
    }
    if(elm.hasAttribute(QString("height"))) {
        view->size().setHeight(elm.attribute("height", "264").toInt());
    }
    if(elm.hasAttribute(QString("flex"))) {

    }
    if(elm.hasAttribute(QString("uri"))) {
        view->setCursor(Qt::PointingHandCursor);
    }
    QDomNodeList nodes =elm.childNodes();
    for(int i = 0; i < nodes.count(); i++) {
        QDomNode node = nodes.at(i);
        if(node.nodeType() == QDomNode::ElementNode) {
            QDomElement element = (QDomElement)node.toElement();
            QWidget *widget2 = makeElement(element, view);
            widget2->setParent(this);
            if(view != NULL && view->layout() != NULL) {
                int flex = 0;
                if(element.hasAttribute(QString("flex"))) {
                    flex = element.attribute("flex").toInt();

                }
                ((QBoxLayout*)view->layout())->addWidget(widget2, flex, Qt::AlignLeft);
               // widget2->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
            }
        }
    }
    if (view != NULL)
    return view;
}

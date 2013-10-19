#include "splogindialog.h"
#include "ui_splogindialog.h"

SPLoginDialog::SPLoginDialog(SPLoginCredential *credentials, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SPLoginDialog)
{
    this->m_credential = credentials;
    ui->setupUi(this);
    QWidget::connect(this->ui->loginButton, SIGNAL(clicked()), this, SLOT(loginClicked()));
}
void SPLoginDialog::loginClicked() {
    QString username = this->ui->loginButton->text();
    QString password = this->ui->password->text();
    m_credential->setUsername(username);
    m_credential->setPassword(password);
    this->setResult(0);
    this->close();
}

SPLoginDialog::~SPLoginDialog()
{
    delete ui;
}

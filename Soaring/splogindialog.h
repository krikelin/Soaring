#ifndef SPLOGINDIALOG_H
#define SPLOGINDIALOG_H

#include <QDialog>
#include <splogincredential.h>
namespace Ui {
class SPLoginDialog;
}

class SPLoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SPLoginDialog(SPLoginCredential *credential, QWidget *parent = 0);
    ~SPLoginDialog();
    SPLoginCredential *credentials() {
        return m_credential;
    }

public slots:
    void loginClicked();
private:
    Ui::SPLoginDialog *ui;
    SPLoginCredential *m_credential;
};

#endif // SPLOGINDIALOG_H

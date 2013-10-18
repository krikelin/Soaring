#ifndef SPPAGE_H
#define SPPAGE_H
#include <QWidget>
#include <QTabWidget>
#include <QString>
#include <QStringList>
#include <QBoxLayout>
#include "soaring.h"
/**
 * @brief The SPPage class
 */
class SPPage : public QWidget
{
    Q_OBJECT
public:
    explicit SPPage(SPView *mainViow, QWidget *parent = 0);
    ~SPPage();
    QTabWidget *tabWidget();
    SPView *mainView() {
        return m_mainView;
    }

signals:

public slots:
private:
    QTabWidget *m_tabWidget;
    QVBoxLayout *m_boxLayout;
    SPView *m_mainView;


};
#include "soaring_includes.h"

#endif // SPPAGE_H

#ifndef SPPAGE_H
#define SPPAGE_H

#include <QWidget>
#include <QTabWidget>
#include <QString>
#include <QStringList>
#include <QBoxLayout>
/**
 * @brief The SPPage class
 */
class SPPage : public QWidget
{
    Q_OBJECT
public:
    explicit SPPage(QWidget *parent = 0);
    ~SPPage();
    QTabWidget *tabWidget();
signals:

public slots:
private:
    QTabWidget *m_tabWidget;
    QVBoxLayout *m_boxLayout;
};

#endif // SPPAGE_H

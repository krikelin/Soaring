#ifndef SPSOURCEMODEL_H
#define SPSOURCEMODEL_H

#include <QAbstractItemModel>

class SPSourceModel : public QAbstractItemModel
{
    Q_OBJECT
public:
    explicit SPSourceModel(QObject *parent = 0);

signals:

public slots:

};

#endif // SPSOURCEMODEL_H

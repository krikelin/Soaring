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
#include "soaring_includes.h"

#endif // SPSOURCEMODEL_H

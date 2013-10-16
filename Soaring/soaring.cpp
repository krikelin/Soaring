#include "soaring.h"

QStringList SPUtils::getChunk(QStringList strings, int start, int end) {
    QStringList *targetList = new QStringList();
    QStringList::iterator it;
    int i = 0;
    for(it = strings.begin(); it != strings.end(); ++it) {
        if(i >= start && i <= end) {
            QString string = *it;
            targetList->append(string);

        }
        i++;
    }
    return *targetList;
}

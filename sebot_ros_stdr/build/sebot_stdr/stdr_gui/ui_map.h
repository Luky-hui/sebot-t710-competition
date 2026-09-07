/********************************************************************************
** Form generated from reading UI file 'map.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAP_H
#define UI_MAP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mapWidget
{
public:
    QLabel *map;

    void setupUi(QWidget *mapWidget)
    {
        if (mapWidget->objectName().isEmpty())
            mapWidget->setObjectName(QString::fromUtf8("mapWidget"));
        mapWidget->resize(400, 300);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mapWidget->sizePolicy().hasHeightForWidth());
        mapWidget->setSizePolicy(sizePolicy);
        mapWidget->setCursor(QCursor(Qt::ArrowCursor));
        map = new QLabel(mapWidget);
        map->setObjectName(QString::fromUtf8("map"));
        map->setGeometry(QRect(10, 10, 371, 271));
        map->setCursor(QCursor(Qt::CrossCursor));

        retranslateUi(mapWidget);

        QMetaObject::connectSlotsByName(mapWidget);
    } // setupUi

    void retranslateUi(QWidget *mapWidget)
    {
        mapWidget->setWindowTitle(QApplication::translate("mapWidget", "Form", 0, QApplication::UnicodeUTF8));
        map->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class mapWidget: public Ui_mapWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAP_H

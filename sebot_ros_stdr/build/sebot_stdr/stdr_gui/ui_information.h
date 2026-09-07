/********************************************************************************
** Form generated from reading UI file 'information.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORMATION_H
#define UI_INFORMATION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_information
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *stdrInformationLayout;
    QTreeWidget *stdrInformationTree;

    void setupUi(QWidget *information)
    {
        if (information->objectName().isEmpty())
            information->setObjectName(QString::fromUtf8("information"));
        information->resize(350, 450);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(information->sizePolicy().hasHeightForWidth());
        information->setSizePolicy(sizePolicy);
        information->setMinimumSize(QSize(250, 0));
        information->setMaximumSize(QSize(400, 16777215));
        gridLayout_2 = new QGridLayout(information);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        stdrInformationLayout = new QGridLayout();
        stdrInformationLayout->setObjectName(QString::fromUtf8("stdrInformationLayout"));
        stdrInformationTree = new QTreeWidget(information);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(1, QString::fromUtf8("2"));
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        stdrInformationTree->setHeaderItem(__qtreewidgetitem);
        stdrInformationTree->setObjectName(QString::fromUtf8("stdrInformationTree"));
        stdrInformationTree->setMaximumSize(QSize(16777215, 16777215));
        stdrInformationTree->setHeaderHidden(false);
        stdrInformationTree->setColumnCount(2);
        stdrInformationTree->header()->setVisible(true);

        stdrInformationLayout->addWidget(stdrInformationTree, 0, 0, 1, 1);


        gridLayout_2->addLayout(stdrInformationLayout, 0, 0, 1, 1);


        retranslateUi(information);

        QMetaObject::connectSlotsByName(information);
    } // setupUi

    void retranslateUi(QWidget *information)
    {
        information->setWindowTitle(QApplication::translate("information", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class information: public Ui_information {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMATION_H

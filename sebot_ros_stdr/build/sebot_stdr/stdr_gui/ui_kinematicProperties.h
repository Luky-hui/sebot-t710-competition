/********************************************************************************
** Form generated from reading UI file 'kinematicProperties.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KINEMATICPROPERTIES_H
#define UI_KINEMATICPROPERTIES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KinematicProperties
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QPushButton *updateButton;

    void setupUi(QWidget *KinematicProperties)
    {
        if (KinematicProperties->objectName().isEmpty())
            KinematicProperties->setObjectName(QString::fromUtf8("KinematicProperties"));
        KinematicProperties->resize(271, 80);
        gridLayout = new QGridLayout(KinematicProperties);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(KinematicProperties);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(KinematicProperties);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        updateButton = new QPushButton(KinematicProperties);
        updateButton->setObjectName(QString::fromUtf8("updateButton"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(updateButton->sizePolicy().hasHeightForWidth());
        updateButton->setSizePolicy(sizePolicy);
        updateButton->setMaximumSize(QSize(200, 16777215));

        gridLayout->addWidget(updateButton, 1, 0, 1, 1, Qt::AlignHCenter);


        retranslateUi(KinematicProperties);

        QMetaObject::connectSlotsByName(KinematicProperties);
    } // setupUi

    void retranslateUi(QWidget *KinematicProperties)
    {
        KinematicProperties->setWindowTitle(QApplication::translate("KinematicProperties", "Kinematic", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("KinematicProperties", "Kinematic type", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("KinematicProperties", "Skid steer (Ideal)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("KinematicProperties", "Omnidirectional", 0, QApplication::UnicodeUTF8)
        );
        updateButton->setText(QApplication::translate("KinematicProperties", "Update", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class KinematicProperties: public Ui_KinematicProperties {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KINEMATICPROPERTIES_H

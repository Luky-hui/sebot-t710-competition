/********************************************************************************
** Form generated from reading UI file 'co2SensorProperties.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CO2SENSORPROPERTIES_H
#define UI_CO2SENSORPROPERTIES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CO2SensorProperties
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLineEdit *maxDistance;
    QLineEdit *y_;
    QLineEdit *x_;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label;
    QLineEdit *orientation;
    QLabel *label_7;
    QLineEdit *frequency;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *refreshButton;

    void setupUi(QWidget *CO2SensorProperties)
    {
        if (CO2SensorProperties->objectName().isEmpty())
            CO2SensorProperties->setObjectName(QString::fromUtf8("CO2SensorProperties"));
        CO2SensorProperties->resize(289, 214);
        gridLayout_2 = new QGridLayout(CO2SensorProperties);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        maxDistance = new QLineEdit(CO2SensorProperties);
        maxDistance->setObjectName(QString::fromUtf8("maxDistance"));

        gridLayout->addWidget(maxDistance, 1, 1, 1, 1);

        y_ = new QLineEdit(CO2SensorProperties);
        y_->setObjectName(QString::fromUtf8("y_"));
        y_->setReadOnly(false);

        gridLayout->addWidget(y_, 3, 1, 1, 1);

        x_ = new QLineEdit(CO2SensorProperties);
        x_->setObjectName(QString::fromUtf8("x_"));
        x_->setReadOnly(false);

        gridLayout->addWidget(x_, 2, 1, 1, 1);

        label_5 = new QLabel(CO2SensorProperties);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        label_3 = new QLabel(CO2SensorProperties);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_4 = new QLabel(CO2SensorProperties);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        label = new QLabel(CO2SensorProperties);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        orientation = new QLineEdit(CO2SensorProperties);
        orientation->setObjectName(QString::fromUtf8("orientation"));

        gridLayout->addWidget(orientation, 0, 1, 1, 1);

        label_7 = new QLabel(CO2SensorProperties);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 4, 0, 1, 1);

        frequency = new QLineEdit(CO2SensorProperties);
        frequency->setObjectName(QString::fromUtf8("frequency"));

        gridLayout->addWidget(frequency, 4, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(CO2SensorProperties);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(pushButton);

        refreshButton = new QPushButton(CO2SensorProperties);
        refreshButton->setObjectName(QString::fromUtf8("refreshButton"));
        refreshButton->setMinimumSize(QSize(100, 0));
        refreshButton->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(refreshButton);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);

        QWidget::setTabOrder(orientation, maxDistance);
        QWidget::setTabOrder(maxDistance, x_);
        QWidget::setTabOrder(x_, y_);
        QWidget::setTabOrder(y_, frequency);
        QWidget::setTabOrder(frequency, pushButton);
        QWidget::setTabOrder(pushButton, refreshButton);

        retranslateUi(CO2SensorProperties);

        QMetaObject::connectSlotsByName(CO2SensorProperties);
    } // setupUi

    void retranslateUi(QWidget *CO2SensorProperties)
    {
        CO2SensorProperties->setWindowTitle(QApplication::translate("CO2SensorProperties", "CO2 sensor", 0, QApplication::UnicodeUTF8));
        maxDistance->setText(QApplication::translate("CO2SensorProperties", "3.0", 0, QApplication::UnicodeUTF8));
        y_->setText(QApplication::translate("CO2SensorProperties", "0.0", 0, QApplication::UnicodeUTF8));
        x_->setText(QApplication::translate("CO2SensorProperties", "0.0", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("CO2SensorProperties", "Translation - y (m)", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CO2SensorProperties", "Max distance (m)", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CO2SensorProperties", "Translation - x (m)", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CO2SensorProperties", "Orientation", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("CO2SensorProperties", "Frequency", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("CO2SensorProperties", "Update", 0, QApplication::UnicodeUTF8));
        refreshButton->setText(QApplication::translate("CO2SensorProperties", "Refresh", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CO2SensorProperties: public Ui_CO2SensorProperties {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CO2SENSORPROPERTIES_H

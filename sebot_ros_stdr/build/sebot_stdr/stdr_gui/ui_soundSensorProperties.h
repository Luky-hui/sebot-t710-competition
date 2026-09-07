/********************************************************************************
** Form generated from reading UI file 'soundSensorProperties.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOUNDSENSORPROPERTIES_H
#define UI_SOUNDSENSORPROPERTIES_H

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

class Ui_SoundSensorProperties
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLineEdit *angleSpan;
    QLineEdit *maxDistance;
    QLineEdit *y_;
    QLineEdit *x_;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *orientation;
    QLabel *label_7;
    QLineEdit *frequency;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *refreshButton;

    void setupUi(QWidget *SoundSensorProperties)
    {
        if (SoundSensorProperties->objectName().isEmpty())
            SoundSensorProperties->setObjectName(QString::fromUtf8("SoundSensorProperties"));
        SoundSensorProperties->resize(289, 247);
        gridLayout_2 = new QGridLayout(SoundSensorProperties);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        angleSpan = new QLineEdit(SoundSensorProperties);
        angleSpan->setObjectName(QString::fromUtf8("angleSpan"));

        gridLayout->addWidget(angleSpan, 0, 1, 1, 1);

        maxDistance = new QLineEdit(SoundSensorProperties);
        maxDistance->setObjectName(QString::fromUtf8("maxDistance"));

        gridLayout->addWidget(maxDistance, 2, 1, 1, 1);

        y_ = new QLineEdit(SoundSensorProperties);
        y_->setObjectName(QString::fromUtf8("y_"));
        y_->setReadOnly(false);

        gridLayout->addWidget(y_, 4, 1, 1, 1);

        x_ = new QLineEdit(SoundSensorProperties);
        x_->setObjectName(QString::fromUtf8("x_"));
        x_->setReadOnly(false);

        gridLayout->addWidget(x_, 3, 1, 1, 1);

        label_5 = new QLabel(SoundSensorProperties);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        label_3 = new QLabel(SoundSensorProperties);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_4 = new QLabel(SoundSensorProperties);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_2 = new QLabel(SoundSensorProperties);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label = new QLabel(SoundSensorProperties);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        orientation = new QLineEdit(SoundSensorProperties);
        orientation->setObjectName(QString::fromUtf8("orientation"));

        gridLayout->addWidget(orientation, 1, 1, 1, 1);

        label_7 = new QLabel(SoundSensorProperties);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 5, 0, 1, 1);

        frequency = new QLineEdit(SoundSensorProperties);
        frequency->setObjectName(QString::fromUtf8("frequency"));

        gridLayout->addWidget(frequency, 5, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(SoundSensorProperties);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(pushButton);

        refreshButton = new QPushButton(SoundSensorProperties);
        refreshButton->setObjectName(QString::fromUtf8("refreshButton"));
        refreshButton->setMinimumSize(QSize(100, 0));
        refreshButton->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(refreshButton);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);

        QWidget::setTabOrder(angleSpan, orientation);
        QWidget::setTabOrder(orientation, maxDistance);
        QWidget::setTabOrder(maxDistance, x_);
        QWidget::setTabOrder(x_, y_);
        QWidget::setTabOrder(y_, frequency);
        QWidget::setTabOrder(frequency, pushButton);
        QWidget::setTabOrder(pushButton, refreshButton);

        retranslateUi(SoundSensorProperties);

        QMetaObject::connectSlotsByName(SoundSensorProperties);
    } // setupUi

    void retranslateUi(QWidget *SoundSensorProperties)
    {
        SoundSensorProperties->setWindowTitle(QApplication::translate("SoundSensorProperties", "Sound sensor", 0, QApplication::UnicodeUTF8));
        angleSpan->setText(QApplication::translate("SoundSensorProperties", "360", 0, QApplication::UnicodeUTF8));
        maxDistance->setText(QApplication::translate("SoundSensorProperties", "3.0", 0, QApplication::UnicodeUTF8));
        y_->setText(QApplication::translate("SoundSensorProperties", "0.0", 0, QApplication::UnicodeUTF8));
        x_->setText(QApplication::translate("SoundSensorProperties", "0.0", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("SoundSensorProperties", "Translation - y (m)", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("SoundSensorProperties", "Max distance (m)", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("SoundSensorProperties", "Translation - x (m)", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("SoundSensorProperties", "Angle span (degrees)", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SoundSensorProperties", "Orientation", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("SoundSensorProperties", "Frequency", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("SoundSensorProperties", "Update", 0, QApplication::UnicodeUTF8));
        refreshButton->setText(QApplication::translate("SoundSensorProperties", "Refresh", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SoundSensorProperties: public Ui_SoundSensorProperties {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOUNDSENSORPROPERTIES_H

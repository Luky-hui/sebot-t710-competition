/********************************************************************************
** Form generated from reading UI file 'sonarProperties.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SONARPROPERTIES_H
#define UI_SONARPROPERTIES_H

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

class Ui_SonarProperties
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLineEdit *sonarMaxDistance;
    QLabel *label_8;
    QLineEdit *sonarMinDistance;
    QLineEdit *sonarY;
    QLabel *label_2;
    QLabel *label_span;
    QLabel *label_3;
    QLabel *label_5;
    QLineEdit *sonarConeSpan;
    QLabel *label_6;
    QLabel *label_9;
    QLineEdit *sonarNoiseMean;
    QLineEdit *sonarNoiseStd;
    QLineEdit *sonarX;
    QLabel *label_7;
    QLineEdit *sonarOrientation;
    QLabel *label_4;
    QLineEdit *sonarFrequency;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *refresh_sonar;

    void setupUi(QWidget *SonarProperties)
    {
        if (SonarProperties->objectName().isEmpty())
            SonarProperties->setObjectName(QString::fromUtf8("SonarProperties"));
        SonarProperties->resize(264, 346);
        gridLayout_2 = new QGridLayout(SonarProperties);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        sonarMaxDistance = new QLineEdit(SonarProperties);
        sonarMaxDistance->setObjectName(QString::fromUtf8("sonarMaxDistance"));

        gridLayout->addWidget(sonarMaxDistance, 0, 1, 1, 1);

        label_8 = new QLabel(SonarProperties);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 7, 0, 1, 1);

        sonarMinDistance = new QLineEdit(SonarProperties);
        sonarMinDistance->setObjectName(QString::fromUtf8("sonarMinDistance"));

        gridLayout->addWidget(sonarMinDistance, 1, 1, 1, 1);

        sonarY = new QLineEdit(SonarProperties);
        sonarY->setObjectName(QString::fromUtf8("sonarY"));
        sonarY->setReadOnly(false);

        gridLayout->addWidget(sonarY, 7, 1, 1, 1);

        label_2 = new QLabel(SonarProperties);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_span = new QLabel(SonarProperties);
        label_span->setObjectName(QString::fromUtf8("label_span"));

        gridLayout->addWidget(label_span, 3, 0, 1, 1);

        label_3 = new QLabel(SonarProperties);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_5 = new QLabel(SonarProperties);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        sonarConeSpan = new QLineEdit(SonarProperties);
        sonarConeSpan->setObjectName(QString::fromUtf8("sonarConeSpan"));
        sonarConeSpan->setReadOnly(false);

        gridLayout->addWidget(sonarConeSpan, 3, 1, 1, 1);

        label_6 = new QLabel(SonarProperties);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        label_9 = new QLabel(SonarProperties);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 1, 0, 1, 1);

        sonarNoiseMean = new QLineEdit(SonarProperties);
        sonarNoiseMean->setObjectName(QString::fromUtf8("sonarNoiseMean"));
        sonarNoiseMean->setReadOnly(false);

        gridLayout->addWidget(sonarNoiseMean, 4, 1, 1, 1);

        sonarNoiseStd = new QLineEdit(SonarProperties);
        sonarNoiseStd->setObjectName(QString::fromUtf8("sonarNoiseStd"));
        sonarNoiseStd->setReadOnly(false);

        gridLayout->addWidget(sonarNoiseStd, 5, 1, 1, 1);

        sonarX = new QLineEdit(SonarProperties);
        sonarX->setObjectName(QString::fromUtf8("sonarX"));
        sonarX->setReadOnly(false);

        gridLayout->addWidget(sonarX, 6, 1, 1, 1);

        label_7 = new QLabel(SonarProperties);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        sonarOrientation = new QLineEdit(SonarProperties);
        sonarOrientation->setObjectName(QString::fromUtf8("sonarOrientation"));

        gridLayout->addWidget(sonarOrientation, 2, 1, 1, 1);

        label_4 = new QLabel(SonarProperties);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 8, 0, 1, 1);

        sonarFrequency = new QLineEdit(SonarProperties);
        sonarFrequency->setObjectName(QString::fromUtf8("sonarFrequency"));

        gridLayout->addWidget(sonarFrequency, 8, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(SonarProperties);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(pushButton);

        refresh_sonar = new QPushButton(SonarProperties);
        refresh_sonar->setObjectName(QString::fromUtf8("refresh_sonar"));
        refresh_sonar->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(refresh_sonar);


        gridLayout_2->addLayout(horizontalLayout, 2, 0, 1, 1);

        QWidget::setTabOrder(sonarMaxDistance, sonarMinDistance);
        QWidget::setTabOrder(sonarMinDistance, sonarOrientation);
        QWidget::setTabOrder(sonarOrientation, sonarConeSpan);
        QWidget::setTabOrder(sonarConeSpan, sonarNoiseMean);
        QWidget::setTabOrder(sonarNoiseMean, sonarNoiseStd);
        QWidget::setTabOrder(sonarNoiseStd, sonarX);
        QWidget::setTabOrder(sonarX, sonarY);
        QWidget::setTabOrder(sonarY, sonarFrequency);

        retranslateUi(SonarProperties);

        QMetaObject::connectSlotsByName(SonarProperties);
    } // setupUi

    void retranslateUi(QWidget *SonarProperties)
    {
        SonarProperties->setWindowTitle(QApplication::translate("SonarProperties", "Form", 0, QApplication::UnicodeUTF8));
        sonarMaxDistance->setText(QApplication::translate("SonarProperties", "3.0", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("SonarProperties", "Translation - y (m)", 0, QApplication::UnicodeUTF8));
        sonarMinDistance->setText(QApplication::translate("SonarProperties", "0.0", 0, QApplication::UnicodeUTF8));
        sonarY->setText(QApplication::translate("SonarProperties", "0.0", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("SonarProperties", "Max distance (m)", 0, QApplication::UnicodeUTF8));
        label_span->setText(QApplication::translate("SonarProperties", "Cone span (degrees)", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("SonarProperties", "Orientation", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("SonarProperties", "Noise - mean (cm)", 0, QApplication::UnicodeUTF8));
        sonarConeSpan->setText(QApplication::translate("SonarProperties", "30", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("SonarProperties", "Noise - std (cm)", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("SonarProperties", "Min distance (m)", 0, QApplication::UnicodeUTF8));
        sonarNoiseMean->setText(QApplication::translate("SonarProperties", "0.0", 0, QApplication::UnicodeUTF8));
        sonarNoiseStd->setText(QApplication::translate("SonarProperties", "0.0", 0, QApplication::UnicodeUTF8));
        sonarX->setText(QApplication::translate("SonarProperties", "0.1", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("SonarProperties", "Translation - x (m)", 0, QApplication::UnicodeUTF8));
        sonarOrientation->setText(QApplication::translate("SonarProperties", "0.0", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("SonarProperties", "Frequency", 0, QApplication::UnicodeUTF8));
        sonarFrequency->setText(QApplication::translate("SonarProperties", "10", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("SonarProperties", "Update", 0, QApplication::UnicodeUTF8));
        refresh_sonar->setText(QApplication::translate("SonarProperties", "Refresh", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SonarProperties: public Ui_SonarProperties {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SONARPROPERTIES_H

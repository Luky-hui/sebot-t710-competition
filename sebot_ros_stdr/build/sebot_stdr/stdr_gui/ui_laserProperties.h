/********************************************************************************
** Form generated from reading UI file 'laserProperties.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LASERPROPERTIES_H
#define UI_LASERPROPERTIES_H

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

class Ui_LaserProperties
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLineEdit *laserTranslationX;
    QLabel *label_4;
    QLineEdit *laserMaxDistance;
    QLabel *label_2;
    QLineEdit *laserAngleSpan;
    QLabel *label_5;
    QLineEdit *laserNoiseMean;
    QLineEdit *laserNoiseStd;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *laserTranslationY;
    QLineEdit *laserOrientation;
    QLineEdit *laserMinDistance;
    QLabel *label_10;
    QLineEdit *laserFrequency;
    QLabel *label_11;
    QLineEdit *laserRays;
    QHBoxLayout *horizontalLayout;
    QPushButton *laserUpdateButton;
    QPushButton *refresh_laser;

    void setupUi(QWidget *LaserProperties)
    {
        if (LaserProperties->objectName().isEmpty())
            LaserProperties->setObjectName(QString::fromUtf8("LaserProperties"));
        LaserProperties->resize(249, 379);
        gridLayout_2 = new QGridLayout(LaserProperties);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(LaserProperties);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        laserTranslationX = new QLineEdit(LaserProperties);
        laserTranslationX->setObjectName(QString::fromUtf8("laserTranslationX"));
        laserTranslationX->setFocusPolicy(Qt::StrongFocus);
        laserTranslationX->setReadOnly(false);

        gridLayout->addWidget(laserTranslationX, 7, 1, 1, 1);

        label_4 = new QLabel(LaserProperties);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        laserMaxDistance = new QLineEdit(LaserProperties);
        laserMaxDistance->setObjectName(QString::fromUtf8("laserMaxDistance"));
        laserMaxDistance->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(laserMaxDistance, 1, 1, 1, 1);

        label_2 = new QLabel(LaserProperties);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        laserAngleSpan = new QLineEdit(LaserProperties);
        laserAngleSpan->setObjectName(QString::fromUtf8("laserAngleSpan"));
        laserAngleSpan->setFocusPolicy(Qt::StrongFocus);
        laserAngleSpan->setReadOnly(false);

        gridLayout->addWidget(laserAngleSpan, 4, 1, 1, 1);

        label_5 = new QLabel(LaserProperties);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        laserNoiseMean = new QLineEdit(LaserProperties);
        laserNoiseMean->setObjectName(QString::fromUtf8("laserNoiseMean"));
        laserNoiseMean->setFocusPolicy(Qt::StrongFocus);
        laserNoiseMean->setReadOnly(false);

        gridLayout->addWidget(laserNoiseMean, 5, 1, 1, 1);

        laserNoiseStd = new QLineEdit(LaserProperties);
        laserNoiseStd->setObjectName(QString::fromUtf8("laserNoiseStd"));
        laserNoiseStd->setFocusPolicy(Qt::StrongFocus);
        laserNoiseStd->setReadOnly(false);

        gridLayout->addWidget(laserNoiseStd, 6, 1, 1, 1);

        label_7 = new QLabel(LaserProperties);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 7, 0, 1, 1);

        label_6 = new QLabel(LaserProperties);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 6, 0, 1, 1);

        label_8 = new QLabel(LaserProperties);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 8, 0, 1, 1);

        label_9 = new QLabel(LaserProperties);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 2, 0, 1, 1);

        laserTranslationY = new QLineEdit(LaserProperties);
        laserTranslationY->setObjectName(QString::fromUtf8("laserTranslationY"));
        laserTranslationY->setFocusPolicy(Qt::StrongFocus);
        laserTranslationY->setReadOnly(false);

        gridLayout->addWidget(laserTranslationY, 8, 1, 1, 1);

        laserOrientation = new QLineEdit(LaserProperties);
        laserOrientation->setObjectName(QString::fromUtf8("laserOrientation"));
        laserOrientation->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(laserOrientation, 3, 1, 1, 1);

        laserMinDistance = new QLineEdit(LaserProperties);
        laserMinDistance->setObjectName(QString::fromUtf8("laserMinDistance"));
        laserMinDistance->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(laserMinDistance, 2, 1, 1, 1);

        label_10 = new QLabel(LaserProperties);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 9, 0, 1, 1);

        laserFrequency = new QLineEdit(LaserProperties);
        laserFrequency->setObjectName(QString::fromUtf8("laserFrequency"));
        laserFrequency->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(laserFrequency, 9, 1, 1, 1);

        label_11 = new QLabel(LaserProperties);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 0, 0, 1, 1);

        laserRays = new QLineEdit(LaserProperties);
        laserRays->setObjectName(QString::fromUtf8("laserRays"));
        laserRays->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(laserRays, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        laserUpdateButton = new QPushButton(LaserProperties);
        laserUpdateButton->setObjectName(QString::fromUtf8("laserUpdateButton"));
        laserUpdateButton->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(laserUpdateButton);

        refresh_laser = new QPushButton(LaserProperties);
        refresh_laser->setObjectName(QString::fromUtf8("refresh_laser"));
        refresh_laser->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(refresh_laser);


        gridLayout_2->addLayout(horizontalLayout, 2, 0, 1, 1);

        QWidget::setTabOrder(laserRays, laserMaxDistance);
        QWidget::setTabOrder(laserMaxDistance, laserMinDistance);
        QWidget::setTabOrder(laserMinDistance, laserOrientation);
        QWidget::setTabOrder(laserOrientation, laserAngleSpan);
        QWidget::setTabOrder(laserAngleSpan, laserNoiseMean);
        QWidget::setTabOrder(laserNoiseMean, laserNoiseStd);
        QWidget::setTabOrder(laserNoiseStd, laserTranslationX);
        QWidget::setTabOrder(laserTranslationX, laserTranslationY);
        QWidget::setTabOrder(laserTranslationY, laserFrequency);

        retranslateUi(LaserProperties);

        QMetaObject::connectSlotsByName(LaserProperties);
    } // setupUi

    void retranslateUi(QWidget *LaserProperties)
    {
        LaserProperties->setWindowTitle(QApplication::translate("LaserProperties", "Laser", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("LaserProperties", "Orientation", 0, QApplication::UnicodeUTF8));
        laserTranslationX->setText(QApplication::translate("LaserProperties", "0.1", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("LaserProperties", "Angle span (degrees)", 0, QApplication::UnicodeUTF8));
        laserMaxDistance->setText(QApplication::translate("LaserProperties", "10", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("LaserProperties", "Max distance (m)", 0, QApplication::UnicodeUTF8));
        laserAngleSpan->setText(QApplication::translate("LaserProperties", "270", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("LaserProperties", "Noise - mean (cm)", 0, QApplication::UnicodeUTF8));
        laserNoiseMean->setText(QApplication::translate("LaserProperties", "0.0", 0, QApplication::UnicodeUTF8));
        laserNoiseStd->setText(QApplication::translate("LaserProperties", "0.0", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("LaserProperties", "Translation - x (m)", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("LaserProperties", "Noise - std (cm)", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("LaserProperties", "Translation - y (m)", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("LaserProperties", "Min distance (m)", 0, QApplication::UnicodeUTF8));
        laserTranslationY->setText(QApplication::translate("LaserProperties", "0.0", 0, QApplication::UnicodeUTF8));
        laserOrientation->setText(QApplication::translate("LaserProperties", "0", 0, QApplication::UnicodeUTF8));
        laserMinDistance->setText(QApplication::translate("LaserProperties", "0", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("LaserProperties", "Frequency (Hz)", 0, QApplication::UnicodeUTF8));
        laserFrequency->setText(QApplication::translate("LaserProperties", "10", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("LaserProperties", "Number of rays", 0, QApplication::UnicodeUTF8));
        laserRays->setText(QApplication::translate("LaserProperties", "270", 0, QApplication::UnicodeUTF8));
        laserUpdateButton->setText(QApplication::translate("LaserProperties", "Update", 0, QApplication::UnicodeUTF8));
        refresh_laser->setText(QApplication::translate("LaserProperties", "Refresh", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class LaserProperties: public Ui_LaserProperties {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LASERPROPERTIES_H

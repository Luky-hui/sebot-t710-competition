/********************************************************************************
** Form generated from reading UI file 'laserVisualization.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LASERVISUALIZATION_H
#define UI_LASERVISUALIZATION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_laserVisualization
{
public:
    QLabel *laserMean;
    QLabel *laserMax;
    QLabel *laserMin;
    QLabel *laserImage;

    void setupUi(QWidget *laserVisualization)
    {
        if (laserVisualization->objectName().isEmpty())
            laserVisualization->setObjectName(QString::fromUtf8("laserVisualization"));
        laserVisualization->resize(333, 345);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(laserVisualization->sizePolicy().hasHeightForWidth());
        laserVisualization->setSizePolicy(sizePolicy);
        laserVisualization->setMinimumSize(QSize(333, 345));
        laserVisualization->setMaximumSize(QSize(333, 345));
        laserMean = new QLabel(laserVisualization);
        laserMean->setObjectName(QString::fromUtf8("laserMean"));
        laserMean->setGeometry(QRect(120, 320, 101, 20));
        laserMean->setFrameShape(QFrame::StyledPanel);
        laserMean->setFrameShadow(QFrame::Plain);
        laserMean->setTextFormat(Qt::AutoText);
        laserMean->setAlignment(Qt::AlignCenter);
        laserMax = new QLabel(laserVisualization);
        laserMax->setObjectName(QString::fromUtf8("laserMax"));
        laserMax->setGeometry(QRect(230, 320, 91, 20));
        laserMax->setFrameShape(QFrame::StyledPanel);
        laserMax->setFrameShadow(QFrame::Plain);
        laserMax->setTextFormat(Qt::AutoText);
        laserMax->setAlignment(Qt::AlignCenter);
        laserMin = new QLabel(laserVisualization);
        laserMin->setObjectName(QString::fromUtf8("laserMin"));
        laserMin->setGeometry(QRect(10, 320, 101, 20));
        laserMin->setFrameShape(QFrame::StyledPanel);
        laserMin->setFrameShadow(QFrame::Plain);
        laserMin->setTextFormat(Qt::AutoText);
        laserMin->setAlignment(Qt::AlignCenter);
        laserImage = new QLabel(laserVisualization);
        laserImage->setObjectName(QString::fromUtf8("laserImage"));
        laserImage->setGeometry(QRect(10, 0, 310, 310));
        laserImage->setMinimumSize(QSize(310, 310));
        laserImage->setMaximumSize(QSize(310, 310));

        retranslateUi(laserVisualization);

        QMetaObject::connectSlotsByName(laserVisualization);
    } // setupUi

    void retranslateUi(QWidget *laserVisualization)
    {
        laserVisualization->setWindowTitle(QApplication::translate("laserVisualization", "Form", 0, QApplication::UnicodeUTF8));
        laserMean->setText(QApplication::translate("laserVisualization", "0 m", 0, QApplication::UnicodeUTF8));
        laserMax->setText(QApplication::translate("laserVisualization", "0 m", 0, QApplication::UnicodeUTF8));
        laserMin->setText(QApplication::translate("laserVisualization", "0 m", 0, QApplication::UnicodeUTF8));
        laserImage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class laserVisualization: public Ui_laserVisualization {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LASERVISUALIZATION_H

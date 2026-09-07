/********************************************************************************
** Form generated from reading UI file 'robotVisualization.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROBOTVISUALIZATION_H
#define UI_ROBOTVISUALIZATION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_robotVisualization
{
public:
    QLabel *robotImage;
    QLabel *robotPose;
    QLabel *robotSpeeds;
    QLabel *robotPoseX;
    QLabel *robotPoseY;
    QLabel *robotPoseTheta;
    QLabel *robotSpeedLinear;
    QLabel *robotSpeedAngular;
    QLabel *robotSpeedLinearY;

    void setupUi(QWidget *robotVisualization)
    {
        if (robotVisualization->objectName().isEmpty())
            robotVisualization->setObjectName(QString::fromUtf8("robotVisualization"));
        robotVisualization->resize(333, 490);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(robotVisualization->sizePolicy().hasHeightForWidth());
        robotVisualization->setSizePolicy(sizePolicy);
        robotVisualization->setMinimumSize(QSize(333, 490));
        robotVisualization->setMaximumSize(QSize(333, 490));
        robotImage = new QLabel(robotVisualization);
        robotImage->setObjectName(QString::fromUtf8("robotImage"));
        robotImage->setGeometry(QRect(11, 12, 310, 310));
        robotImage->setMinimumSize(QSize(310, 310));
        robotImage->setMaximumSize(QSize(310, 310));
        robotImage->setFrameShape(QFrame::StyledPanel);
        robotPose = new QLabel(robotVisualization);
        robotPose->setObjectName(QString::fromUtf8("robotPose"));
        robotPose->setGeometry(QRect(10, 330, 311, 17));
        robotSpeeds = new QLabel(robotVisualization);
        robotSpeeds->setObjectName(QString::fromUtf8("robotSpeeds"));
        robotSpeeds->setGeometry(QRect(10, 411, 311, 17));
        robotPoseX = new QLabel(robotVisualization);
        robotPoseX->setObjectName(QString::fromUtf8("robotPoseX"));
        robotPoseX->setGeometry(QRect(10, 350, 311, 17));
        robotPoseY = new QLabel(robotVisualization);
        robotPoseY->setObjectName(QString::fromUtf8("robotPoseY"));
        robotPoseY->setGeometry(QRect(10, 370, 311, 17));
        robotPoseTheta = new QLabel(robotVisualization);
        robotPoseTheta->setObjectName(QString::fromUtf8("robotPoseTheta"));
        robotPoseTheta->setGeometry(QRect(10, 390, 311, 17));
        robotSpeedLinear = new QLabel(robotVisualization);
        robotSpeedLinear->setObjectName(QString::fromUtf8("robotSpeedLinear"));
        robotSpeedLinear->setGeometry(QRect(10, 430, 311, 17));
        robotSpeedAngular = new QLabel(robotVisualization);
        robotSpeedAngular->setObjectName(QString::fromUtf8("robotSpeedAngular"));
        robotSpeedAngular->setGeometry(QRect(10, 470, 311, 17));
        robotSpeedLinearY = new QLabel(robotVisualization);
        robotSpeedLinearY->setObjectName(QString::fromUtf8("robotSpeedLinearY"));
        robotSpeedLinearY->setGeometry(QRect(10, 450, 311, 17));

        retranslateUi(robotVisualization);

        QMetaObject::connectSlotsByName(robotVisualization);
    } // setupUi

    void retranslateUi(QWidget *robotVisualization)
    {
        robotVisualization->setWindowTitle(QApplication::translate("robotVisualization", "Form", 0, QApplication::UnicodeUTF8));
        robotImage->setText(QString());
        robotPose->setText(QApplication::translate("robotVisualization", "Pose [x,y,theta] : ", 0, QApplication::UnicodeUTF8));
        robotSpeeds->setText(QApplication::translate("robotVisualization", "Speeds [u,w] : ", 0, QApplication::UnicodeUTF8));
        robotPoseX->setText(QApplication::translate("robotVisualization", "x = ", 0, QApplication::UnicodeUTF8));
        robotPoseY->setText(QApplication::translate("robotVisualization", "y = ", 0, QApplication::UnicodeUTF8));
        robotPoseTheta->setText(QApplication::translate("robotVisualization", "theta = ", 0, QApplication::UnicodeUTF8));
        robotSpeedLinear->setText(QApplication::translate("robotVisualization", "u_x = ", 0, QApplication::UnicodeUTF8));
        robotSpeedAngular->setText(QApplication::translate("robotVisualization", "w = ", 0, QApplication::UnicodeUTF8));
        robotSpeedLinearY->setText(QApplication::translate("robotVisualization", "u_y = ", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class robotVisualization: public Ui_robotVisualization {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROBOTVISUALIZATION_H

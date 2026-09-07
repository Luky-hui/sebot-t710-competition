/********************************************************************************
** Form generated from reading UI file 'slam.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SLAM_H
#define UI_SLAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SLAM
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_14;
    QHBoxLayout *horizontalLayout_11;
    QCommandLinkButton *button_sasu;
    QPushButton *button_moveCamera;
    QPushButton *button_select;
    QPushButton *button_set2DPose;
    QPushButton *button_setGoal;
    QPushButton *button_savemap;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_build_map;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QToolBox *toolBox;
    QWidget *page;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_12;
    QLabel *label_13;
    QTreeView *treeView_rvizDisplayTree;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *button_addTopic;
    QPushButton *pushButton_remove_topic;
    QPushButton *pushButton_rename_topic;
    QGridLayout *gridLayout_10;
    QPushButton *pushButton_rvizReadDisplaySet;
    QPushButton *pushButton_rvizSaveDisplaySet;
    QWidget *page_table;
    QVBoxLayout *verticalLayout_6;
    QFrame *verticalFrame;
    QVBoxLayout *verticalLayout_8;
    QWidget *horizontalWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *checkBox_table;
    QFrame *line;
    QWidget *widget_goal1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_32;
    QLineEdit *lineEdit_goal1;
    QPushButton *button_deleteGoal1;
    QWidget *widget_goal2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_33;
    QLineEdit *lineEdit_goal2;
    QPushButton *button_deleteGoal2;
    QWidget *widget_goal3;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_34;
    QLineEdit *lineEdit_goal3;
    QPushButton *button_deleteGoal3;
    QWidget *widget_goal4;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_35;
    QLineEdit *lineEdit_goal4;
    QPushButton *button_deleteGoal4;
    QWidget *widget_goal5;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_36;
    QLineEdit *lineEdit_goal5;
    QPushButton *button_deleteGoal5;
    QWidget *widget_goal6;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label;
    QLineEdit *lineEdit_goal6;
    QPushButton *button_deleteGoal6;
    QWidget *horizontalWidget_3;
    QHBoxLayout *horizontalLayout_12;
    QCheckBox *checkBox_serving;
    QLineEdit *lineEdit_serving;
    QWidget *horizontalWidget_4;
    QHBoxLayout *horizontalLayout_13;
    QCheckBox *checkBox_origin;
    QLineEdit *lineEdit_origin;
    QWidget *horizontalWidget_5;
    QHBoxLayout *horizontalLayout_14;
    QCheckBox *checkBox_counter;
    QLineEdit *lineEdit_counter;
    QPushButton *button_save;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *SLAM)
    {
        if (SLAM->objectName().isEmpty())
            SLAM->setObjectName(QStringLiteral("SLAM"));
        SLAM->setWindowModality(Qt::NonModal);
        SLAM->resize(1080, 640);
        horizontalLayout = new QHBoxLayout(SLAM);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        widget_2 = new QWidget(SLAM);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        button_sasu = new QCommandLinkButton(widget_2);
        button_sasu->setObjectName(QStringLiteral("button_sasu"));
        button_sasu->setMaximumSize(QSize(70, 16777215));
        button_sasu->setCursor(QCursor(Qt::OpenHandCursor));

        horizontalLayout_11->addWidget(button_sasu);

        button_moveCamera = new QPushButton(widget_2);
        button_moveCamera->setObjectName(QStringLiteral("button_moveCamera"));
        button_moveCamera->setCursor(QCursor(Qt::OpenHandCursor));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/rotate_cam.svg"), QSize(), QIcon::Normal, QIcon::Off);
        button_moveCamera->setIcon(icon);

        horizontalLayout_11->addWidget(button_moveCamera);

        button_select = new QPushButton(widget_2);
        button_select->setObjectName(QStringLiteral("button_select"));
        button_select->setCursor(QCursor(Qt::OpenHandCursor));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/classes/Select.png"), QSize(), QIcon::Normal, QIcon::Off);
        button_select->setIcon(icon1);

        horizontalLayout_11->addWidget(button_select);

        button_set2DPose = new QPushButton(widget_2);
        button_set2DPose->setObjectName(QStringLiteral("button_set2DPose"));
        button_set2DPose->setMaximumSize(QSize(16777215, 16777215));
        button_set2DPose->setCursor(QCursor(Qt::OpenHandCursor));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/classes/SetInitialPose.png"), QSize(), QIcon::Normal, QIcon::Off);
        button_set2DPose->setIcon(icon2);

        horizontalLayout_11->addWidget(button_set2DPose);

        button_setGoal = new QPushButton(widget_2);
        button_setGoal->setObjectName(QStringLiteral("button_setGoal"));
        button_setGoal->setCursor(QCursor(Qt::OpenHandCursor));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/classes/SetGoal.png"), QSize(), QIcon::Normal, QIcon::Off);
        button_setGoal->setIcon(icon3);

        horizontalLayout_11->addWidget(button_setGoal);

        button_savemap = new QPushButton(widget_2);
        button_savemap->setObjectName(QStringLiteral("button_savemap"));
        button_savemap->setMaximumSize(QSize(16777215, 16777215));
        button_savemap->setCursor(QCursor(Qt::OpenHandCursor));
        QIcon icon4;
        icon4.addFile(QStringLiteral("../resources/images/classes/SetGoal.png"), QSize(), QIcon::Normal, QIcon::Off);
        button_savemap->setIcon(icon4);

        horizontalLayout_11->addWidget(button_savemap);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_2);


        verticalLayout_14->addLayout(horizontalLayout_11);

        verticalLayout_build_map = new QVBoxLayout();
        verticalLayout_build_map->setObjectName(QStringLiteral("verticalLayout_build_map"));

        verticalLayout_14->addLayout(verticalLayout_build_map);

        verticalLayout_14->setStretch(1, 1);

        verticalLayout->addLayout(verticalLayout_14);


        horizontalLayout->addWidget(widget_2);

        widget = new QWidget(SLAM);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMaximumSize(QSize(290, 16777215));
        widget->setLayoutDirection(Qt::RightToLeft);
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        toolBox = new QToolBox(widget);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setLayoutDirection(Qt::LeftToRight);
        toolBox->setAutoFillBackground(false);
        toolBox->setFrameShape(QFrame::StyledPanel);
        toolBox->setFrameShadow(QFrame::Raised);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 274, 524));
        verticalLayout_2 = new QVBoxLayout(page);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(1);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_12 = new QLabel(page);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMaximumSize(QSize(16, 16));
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/images/classes/Displays.svg")));

        horizontalLayout_6->addWidget(label_12);

        label_13 = new QLabel(page);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_6->addWidget(label_13);


        verticalLayout_5->addLayout(horizontalLayout_6);

        treeView_rvizDisplayTree = new QTreeView(page);
        treeView_rvizDisplayTree->setObjectName(QStringLiteral("treeView_rvizDisplayTree"));

        verticalLayout_5->addWidget(treeView_rvizDisplayTree);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        button_addTopic = new QPushButton(page);
        button_addTopic->setObjectName(QStringLiteral("button_addTopic"));
        button_addTopic->setEnabled(false);

        horizontalLayout_5->addWidget(button_addTopic);

        pushButton_remove_topic = new QPushButton(page);
        pushButton_remove_topic->setObjectName(QStringLiteral("pushButton_remove_topic"));
        pushButton_remove_topic->setEnabled(false);

        horizontalLayout_5->addWidget(pushButton_remove_topic);

        pushButton_rename_topic = new QPushButton(page);
        pushButton_rename_topic->setObjectName(QStringLiteral("pushButton_rename_topic"));
        pushButton_rename_topic->setEnabled(false);

        horizontalLayout_5->addWidget(pushButton_rename_topic);


        verticalLayout_5->addLayout(horizontalLayout_5);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        pushButton_rvizReadDisplaySet = new QPushButton(page);
        pushButton_rvizReadDisplaySet->setObjectName(QStringLiteral("pushButton_rvizReadDisplaySet"));
        pushButton_rvizReadDisplaySet->setEnabled(false);

        gridLayout_10->addWidget(pushButton_rvizReadDisplaySet, 0, 0, 1, 1);

        pushButton_rvizSaveDisplaySet = new QPushButton(page);
        pushButton_rvizSaveDisplaySet->setObjectName(QStringLiteral("pushButton_rvizSaveDisplaySet"));
        pushButton_rvizSaveDisplaySet->setEnabled(false);

        gridLayout_10->addWidget(pushButton_rvizSaveDisplaySet, 0, 1, 1, 1);


        verticalLayout_5->addLayout(gridLayout_10);


        verticalLayout_2->addLayout(verticalLayout_5);

        toolBox->addItem(page, QString::fromUtf8("\350\247\206\345\233\276\350\256\276\347\275\256"));
        page_table = new QWidget();
        page_table->setObjectName(QStringLiteral("page_table"));
        page_table->setGeometry(QRect(0, 0, 213, 538));
        verticalLayout_6 = new QVBoxLayout(page_table);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalFrame = new QFrame(page_table);
        verticalFrame->setObjectName(QStringLiteral("verticalFrame"));
        verticalFrame->setFrameShape(QFrame::StyledPanel);
        verticalLayout_8 = new QVBoxLayout(verticalFrame);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(-1, -1, -1, 2);
        horizontalWidget_2 = new QWidget(verticalFrame);
        horizontalWidget_2->setObjectName(QStringLiteral("horizontalWidget_2"));
        horizontalLayout_4 = new QHBoxLayout(horizontalWidget_2);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(2, 2, 2, 2);
        checkBox_table = new QCheckBox(horizontalWidget_2);
        checkBox_table->setObjectName(QStringLiteral("checkBox_table"));

        horizontalLayout_4->addWidget(checkBox_table);

        line = new QFrame(horizontalWidget_2);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line);


        verticalLayout_8->addWidget(horizontalWidget_2);

        widget_goal1 = new QWidget(verticalFrame);
        widget_goal1->setObjectName(QStringLiteral("widget_goal1"));
        horizontalLayout_2 = new QHBoxLayout(widget_goal1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(2, 2, 2, 2);
        label_32 = new QLabel(widget_goal1);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setMaximumSize(QSize(61, 17));

        horizontalLayout_2->addWidget(label_32);

        lineEdit_goal1 = new QLineEdit(widget_goal1);
        lineEdit_goal1->setObjectName(QStringLiteral("lineEdit_goal1"));
        QFont font;
        font.setPointSize(9);
        lineEdit_goal1->setFont(font);

        horizontalLayout_2->addWidget(lineEdit_goal1);

        button_deleteGoal1 = new QPushButton(widget_goal1);
        button_deleteGoal1->setObjectName(QStringLiteral("button_deleteGoal1"));
        button_deleteGoal1->setMaximumSize(QSize(25, 16777215));
        button_deleteGoal1->setCursor(QCursor(Qt::OpenHandCursor));

        horizontalLayout_2->addWidget(button_deleteGoal1);


        verticalLayout_8->addWidget(widget_goal1);

        widget_goal2 = new QWidget(verticalFrame);
        widget_goal2->setObjectName(QStringLiteral("widget_goal2"));
        horizontalLayout_7 = new QHBoxLayout(widget_goal2);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(2, 2, 2, 2);
        label_33 = new QLabel(widget_goal2);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setMaximumSize(QSize(61, 17));

        horizontalLayout_7->addWidget(label_33);

        lineEdit_goal2 = new QLineEdit(widget_goal2);
        lineEdit_goal2->setObjectName(QStringLiteral("lineEdit_goal2"));
        lineEdit_goal2->setFont(font);

        horizontalLayout_7->addWidget(lineEdit_goal2);

        button_deleteGoal2 = new QPushButton(widget_goal2);
        button_deleteGoal2->setObjectName(QStringLiteral("button_deleteGoal2"));
        button_deleteGoal2->setMaximumSize(QSize(25, 16777215));
        button_deleteGoal2->setCursor(QCursor(Qt::OpenHandCursor));

        horizontalLayout_7->addWidget(button_deleteGoal2);


        verticalLayout_8->addWidget(widget_goal2);

        widget_goal3 = new QWidget(verticalFrame);
        widget_goal3->setObjectName(QStringLiteral("widget_goal3"));
        horizontalLayout_8 = new QHBoxLayout(widget_goal3);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(2, 2, 2, 2);
        label_34 = new QLabel(widget_goal3);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setMaximumSize(QSize(61, 17));

        horizontalLayout_8->addWidget(label_34);

        lineEdit_goal3 = new QLineEdit(widget_goal3);
        lineEdit_goal3->setObjectName(QStringLiteral("lineEdit_goal3"));
        lineEdit_goal3->setFont(font);

        horizontalLayout_8->addWidget(lineEdit_goal3);

        button_deleteGoal3 = new QPushButton(widget_goal3);
        button_deleteGoal3->setObjectName(QStringLiteral("button_deleteGoal3"));
        button_deleteGoal3->setMaximumSize(QSize(25, 16777215));
        button_deleteGoal3->setCursor(QCursor(Qt::OpenHandCursor));

        horizontalLayout_8->addWidget(button_deleteGoal3);


        verticalLayout_8->addWidget(widget_goal3);

        widget_goal4 = new QWidget(verticalFrame);
        widget_goal4->setObjectName(QStringLiteral("widget_goal4"));
        horizontalLayout_9 = new QHBoxLayout(widget_goal4);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(2, 2, 2, 2);
        label_35 = new QLabel(widget_goal4);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setMaximumSize(QSize(61, 17));

        horizontalLayout_9->addWidget(label_35);

        lineEdit_goal4 = new QLineEdit(widget_goal4);
        lineEdit_goal4->setObjectName(QStringLiteral("lineEdit_goal4"));
        lineEdit_goal4->setFont(font);

        horizontalLayout_9->addWidget(lineEdit_goal4);

        button_deleteGoal4 = new QPushButton(widget_goal4);
        button_deleteGoal4->setObjectName(QStringLiteral("button_deleteGoal4"));
        button_deleteGoal4->setMaximumSize(QSize(25, 16777215));
        button_deleteGoal4->setCursor(QCursor(Qt::OpenHandCursor));

        horizontalLayout_9->addWidget(button_deleteGoal4);


        verticalLayout_8->addWidget(widget_goal4);

        widget_goal5 = new QWidget(verticalFrame);
        widget_goal5->setObjectName(QStringLiteral("widget_goal5"));
        horizontalLayout_10 = new QHBoxLayout(widget_goal5);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(2, 2, 2, 2);
        label_36 = new QLabel(widget_goal5);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setMaximumSize(QSize(61, 17));

        horizontalLayout_10->addWidget(label_36);

        lineEdit_goal5 = new QLineEdit(widget_goal5);
        lineEdit_goal5->setObjectName(QStringLiteral("lineEdit_goal5"));
        lineEdit_goal5->setFont(font);

        horizontalLayout_10->addWidget(lineEdit_goal5);

        button_deleteGoal5 = new QPushButton(widget_goal5);
        button_deleteGoal5->setObjectName(QStringLiteral("button_deleteGoal5"));
        button_deleteGoal5->setMaximumSize(QSize(25, 16777215));
        button_deleteGoal5->setCursor(QCursor(Qt::OpenHandCursor));

        horizontalLayout_10->addWidget(button_deleteGoal5);


        verticalLayout_8->addWidget(widget_goal5);

        widget_goal6 = new QWidget(verticalFrame);
        widget_goal6->setObjectName(QStringLiteral("widget_goal6"));
        horizontalLayout_15 = new QHBoxLayout(widget_goal6);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(2, 2, 2, 2);
        label = new QLabel(widget_goal6);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_15->addWidget(label);

        lineEdit_goal6 = new QLineEdit(widget_goal6);
        lineEdit_goal6->setObjectName(QStringLiteral("lineEdit_goal6"));
        lineEdit_goal6->setFont(font);

        horizontalLayout_15->addWidget(lineEdit_goal6);

        button_deleteGoal6 = new QPushButton(widget_goal6);
        button_deleteGoal6->setObjectName(QStringLiteral("button_deleteGoal6"));
        button_deleteGoal6->setMaximumSize(QSize(25, 16777215));

        horizontalLayout_15->addWidget(button_deleteGoal6);


        verticalLayout_8->addWidget(widget_goal6);


        verticalLayout_6->addWidget(verticalFrame);

        horizontalWidget_3 = new QWidget(page_table);
        horizontalWidget_3->setObjectName(QStringLiteral("horizontalWidget_3"));
        horizontalLayout_12 = new QHBoxLayout(horizontalWidget_3);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(2, 2, 2, 2);
        checkBox_serving = new QCheckBox(horizontalWidget_3);
        checkBox_serving->setObjectName(QStringLiteral("checkBox_serving"));

        horizontalLayout_12->addWidget(checkBox_serving);

        lineEdit_serving = new QLineEdit(horizontalWidget_3);
        lineEdit_serving->setObjectName(QStringLiteral("lineEdit_serving"));
        lineEdit_serving->setFont(font);

        horizontalLayout_12->addWidget(lineEdit_serving);


        verticalLayout_6->addWidget(horizontalWidget_3);

        horizontalWidget_4 = new QWidget(page_table);
        horizontalWidget_4->setObjectName(QStringLiteral("horizontalWidget_4"));
        horizontalLayout_13 = new QHBoxLayout(horizontalWidget_4);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(2, 2, 2, 2);
        checkBox_origin = new QCheckBox(horizontalWidget_4);
        checkBox_origin->setObjectName(QStringLiteral("checkBox_origin"));

        horizontalLayout_13->addWidget(checkBox_origin);

        lineEdit_origin = new QLineEdit(horizontalWidget_4);
        lineEdit_origin->setObjectName(QStringLiteral("lineEdit_origin"));
        lineEdit_origin->setFont(font);

        horizontalLayout_13->addWidget(lineEdit_origin);


        verticalLayout_6->addWidget(horizontalWidget_4);

        horizontalWidget_5 = new QWidget(page_table);
        horizontalWidget_5->setObjectName(QStringLiteral("horizontalWidget_5"));
        horizontalLayout_14 = new QHBoxLayout(horizontalWidget_5);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(2, 2, 2, 2);
        checkBox_counter = new QCheckBox(horizontalWidget_5);
        checkBox_counter->setObjectName(QStringLiteral("checkBox_counter"));

        horizontalLayout_14->addWidget(checkBox_counter);

        lineEdit_counter = new QLineEdit(horizontalWidget_5);
        lineEdit_counter->setObjectName(QStringLiteral("lineEdit_counter"));
        lineEdit_counter->setFont(font);

        horizontalLayout_14->addWidget(lineEdit_counter);


        verticalLayout_6->addWidget(horizontalWidget_5);

        button_save = new QPushButton(page_table);
        button_save->setObjectName(QStringLiteral("button_save"));

        verticalLayout_6->addWidget(button_save);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);

        toolBox->addItem(page_table, QString::fromUtf8("\345\267\245\344\275\234\345\217\260\344\275\215\347\275\256"));

        verticalLayout_4->addWidget(toolBox);


        horizontalLayout->addWidget(widget);


        retranslateUi(SLAM);

        toolBox->setCurrentIndex(1);
        toolBox->layout()->setSpacing(1);


        QMetaObject::connectSlotsByName(SLAM);
    } // setupUi

    void retranslateUi(QWidget *SLAM)
    {
        SLAM->setWindowTitle(QApplication::translate("SLAM", "\343\200\216SLAM\343\200\217\344\270\211\347\273\264\345\273\272\345\233\276", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        button_sasu->setToolTip(QApplication::translate("SLAM", "\350\277\224\345\233\236\344\270\273\351\241\265", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        button_sasu->setText(QApplication::translate("SLAM", "SASU", Q_NULLPTR));
        button_moveCamera->setText(QApplication::translate("SLAM", "\346\214\207\351\222\210\357\274\210Hand\357\274\211", Q_NULLPTR));
        button_select->setText(QApplication::translate("SLAM", "\351\200\211\344\270\255\357\274\210Select\357\274\211", Q_NULLPTR));
        button_set2DPose->setText(QApplication::translate("SLAM", "\346\240\207\350\256\260\357\274\210Position\357\274\211", Q_NULLPTR));
        button_setGoal->setText(QApplication::translate("SLAM", "\345\256\232\344\275\215\357\274\210Location\357\274\211", Q_NULLPTR));
        button_savemap->setText(QApplication::translate("SLAM", "\345\234\260\345\233\276\344\277\235\345\255\230\357\274\210Save\357\274\211", Q_NULLPTR));
        label_12->setText(QString());
        label_13->setText(QApplication::translate("SLAM", "Displays", Q_NULLPTR));
        button_addTopic->setText(QApplication::translate("SLAM", "\346\267\273\345\212\240/A", Q_NULLPTR));
        pushButton_remove_topic->setText(QApplication::translate("SLAM", "\345\210\240\351\231\244/D", Q_NULLPTR));
        pushButton_rename_topic->setText(QApplication::translate("SLAM", "\351\207\215\345\221\275\345\220\215/R", Q_NULLPTR));
        pushButton_rvizReadDisplaySet->setText(QApplication::translate("SLAM", "\345\257\274\345\205\245\351\205\215\347\275\256\346\226\207\344\273\266", Q_NULLPTR));
        pushButton_rvizSaveDisplaySet->setText(QApplication::translate("SLAM", "\345\257\274\345\207\272\351\205\215\347\275\256\346\226\207\344\273\266", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("SLAM", "\350\247\206\345\233\276\350\256\276\347\275\256", Q_NULLPTR));
        checkBox_table->setText(QApplication::translate("SLAM", "\345\267\245\344\275\234\345\217\260\344\275\215\347\275\256/Table", Q_NULLPTR));
        label_32->setText(QApplication::translate("SLAM", "\345\267\245\344\275\234\345\217\260-1:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        button_deleteGoal1->setToolTip(QApplication::translate("SLAM", "\345\210\240\351\231\244", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        button_deleteGoal1->setText(QApplication::translate("SLAM", "X", Q_NULLPTR));
        label_33->setText(QApplication::translate("SLAM", "\345\267\245\344\275\234\345\217\260-2:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        button_deleteGoal2->setToolTip(QApplication::translate("SLAM", "\345\210\240\351\231\244", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        button_deleteGoal2->setText(QApplication::translate("SLAM", "X", Q_NULLPTR));
        label_34->setText(QApplication::translate("SLAM", "\345\267\245\344\275\234\345\217\260-3:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        button_deleteGoal3->setToolTip(QApplication::translate("SLAM", "\345\210\240\351\231\244", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        button_deleteGoal3->setText(QApplication::translate("SLAM", "X", Q_NULLPTR));
        label_35->setText(QApplication::translate("SLAM", "\345\267\245\344\275\234\345\217\260-4:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        button_deleteGoal4->setToolTip(QApplication::translate("SLAM", "\345\210\240\351\231\244", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        button_deleteGoal4->setText(QApplication::translate("SLAM", "X", Q_NULLPTR));
        label_36->setText(QApplication::translate("SLAM", "\345\267\245\344\275\234\345\217\260-5:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        button_deleteGoal5->setToolTip(QApplication::translate("SLAM", "\345\210\240\351\231\244", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        button_deleteGoal5->setText(QApplication::translate("SLAM", "X", Q_NULLPTR));
        label->setText(QApplication::translate("SLAM", "\345\267\245\344\275\234\345\217\260-6:", Q_NULLPTR));
        button_deleteGoal6->setText(QApplication::translate("SLAM", "X", Q_NULLPTR));
        checkBox_serving->setText(QApplication::translate("SLAM", "\345\217\226\344\273\266\345\217\260:", Q_NULLPTR));
        checkBox_origin->setText(QApplication::translate("SLAM", "\350\265\267\345\247\213\347\202\271:", Q_NULLPTR));
        checkBox_counter->setText(QApplication::translate("SLAM", "\347\273\223\347\256\227\345\214\272:", Q_NULLPTR));
        button_save->setText(QApplication::translate("SLAM", "\360\237\222\276 Save/\344\277\235\345\255\230\344\275\215\347\275\256\344\277\241\346\201\257", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_table), QApplication::translate("SLAM", "\345\267\245\344\275\234\345\217\260\344\275\215\347\275\256", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SLAM: public Ui_SLAM {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SLAM_H

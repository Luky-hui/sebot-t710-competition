/********************************************************************************
** Form generated from reading UI file 'addtopics.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTOPICS_H
#define UI_ADDTOPICS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddTopics
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget;
    QLabel *label;
    QTextEdit *textEdit;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_cancel;
    QPushButton *pushButton_ok;

    void setupUi(QWidget *AddTopics)
    {
        if (AddTopics->objectName().isEmpty())
            AddTopics->setObjectName(QStringLiteral("AddTopics"));
        AddTopics->resize(400, 664);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/robot.png"), QSize(), QIcon::Normal, QIcon::Off);
        AddTopics->setWindowIcon(icon);
        verticalLayout_3 = new QVBoxLayout(AddTopics);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox = new QGroupBox(AddTopics);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        treeWidget = new QTreeWidget(groupBox);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));

        verticalLayout->addWidget(treeWidget);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setMaximumSize(QSize(16777215, 100));
        textEdit->setReadOnly(true);

        verticalLayout->addWidget(textEdit);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_cancel = new QPushButton(groupBox);
        pushButton_cancel->setObjectName(QStringLiteral("pushButton_cancel"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/false.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_cancel->setIcon(icon1);

        horizontalLayout->addWidget(pushButton_cancel);

        pushButton_ok = new QPushButton(groupBox);
        pushButton_ok->setObjectName(QStringLiteral("pushButton_ok"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/ok.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_ok->setIcon(icon2);

        horizontalLayout->addWidget(pushButton_ok);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addWidget(groupBox);


        retranslateUi(AddTopics);

        QMetaObject::connectSlotsByName(AddTopics);
    } // setupUi

    void retranslateUi(QWidget *AddTopics)
    {
        AddTopics->setWindowTitle(QApplication::translate("AddTopics", "rviz", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("AddTopics", "\346\267\273\345\212\240\346\230\276\347\244\272\345\233\276\345\261\202", Q_NULLPTR));
        label->setText(QApplication::translate("AddTopics", "\346\217\217\350\277\260\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("AddTopics", "\346\230\276\347\244\272\345\220\215\347\247\260\357\274\232", Q_NULLPTR));
        pushButton_cancel->setText(QApplication::translate("AddTopics", "\345\217\226\346\266\210", Q_NULLPTR));
        pushButton_ok->setText(QApplication::translate("AddTopics", "\347\241\256\345\256\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddTopics: public Ui_AddTopics {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTOPICS_H

/********************************************************************************
** Form generated from reading UI file 'addpost.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPOST_H
#define UI_ADDPOST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddPost
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_Profile;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_15;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_11;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_14;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer;

    void setupUi(QMainWindow *AddPost)
    {
        if (AddPost->objectName().isEmpty())
            AddPost->setObjectName("AddPost");
        AddPost->resize(800, 600);
        AddPost->setStyleSheet(QString::fromUtf8("background-color: rgb(31, 31, 31);\n"
""));
        centralwidget = new QWidget(AddPost);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButton_Profile = new QPushButton(centralwidget);
        pushButton_Profile->setObjectName("pushButton_Profile");
        pushButton_Profile->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    border-radius: 10px;\n"
"    background-color: #333333;\n"
"    color: white;\n"
"    padding: 10px 20px;\n"
"	margin-top:20px;\n"
"	margin-left:10px;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    text-transform: uppercase;\n"
"    outline: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #555555;\n"
"}"));

        horizontalLayout_3->addWidget(pushButton_Profile, 0, Qt::AlignLeft|Qt::AlignTop);


        horizontalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(30);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(label, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        horizontalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);


        horizontalLayout->addLayout(horizontalLayout_2);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 5);
        horizontalLayout->setStretch(2, 2);

        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);


        verticalLayout_2->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(7);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(true);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_9->addWidget(label_2, 0, Qt::AlignRight|Qt::AlignVCenter);


        horizontalLayout_8->addLayout(horizontalLayout_9);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #333333; \n"
"    border-radius: 10px;\n"
"    padding: 8px 12px;\n"
"    font-size: 16px;\n"
"    color: #FFFFFF; \n"
"    background-color: #555555; \n"
"    height: 40px; \n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #4CAF50; \n"
"    background-color: #666666; \n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #AAAAAA; \n"
"}"));

        horizontalLayout_15->addWidget(lineEdit);


        horizontalLayout_8->addLayout(horizontalLayout_15);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_3);


        horizontalLayout_8->addLayout(horizontalLayout_10);

        horizontalLayout_8->setStretch(0, 2);
        horizontalLayout_8->setStretch(1, 8);
        horizontalLayout_8->setStretch(2, 2);

        verticalLayout_7->addLayout(horizontalLayout_8);


        verticalLayout_2->addLayout(verticalLayout_7);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer);


        horizontalLayout_11->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    border-radius: 10px;\n"
"    background-color: #333333;\n"
"    color: white;\n"
"    padding: 10px 20px;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    text-transform: uppercase;\n"
"    outline: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #555555;\n"
"}"));

        horizontalLayout_14->addWidget(pushButton);


        horizontalLayout_11->addLayout(horizontalLayout_14);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_2);


        horizontalLayout_11->addLayout(horizontalLayout_12);


        verticalLayout_8->addLayout(horizontalLayout_11);


        verticalLayout_2->addLayout(verticalLayout_8);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        verticalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_2->setStretch(0, 2);
        verticalLayout_2->setStretch(1, 2);
        verticalLayout_2->setStretch(3, 2);
        verticalLayout_2->setStretch(4, 2);

        verticalLayout->addLayout(verticalLayout_2);

        verticalLayout->setStretch(0, 2);
        verticalLayout->setStretch(1, 10);
        AddPost->setCentralWidget(centralwidget);

        retranslateUi(AddPost);

        QMetaObject::connectSlotsByName(AddPost);
    } // setupUi

    void retranslateUi(QMainWindow *AddPost)
    {
        AddPost->setWindowTitle(QCoreApplication::translate("AddPost", "MainWindow", nullptr));
        pushButton_Profile->setText(QCoreApplication::translate("AddPost", "Profile", nullptr));
        label->setText(QCoreApplication::translate("AddPost", "NEW POST ", nullptr));
        label_3->setText(QString());
        label_2->setText(QCoreApplication::translate("AddPost", "DESCRIPTION : ", nullptr));
        pushButton->setText(QCoreApplication::translate("AddPost", "ADD POST", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddPost: public Ui_AddPost {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPOST_H

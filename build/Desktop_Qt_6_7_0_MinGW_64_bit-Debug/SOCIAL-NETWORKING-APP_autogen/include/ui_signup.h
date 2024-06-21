/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

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

class Ui_SignUp
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_5;
    QLabel *label;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_16;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_15;
    QLineEdit *lineEdit_userId;
    QSpacerItem *verticalSpacer_5;
    QVBoxLayout *verticalLayout_13;
    QVBoxLayout *verticalLayout_24;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_20;
    QLineEdit *lineEdit_name;
    QSpacerItem *verticalSpacer_4;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_25;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_26;
    QLineEdit *lineEdit_password;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_login;
    QPushButton *pushButton_createUser;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QMainWindow *SignUp)
    {
        if (SignUp->objectName().isEmpty())
            SignUp->setObjectName("SignUp");
        SignUp->resize(800, 600);
        SignUp->setStyleSheet(QString::fromUtf8("background-color: rgb(31, 31, 31);\n"
""));
        centralwidget = new QWidget(SignUp);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        horizontalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(30);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_5->addWidget(label, 0, Qt::AlignHCenter);


        verticalLayout->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setObjectName("verticalLayout_16");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setPointSize(13);
        font1.setBold(true);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_16->addWidget(label_2);


        verticalLayout_6->addLayout(verticalLayout_16);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName("verticalLayout_15");
        lineEdit_userId = new QLineEdit(centralwidget);
        lineEdit_userId->setObjectName("lineEdit_userId");
        lineEdit_userId->setMinimumSize(QSize(377, 41));
        lineEdit_userId->setMaximumSize(QSize(500, 45));
        lineEdit_userId->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        verticalLayout_15->addWidget(lineEdit_userId);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_15->addItem(verticalSpacer_5);


        verticalLayout_6->addLayout(verticalLayout_15);


        verticalLayout->addLayout(verticalLayout_6);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName("verticalLayout_13");
        verticalLayout_24 = new QVBoxLayout();
        verticalLayout_24->setObjectName("verticalLayout_24");
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_24->addWidget(label_3);


        verticalLayout_13->addLayout(verticalLayout_24);

        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setObjectName("verticalLayout_20");
        lineEdit_name = new QLineEdit(centralwidget);
        lineEdit_name->setObjectName("lineEdit_name");
        lineEdit_name->setMinimumSize(QSize(377, 41));
        lineEdit_name->setMaximumSize(QSize(500, 45));
        lineEdit_name->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        verticalLayout_20->addWidget(lineEdit_name);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_20->addItem(verticalSpacer_4);


        verticalLayout_13->addLayout(verticalLayout_20);


        verticalLayout->addLayout(verticalLayout_13);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_25 = new QVBoxLayout();
        verticalLayout_25->setObjectName("verticalLayout_25");
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_25->addWidget(label_4);


        verticalLayout_3->addLayout(verticalLayout_25);

        verticalLayout_26 = new QVBoxLayout();
        verticalLayout_26->setObjectName("verticalLayout_26");
        lineEdit_password = new QLineEdit(centralwidget);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setMinimumSize(QSize(377, 41));
        lineEdit_password->setMaximumSize(QSize(500, 45));
        lineEdit_password->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        verticalLayout_26->addWidget(lineEdit_password);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_26->addItem(verticalSpacer_3);


        verticalLayout_3->addLayout(verticalLayout_26);


        verticalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        pushButton_login = new QPushButton(centralwidget);
        pushButton_login->setObjectName("pushButton_login");
        pushButton_login->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_5->addWidget(pushButton_login);

        pushButton_createUser = new QPushButton(centralwidget);
        pushButton_createUser->setObjectName("pushButton_createUser");
        pushButton_createUser->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_5->addWidget(pushButton_createUser);


        verticalLayout_4->addLayout(horizontalLayout_5);


        verticalLayout->addLayout(verticalLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalLayout->setStretch(0, 3);
        verticalLayout->setStretch(1, 2);
        verticalLayout->setStretch(2, 2);
        verticalLayout->setStretch(3, 2);
        verticalLayout->setStretch(4, 2);

        horizontalLayout_3->addLayout(verticalLayout);


        horizontalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        horizontalLayout->addLayout(horizontalLayout_2);

        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(1, 4);
        horizontalLayout->setStretch(2, 3);
        SignUp->setCentralWidget(centralwidget);

        retranslateUi(SignUp);

        QMetaObject::connectSlotsByName(SignUp);
    } // setupUi

    void retranslateUi(QMainWindow *SignUp)
    {
        SignUp->setWindowTitle(QCoreApplication::translate("SignUp", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("SignUp", "SIGN UP", nullptr));
        label_2->setText(QCoreApplication::translate("SignUp", "USERNAME / USER ID", nullptr));
        lineEdit_userId->setPlaceholderText(QCoreApplication::translate("SignUp", "User00", nullptr));
        label_3->setText(QCoreApplication::translate("SignUp", "NAME", nullptr));
        lineEdit_name->setPlaceholderText(QCoreApplication::translate("SignUp", "Name", nullptr));
        label_4->setText(QCoreApplication::translate("SignUp", "PASSWORD", nullptr));
        lineEdit_password->setPlaceholderText(QCoreApplication::translate("SignUp", "Password", nullptr));
        pushButton_login->setText(QCoreApplication::translate("SignUp", "BACK TO LOGIN", nullptr));
        pushButton_createUser->setText(QCoreApplication::translate("SignUp", "CREATE USER", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignUp: public Ui_SignUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H

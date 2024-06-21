/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_19;
    QVBoxLayout *verticalLayout_22;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_17;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_9;
    QVBoxLayout *verticalLayout_20;
    QSpacerItem *verticalSpacer_6;
    QLabel *label;
    QLineEdit *lineEdit_userName;
    QSpacerItem *verticalSpacer_4;
    QVBoxLayout *verticalLayout_23;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_2;
    QLineEdit *lineEdit_password;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_18;
    QHBoxLayout *horizontalLayout_22;
    QHBoxLayout *horizontalLayout_27;
    QPushButton *pushButton_login;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *verticalSpacer_7;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QFrame *frame;
    QPushButton *pushButton_signUp;
    QVBoxLayout *verticalLayout_21;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(963, 515);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(31, 31, 31);\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_3 = new QHBoxLayout(centralwidget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);


        horizontalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setObjectName("verticalLayout_19");
        verticalLayout_22 = new QVBoxLayout();
        verticalLayout_22->setObjectName("verticalLayout_22");
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        QFont font;
        font.setPointSize(30);
        font.setBold(true);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_22->addWidget(label_3, 0, Qt::AlignHCenter);


        verticalLayout_19->addLayout(verticalLayout_22);

        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setObjectName("verticalLayout_17");
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_17->addItem(verticalSpacer_2);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_17->addItem(verticalSpacer_9);

        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setObjectName("verticalLayout_20");
        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_20->addItem(verticalSpacer_6);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_20->addWidget(label);

        lineEdit_userName = new QLineEdit(centralwidget);
        lineEdit_userName->setObjectName("lineEdit_userName");
        lineEdit_userName->setMinimumSize(QSize(377, 41));
        lineEdit_userName->setMaximumSize(QSize(500, 35));
        lineEdit_userName->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        verticalLayout_20->addWidget(lineEdit_userName);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_20->addItem(verticalSpacer_4);


        verticalLayout_17->addLayout(verticalLayout_20);

        verticalLayout_23 = new QVBoxLayout();
        verticalLayout_23->setObjectName("verticalLayout_23");
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_23->addItem(verticalSpacer_5);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(300, 35));
        label_2->setMaximumSize(QSize(500, 16777215));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_23->addWidget(label_2);

        lineEdit_password = new QLineEdit(centralwidget);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setMinimumSize(QSize(377, 41));
        lineEdit_password->setMaximumSize(QSize(500, 35));
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
        lineEdit_password->setEchoMode(QLineEdit::Password);

        verticalLayout_23->addWidget(lineEdit_password);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_23->addItem(verticalSpacer_3);


        verticalLayout_17->addLayout(verticalLayout_23);

        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setObjectName("verticalLayout_18");
        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName("horizontalLayout_22");
        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setObjectName("horizontalLayout_27");
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

        horizontalLayout_27->addWidget(pushButton_login, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        horizontalLayout_22->addLayout(horizontalLayout_27);


        verticalLayout_18->addLayout(horizontalLayout_22);


        verticalLayout_17->addLayout(verticalLayout_18);


        verticalLayout_19->addLayout(verticalLayout_17);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_19->addItem(verticalSpacer_8);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_19->addItem(verticalSpacer_7);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");

        verticalLayout_19->addLayout(verticalLayout_3);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        QFont font2;
        font2.setPointSize(11);
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_19->addWidget(label_4);

        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        verticalLayout_19->addWidget(frame);

        pushButton_signUp = new QPushButton(centralwidget);
        pushButton_signUp->setObjectName("pushButton_signUp");
        pushButton_signUp->setMinimumSize(QSize(0, 0));
        pushButton_signUp->setMaximumSize(QSize(107, 16777215));
        pushButton_signUp->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        verticalLayout_19->addWidget(pushButton_signUp);

        verticalLayout_21 = new QVBoxLayout();
        verticalLayout_21->setObjectName("verticalLayout_21");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_21->addItem(verticalSpacer);


        verticalLayout_19->addLayout(verticalLayout_21);

        verticalLayout_19->setStretch(0, 2);
        verticalLayout_19->setStretch(1, 5);

        horizontalLayout_5->addLayout(verticalLayout_19);


        horizontalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        horizontalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_3->setStretch(0, 3);
        horizontalLayout_3->setStretch(1, 4);
        horizontalLayout_3->setStretch(2, 3);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "LOG IN", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "USERNAME", nullptr));
        lineEdit_userName->setPlaceholderText(QCoreApplication::translate("MainWindow", "User00", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "PASSWORD", nullptr));
        lineEdit_password->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        pushButton_login->setText(QCoreApplication::translate("MainWindow", "LOG IN", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Don't Have an Account?", nullptr));
        pushButton_signUp->setText(QCoreApplication::translate("MainWindow", "SIGN UP", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

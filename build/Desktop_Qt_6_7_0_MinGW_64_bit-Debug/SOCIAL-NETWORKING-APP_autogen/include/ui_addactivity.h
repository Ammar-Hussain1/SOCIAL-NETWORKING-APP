/********************************************************************************
** Form generated from reading UI file 'addactivity.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDACTIVITY_H
#define UI_ADDACTIVITY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddActivity
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_profile;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_7;
    QComboBox *comboBox_type;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_11;
    QComboBox *comboBox_value;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_18;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_20;
    QLineEdit *lineEdit_description;
    QSpacerItem *verticalSpacer_4;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_14;
    QHBoxLayout *horizontalLayout_16;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_17;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_15;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_5;

    void setupUi(QMainWindow *AddActivity)
    {
        if (AddActivity->objectName().isEmpty())
            AddActivity->setObjectName("AddActivity");
        AddActivity->resize(800, 600);
        AddActivity->setStyleSheet(QString::fromUtf8("background-color: rgb(31, 31, 31);"));
        centralwidget = new QWidget(AddActivity);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton_profile = new QPushButton(centralwidget);
        pushButton_profile->setObjectName("pushButton_profile");
        pushButton_profile->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    border-radius: 10px;\n"
"    background-color: #333333;\n"
"    color: white;\n"
"    padding: 10px 20px;\n"
"	margin-top:10px;\n"
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

        horizontalLayout_2->addWidget(pushButton_profile, 0, Qt::AlignLeft|Qt::AlignTop);


        horizontalLayout->addLayout(horizontalLayout_2);

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

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");

        horizontalLayout->addLayout(horizontalLayout_3);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 5);
        horizontalLayout->setStretch(2, 2);

        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout->addLayout(verticalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_8->addWidget(label_2, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        horizontalLayout_5->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        comboBox_type = new QComboBox(centralwidget);
        comboBox_type->setObjectName("comboBox_type");
        comboBox_type->setMinimumSize(QSize(0, 53));
        QFont font2;
        font2.setPointSize(13);
        font2.setBold(true);
        comboBox_type->setFont(font2);
        comboBox_type->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"	color: #CCCCCC;\n"
"    background-color: #333333;\n"
"    border: 1px solid #666666;\n"
"    padding: 2px 8px;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    border: none;\n"
"}\n"
"\n"
"\n"
"QComboBox::item {\n"
"    background-color: #666666;\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QComboBox::item:Hover {\n"
"    background-color: #666666;\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QComboBox::item:selected {\n"
"    background-color: #444444;\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
""));

        horizontalLayout_7->addWidget(comboBox_type);


        horizontalLayout_5->addLayout(horizontalLayout_7);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 5);

        verticalLayout_5->addLayout(horizontalLayout_5);


        verticalLayout_2->addLayout(verticalLayout_5);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_13->addWidget(label_3, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        horizontalLayout_10->addLayout(horizontalLayout_13);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        comboBox_value = new QComboBox(centralwidget);
        comboBox_value->setObjectName("comboBox_value");
        comboBox_value->setMinimumSize(QSize(0, 53));
        comboBox_value->setFont(font2);
        comboBox_value->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    color: #CCCCCC;\n"
"    background-color: #333333;\n"
"    border: 1px solid #666666;\n"
"    padding: 2px 8px;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    border: none;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image: url(down-arrow.png);\n"
"}\n"
"\n"
"QComboBox::item {\n"
"    background-color: #666666;\n"
"}\n"
"\n"
"QComboBox::item:selected {\n"
"    background-color: #444444;\n"
"}\n"
""));

        horizontalLayout_11->addWidget(comboBox_value);


        horizontalLayout_10->addLayout(horizontalLayout_11);

        horizontalLayout_10->setStretch(0, 1);
        horizontalLayout_10->setStretch(1, 5);

        verticalLayout_6->addLayout(horizontalLayout_10);


        verticalLayout_2->addLayout(verticalLayout_6);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName("horizontalLayout_21");
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_21->addWidget(label_4, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        horizontalLayout_18->addLayout(horizontalLayout_21);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName("horizontalLayout_20");
        lineEdit_description = new QLineEdit(centralwidget);
        lineEdit_description->setObjectName("lineEdit_description");
        lineEdit_description->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        horizontalLayout_20->addWidget(lineEdit_description);


        horizontalLayout_18->addLayout(horizontalLayout_20);

        horizontalLayout_18->setStretch(0, 1);
        horizontalLayout_18->setStretch(1, 5);

        verticalLayout_7->addLayout(horizontalLayout_18);


        verticalLayout_2->addLayout(verticalLayout_7);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer);


        horizontalLayout_14->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName("horizontalLayout_17");
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

        horizontalLayout_17->addWidget(pushButton, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        horizontalLayout_14->addLayout(horizontalLayout_17);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_2);


        horizontalLayout_14->addLayout(horizontalLayout_15);


        verticalLayout_4->addLayout(horizontalLayout_14);


        verticalLayout_2->addLayout(verticalLayout_4);


        verticalLayout->addLayout(verticalLayout_2);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        verticalLayout->setStretch(0, 2);
        verticalLayout->setStretch(1, 2);
        verticalLayout->setStretch(2, 10);
        AddActivity->setCentralWidget(centralwidget);

        retranslateUi(AddActivity);

        QMetaObject::connectSlotsByName(AddActivity);
    } // setupUi

    void retranslateUi(QMainWindow *AddActivity)
    {
        AddActivity->setWindowTitle(QCoreApplication::translate("AddActivity", "MainWindow", nullptr));
        pushButton_profile->setText(QCoreApplication::translate("AddActivity", "PROFILE", nullptr));
        label->setText(QCoreApplication::translate("AddActivity", "ACTIVITY", nullptr));
        label_2->setText(QCoreApplication::translate("AddActivity", "TYPE", nullptr));
        label_3->setText(QCoreApplication::translate("AddActivity", "VALUE", nullptr));
        label_4->setText(QCoreApplication::translate("AddActivity", "DESCRIPTION : ", nullptr));
        pushButton->setText(QCoreApplication::translate("AddActivity", "ADD ACTIVITY", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddActivity: public Ui_AddActivity {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDACTIVITY_H

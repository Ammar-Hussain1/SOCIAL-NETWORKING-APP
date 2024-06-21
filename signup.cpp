#include "signup.h"
#include "ui_signup.h"
#include "mainwindow.h"
#include <QFile>
#include <QString>
#include <QDir>
#include <QTextStream>
#include <QMessageBox>
using namespace std;

SignUp::SignUp(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SignUp)
{
    ui->setupUi(this);
}

SignUp::~SignUp()
{
    delete ui;
}

void SignUp::on_pushButton_login_clicked()
{
    emit backToLogin();
}

void SignUp::on_pushButton_createUser_clicked()
{
    QString id = ui->lineEdit_userId->text();
    QString name = ui->lineEdit_name->text();
    QString password = ui->lineEdit_password->text();
    bool found = false;
    QMessageBox msgBox;
    msgBox.setWindowTitle("SIGN UP");
    msgBox.setText("User Created Successfully!");
    msgBox.setIcon(QMessageBox::Information);
    QString customStyle = "QMessageBox {background-color: #ffff;color: #333333;}QPushButton {background-color: #007BFF;color: white;border: none;padding: 5px;}QPushButton:hover {background-color: #0056b3;}";
    msgBox.setStyleSheet(customStyle);

    QDir dir("Users");
    if (!dir.exists())
        dir.mkpath(".");

    if (dir.exists())
    {
        if(id!=""&&name!=""&&password!="")
        {
            QFile fileRead("Users/ListOfUsersIdAndPasswords.txt");
            if(fileRead.open(QIODevice::ReadOnly))
            {
                QTextStream stream(&fileRead);
                QString userId;
                while(stream.atEnd()==false)
                {
                    userId = stream.readLine();
                    if(id == userId)
                    {
                        found = true;
                    }
                }
            }
            fileRead.close();
        }
    }

    if(!found)
    {
        msgBox.setWindowTitle("SIGN UP");
        msgBox.setText("User Created Successfully!");
        msgBox.setIcon(QMessageBox::Information);
        msgBox.exec();

        QFile file("Users/ListOfUsersIdAndPasswords.txt");
        if(file.open(QIODevice::Append|QIODevice::ReadWrite))
        {
            QTextStream stream(&file);
            if(id!=""&&name!=""&&password!="")
            {
                stream<< id <<"\n";
                QString address ;
                address += "Users/";
                address+=id;
                address+=".txt";
                QFile user(address);
                if(user.open(QIODevice::Append|QIODevice::ReadWrite))
                {
                    QTextStream streamUser(&user);
                    streamUser<<id<<"\n";
                    streamUser<<name<<"\n";
                    streamUser<<password<<"\n";
                }
                user.close();
            }
        }
        file.close();
    }
    else
    {
        msgBox.setWindowTitle("SIGN UP");
        msgBox.setText("User Id Already Taken.");
        msgBox.setIcon(QMessageBox::Information);
        msgBox.exec();
    }
}

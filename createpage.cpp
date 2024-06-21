#include "createpage.h"
#include "ui_createpage.h"

CreatePage::CreatePage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CreatePage)
{
    ui->setupUi(this);
}

void CreatePage::setUser(User *& ptr)
{
    this->currentUser = ptr;
}

CreatePage::~CreatePage()
{
    delete ui;
}

void CreatePage::on_pushButton_profile_clicked()
{
    emit backToProfile();
}


void CreatePage::on_pushButton_clicked()
{
    if(this->currentUser->pageOwned)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("CREATE PAGE");
        msgBox.setText("PAGE ALREADY EXISTS!");
        msgBox.setIcon(QMessageBox::Warning);
        QString customStyle = "QMessageBox {background-color: #ffff;color: #333333;}QPushButton {background-color: #007BFF;color: white;border: none;padding: 5px;}QPushButton:hover {background-color: #0056b3;}";
        msgBox.setStyleSheet(customStyle);
        msgBox.exec();
    }
    else
    {
        this->currentUser->pageOwned = new Page();
        this->currentUser->pageOwned->setTitle(ui->lineEdit->text().toStdString());
        this->currentUser->pageOwned->setPageOwner(this->currentUser->getUserId());
        this->currentUser->pageOwned->setPageId("PageOf"+this->currentUser->getUserId());
        QMessageBox msgBox;
        msgBox.setWindowTitle("CREATE PAGE");
        msgBox.setText("PAGE CREATED SUCCESSFULLY!");
        msgBox.setIcon(QMessageBox::Information);
        QString customStyle = "QMessageBox {background-color: #ffff;color: #333333;}QPushButton {background-color: #007BFF;color: white;border: none;padding: 5px;}QPushButton:hover {background-color: #0056b3;}";
        msgBox.setStyleSheet(customStyle);
        msgBox.exec();
    }
    QDir dir("Users");
    if (!dir.exists())
        dir.mkpath(".");
    bool found = false;
    if (dir.exists())
    {
        QFile fileRead("Users/ListOfPages.txt");
        if(fileRead.open(QIODevice::ReadOnly))
        {
            QTextStream stream(&fileRead);
            QString pageid;
            while(stream.atEnd()==false)
            {
                pageid = stream.readLine();
                if(this->currentUser->pageOwned->getPageId() == pageid.toStdString())
                {
                    found = true;
                }
            }
        }
        fileRead.close();
    }

    if(!found)
    {
        QFile file("Users/ListOfPages.txt");
        if(file.open(QIODevice::Append|QIODevice::ReadWrite))
        {
            QTextStream stream(&file);

            stream<< QString::fromStdString(this->currentUser->pageOwned->getPageId()) <<"\n";
            QString address ;
            address += "Users/";
            address+=QString::fromStdString(this->currentUser->pageOwned->getPageId());
            address+=".txt";

            QFile user(address);
            if(user.open(QIODevice::Append|QIODevice::ReadWrite))
            {
                QTextStream streamUser(&user);
                streamUser<<QString::fromStdString(this->currentUser->pageOwned->getPageId())<<"\n";
                streamUser<<QString::fromStdString(this->currentUser->pageOwned->getPageOwner())<<"\n";
                streamUser<<QString::fromStdString(this->currentUser->pageOwned->getTitle())<<"\n";
            }
            user.close();
        }
        file.close();
    }
}

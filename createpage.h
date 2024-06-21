#ifndef CREATEPAGE_H
#define CREATEPAGE_H
#include "Project.h"
#include <QString>
#include <string.h>
#include <QMessageBox>
#include <QMainWindow>
#include <QDir>
#include <QFile>

class Page;
class User;
namespace Ui {
class CreatePage;
}

class CreatePage : public QMainWindow
{
    Q_OBJECT
signals:
    void backToProfile();

public:
    explicit CreatePage(QWidget *parent = nullptr);
    ~CreatePage();
    void setUser(User*&);

private slots:
    void on_pushButton_profile_clicked();

    void on_pushButton_clicked();

private:
    Ui::CreatePage *ui;
    User* currentUser;
};

#endif // CREATEPAGE_H

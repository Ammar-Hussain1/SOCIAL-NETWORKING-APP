#pragma once
#ifndef ADDACTIVITY_H
#define ADDACTIVITY_H
#include "project.h"
#include <QMainWindow>
#include <string.h>
#include <QString>
#include <ctime>
#include <chrono>

class User;
class Activity;

namespace Ui {
class AddActivity;
}

class AddActivity : public QMainWindow
{
    Q_OBJECT

signals:
    void backToProfile();
    void backToPage();

public:
    explicit AddActivity(char parentCh,QWidget *parent = nullptr);
    ~AddActivity();
    void setUser(User *&);
    void setPage();

private slots:
    void on_pushButton_profile_clicked();

    void on_comboBox_type_currentIndexChanged(int index);

    void on_pushButton_clicked();

private:
    Ui::AddActivity *ui;
    User * currentUser;
    Activity * A;
    char parentCh;
};

#endif // ADDACTIVITY_H

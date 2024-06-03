#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QMainWindow>


#include <QtDebug>
#include <QFileInfo>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    if(username== "shristi" && password =="test"){
        QMessageBox::information(this, "login", "details are Correct");
        //hide();
        dialog = new Dialog(this);
        dialog->show();
        QSqlDatabase mydb = QSqlDatabase::addDatabase("QSQLITE");
            mydb.setDatabaseName("/home/vision/demo.db");

        if(!mydb.open())
            ui->label->setText("database is not connected");
        else {
            ui->label->setText("Connected.......");
        }


    }
    else {
        QMessageBox::warning(this, "login","details are incorrect");
    }
}

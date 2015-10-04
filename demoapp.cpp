#include "demoapp.h"
#include "ui_demoapp.h"
#include<QFile>
#include<QTextStream>
#include<QMessageBox>
#include<QFileDialog>

demoapp::demoapp(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::demoapp)
{
    ui->setupUi(this);
}

demoapp::~demoapp()
{
    delete ui;
}

void demoapp::on_pushButton_2_clicked()
{
    QFile usbfile("//home//villain//prefinal//logs//usblogs.txt");    /*write your file's path*/
    if(!usbfile.open(QIODevice::ReadOnly))
            QMessageBox::information(0,"info",usbfile.errorString());
    QTextStream usbobj(&usbfile);
    ui->textBrowser->setText(usbobj.readAll());
}

void demoapp::on_pushButton_3_clicked()
{
    QFile wififile("//home//villain//prefinal//logs//wifinetworklogs.txt");   /*write your file's path*/
    if(!wififile.open(QIODevice::ReadOnly))
            QMessageBox::information(0,"info",wififile.errorString());
    QTextStream wifiobj(&wififile);
    ui->textBrowser->setText(wifiobj.readAll());
}

void demoapp::on_pushButton_4_clicked()
{
    QFile lidfile("//home//villain//prefinal//logs//lid.txt");   /*write your file's path*/
    if(!lidfile.open(QIODevice::ReadOnly))
            QMessageBox::information(0,"info",lidfile.errorString());
    QTextStream lidobj(&lidfile);
    ui->textBrowser->setText(lidobj.readAll());
}

void demoapp::on_pushButton_clicked()
{
    QFile sudofile("//home//villain//prefinal//logs//sudo_demo.txt");   /*write your file's path*/
    if(!sudofile.open(QIODevice::ReadOnly))
            QMessageBox::information(0,"info",sudofile.errorString());
    QTextStream sudoobj(&sudofile);
    ui->textBrowser->setText(sudoobj.readAll());
}

void demoapp::on_pushButton_5_clicked()
{
    QFile blfile("//home//villain//prefinal//logs//bluetoothlogs.txt");   /*write your file's path*/
    if(!blfile.open(QIODevice::ReadOnly))
            QMessageBox::information(0,"info",blfile.errorString());
    QTextStream blobj(&blfile);
    ui->textBrowser->setText(blobj.readAll());
}

void demoapp::on_pushButton_6_clicked()
{
    QFile syspfile("//home//villain//prefinal//logs//syspower.txt");   /*write your file's path*/
    if(!syspfile.open(QIODevice::ReadOnly))
            QMessageBox::information(0,"info",syspfile.errorString());
    QTextStream syspobj(&syspfile);
    ui->textBrowser->setText(syspobj.readAll());
}

void demoapp::on_pushButton_7_clicked()
{
    QFile sysupfile("//home//villain//prefinal//logs//new_user_id.txt");   /*write your file's path*/
    if(!sysupfile.open(QIODevice::ReadOnly))
            QMessageBox::information(0,"info",sysupfile.errorString());
    QTextStream sysupobj(&sysupfile);
    ui->textBrowser->setText(sysupobj.readAll());

}

void demoapp::on_pushButton_8_clicked()
{
    QFile eathfile("//home//villain//prefinal//logs//eathernetactivationlogs.txt");   /*write your file's path*/
    if(!eathfile.open(QIODevice::ReadOnly))
            QMessageBox::information(0,"info",eathfile.errorString());
    QTextStream eathobj(&eathfile);
    ui->textBrowser->setText(eathobj.readAll());

}

void demoapp::on_pushButton_9_clicked()
{
    QFile apafile("//home//villain//prefinal//logs//apache2serverlogs.txt");   /*write your file's path*/
    if(!apafile.open(QIODevice::ReadOnly))
            QMessageBox::information(0,"info",apafile.errorString());
    QTextStream apaobj(&apafile);
    ui->textBrowser->setText(apaobj.readAll());
}

void demoapp::on_pushButton_10_clicked()
{   char c1[100],c2[100],c3[100],c4[100],c5[100];
    strcpy(c5,"cd //");
    system(c5);
    strcpy(c1,"cd //home//villain//prefinal//logs//");
    system(c1);
    strcpy(c2,"rm -rf *.txt");
    system(c2);
    strcpy(c3,"gcc sys_log.c");
    system(c3);
    strcpy(c4,".//a.out");
    system(c4);
}

/*void demoapp::on_commandLinkButton_clicked()
{
    char c1[100],c2[100],c3[100],c4[100],c5[100];
       strcpy(c5,"cd //");
       system(c5);
       strcpy(c1,"cd //home//villain//prefinal//logs//");
       system(c1);
       strcpy(c2,"rm -rf *.txt");
       system(c2);
       strcpy(c3,"gcc sys_log.c");
       system(c3);
       strcpy(c4,".//a.out");
       system(c4);
}*/

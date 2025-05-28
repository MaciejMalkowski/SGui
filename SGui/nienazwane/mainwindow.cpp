#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}



MainWindow::~MainWindow()
{
    delete ui;
    ui->MainPasek->setCurrentIndex(2);
}

void MainWindow::on_pushButton_clicked()
{
    ui->MainPasek->setCurrentIndex(1);
    ifstream file;
    file.open("dane.csv");
    string line = "";
    string predkosc;
    while(getline(file, line))
    {
        stringstream inputString(line);
        getline(inputString, predkosc, ',');
        line = "";
    }
    cout << predkosc;
    ui->PO1_speed->setText(QString::fromUtf8(predkosc.c_str()));
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->MainPasek->setCurrentIndex(3);
}


void MainWindow::on_pushButton_3_clicked()
{
    ui->MainPasek->setCurrentIndex(4);
}


void MainWindow::on_pushButton_4_clicked()
{
    ui->MainPasek->setCurrentIndex(5);
}



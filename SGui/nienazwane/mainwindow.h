#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtCore>
#include <QMainWindow>
#include <QString>
#include <iostream>
#include <fstream>
#include <QFile>
#include <QTextStream>
#include <QStringList>
#include <QMessageBox>
#include <windows.h>
#include <QTimer>
#include "rapidcsv.h"

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui {
class Sterownik;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();


private:
    Ui::Sterownik *ui;
    void loadCsvDataConsole(const QString &filePath);
};

#endif // MAINWINDOW_H

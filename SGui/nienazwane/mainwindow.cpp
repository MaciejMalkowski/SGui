#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "rapidcsv.h"
using namespace std;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Sterownik)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{
    ui->MainPasek->setCurrentIndex(1);

    MyTimer timer;

    try
    {
        rapidcsv::Document doc("C:/Users/praktykant/Desktop/SGui/nienazwane/dane.csv", rapidcsv::LabelParams(-1, -1), rapidcsv::SeparatorParams(';'));

        int rowCount = doc.GetRowCount();
        int colCount = doc.GetColumnCount();

        std::cout << "CSV has " << rowCount << " rows and " << colCount << " columns." << std::endl;


        auto columnNames = doc.GetColumnNames();


        for (const auto& colName : columnNames)
        {
            std::cout << colName << "\t";
        }
        std::cout << std::endl;



        for (int j = 0; j < colCount; ++j)
        {
            int rowCount = doc.GetRowCount();
            int colCount = doc.GetColumnCount();
            std::string cell = doc.GetCell<std::string>(j, rowCount - 1);
            std::cout << cell << "\t";
        }
        std::cout << std::endl;
        QThread::msleep(100);


    }
    catch (const std::exception& ex)
    {
        std::cerr << "Error reading CSV file: " << ex.what() << std::endl;
    }

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

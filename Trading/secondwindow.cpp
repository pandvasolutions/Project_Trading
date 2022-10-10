#include "secondwindow.h"
#include "ui_secondwindow.h"

SecondWindow::SecondWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecondWindow)
{
    ui->setupUi(this);
    ui->comboBox_strategy->addItem("Butterfly");
    ui->comboBox_strategy->addItem("DTriangle");

    ui->comboBox_2->addItem("CE");
    ui->comboBox_2->addItem("PE");
    //ComboBox_gap
    {
        ui->comboBox_gap->addItem("100");
        ui->comboBox_gap->addItem("200");
        ui->comboBox_gap->addItem("300");
        ui->comboBox_gap->addItem("400");
        ui->comboBox_gap->addItem("500");
        ui->comboBox_gap->addItem("600");
        ui->comboBox_gap->addItem("700");
        ui->comboBox_gap->addItem("800");
        ui->comboBox_gap->addItem("900");
        ui->comboBox_gap->addItem("1000");
        ui->comboBox_gap->addItem("1100");
        ui->comboBox_gap->addItem("1200");
        ui->comboBox_gap->addItem("1300");
        ui->comboBox_gap->addItem("1400");
        ui->comboBox_gap->addItem("1500");
        ui->comboBox_gap->addItem("1600");
        ui->comboBox_gap->addItem("1700");
        ui->comboBox_gap->addItem("1800");
        ui->comboBox_gap->addItem("1800");
        ui->comboBox_gap->addItem("1900");
        ui->comboBox_gap->addItem("2000");
    }
}

SecondWindow::~SecondWindow()
{
    delete ui;
}

void SecondWindow::on_pushButton_clicked()
{
        close();
}


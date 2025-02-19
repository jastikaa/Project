#include "landingpage.h"
#include "ui_landingpage.h"


LandingPage::LandingPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LandingPage)
{
    ui->setupUi(this);

    // Connect button click to the slot
    connect(ui->pushButton_writePoem, &QPushButton::clicked, this, &LandingPage::on_pushButton_writePoem_clicked);
}

LandingPage::~LandingPage()
{
    delete ui;
}



void LandingPage::on_pushButton_writePoem_clicked()
{

}


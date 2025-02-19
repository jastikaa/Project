#include "viewpoem.h"
#include "ui_viewpoem.h"

ViewPoem::ViewPoem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewPoem)
{
    ui->setupUi(this);
}

ViewPoem::~ViewPoem()
{
    delete ui;
}

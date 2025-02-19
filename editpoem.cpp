#include "editpoem.h"

Editpoem::Editpoem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Editpoem)
{
    ui->setupUi(this);
}

Editpoem::~Editpoem()
{
    delete ui;
}

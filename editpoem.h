#ifndef EDITPOEM_H
#define EDITPOEM_H

#include <QDialog>
#include "ui_editpoem.h"

namespace Ui {
class Editpoem;
}

class Editpoem : public QDialog
{
    Q_OBJECT

public:
    explicit Editpoem(QWidget *parent = nullptr);
    ~Editpoem();

private:
    Ui::Editpoem *ui;
};

#endif // EDITPOEM_H

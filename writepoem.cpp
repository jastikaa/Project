#ifndef WRITEPOEM_H
#define WRITEPOEM_H

#include <QDialog>

namespace Ui {
class WritePoem;
}

class WritePoem : public QDialog
{
    Q_OBJECT

public:
    explicit WritePoem(QWidget *parent = nullptr);
    ~WritePoem();

private:
    Ui::WritePoem *ui;
};

#endif // WRITEPOEM_H

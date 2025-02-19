#ifndef WRITEPOEM_H
#define WRITEPOEM_H

#include <QWidget>

namespace Ui {
class WritePoem;
}

class WritePoem : public QWidget
{
    Q_OBJECT

public:
    explicit WritePoem(QWidget *parent = nullptr);
    ~WritePoem();

private:
    Ui::WritePoem *ui;
};

#endif // WRITEPOEM_H

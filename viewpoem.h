#ifndef VIEWPOEM_H
#define VIEWPOEM_H

#include <QDialog>

namespace Ui {
class ViewPoem;
}

class ViewPoem : public QDialog
{
    Q_OBJECT

public:
    explicit ViewPoem(QWidget *parent = nullptr);
    ~ViewPoem();

private slots:
    void on_pushButton_searchPoem_clicked();
    void on_pushButton_likePoem_clicked();
    void on_pushButton_dislikePoem_clicked();
    void on_pushButton_previousPoem_clicked();
    void on_pushButton_nextPoem_clicked();
    void on_pushButton_deletePoem_clicked();
    void on_pushButton_back_clicked();

private:
    Ui::ViewPoem *ui;
};

#endif // VIEWPOEM_H

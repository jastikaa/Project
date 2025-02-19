#ifndef LANDINGPAGE_H
#define LANDINGPAGE_H

#include <QDialog>

namespace Ui {
class LandingPage;
}

class LandingPage : public QDialog
{
    Q_OBJECT

public:
    explicit LandingPage(QWidget *parent = nullptr);
    ~LandingPage();

private slots:
    void on_pushButton_writePoem_clicked();

private:
    Ui::LandingPage *ui;
};

#endif // LANDINGPAGE_H

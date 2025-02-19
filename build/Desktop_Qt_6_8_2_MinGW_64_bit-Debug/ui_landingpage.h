/********************************************************************************
** Form generated from reading UI file 'landingpage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LANDINGPAGE_H
#define UI_LANDINGPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LandingPage
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_title;
    QHBoxLayout *buttonLayout;
    QPushButton *pushButton_writePoem;
    QPushButton *pushButton_readPoems;
    QPushButton *pushButton_deletePoem;

    void setupUi(QDialog *LandingPage)
    {
        if (LandingPage->objectName().isEmpty())
            LandingPage->setObjectName("LandingPage");
        LandingPage->resize(500, 350);
        verticalLayout = new QVBoxLayout(LandingPage);
        verticalLayout->setObjectName("verticalLayout");
        label_title = new QLabel(LandingPage);
        label_title->setObjectName("label_title");
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        label_title->setFont(font);
        label_title->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_title);

        buttonLayout = new QHBoxLayout();
        buttonLayout->setObjectName("buttonLayout");
        pushButton_writePoem = new QPushButton(LandingPage);
        pushButton_writePoem->setObjectName("pushButton_writePoem");
        pushButton_writePoem->setMinimumSize(QSize(150, 50));

        buttonLayout->addWidget(pushButton_writePoem);

        pushButton_readPoems = new QPushButton(LandingPage);
        pushButton_readPoems->setObjectName("pushButton_readPoems");
        pushButton_readPoems->setMinimumSize(QSize(150, 50));

        buttonLayout->addWidget(pushButton_readPoems);

        pushButton_deletePoem = new QPushButton(LandingPage);
        pushButton_deletePoem->setObjectName("pushButton_deletePoem");
        pushButton_deletePoem->setMinimumSize(QSize(150, 50));

        buttonLayout->addWidget(pushButton_deletePoem);


        verticalLayout->addLayout(buttonLayout);


        retranslateUi(LandingPage);

        QMetaObject::connectSlotsByName(LandingPage);
    } // setupUi

    void retranslateUi(QDialog *LandingPage)
    {
        LandingPage->setWindowTitle(QCoreApplication::translate("LandingPage", "Poetry App", nullptr));
        label_title->setText(QCoreApplication::translate("LandingPage", "Welcome to the Poetry App", nullptr));
        pushButton_writePoem->setText(QCoreApplication::translate("LandingPage", "Write a Poem", nullptr));
        pushButton_readPoems->setText(QCoreApplication::translate("LandingPage", "Read Poems", nullptr));
        pushButton_deletePoem->setText(QCoreApplication::translate("LandingPage", "editpoem", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LandingPage: public Ui_LandingPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LANDINGPAGE_H

/********************************************************************************
** Form generated from reading UI file 'editpoem.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPOEM_H
#define UI_EDITPOEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Editpoem
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_title;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QLabel *label_poemTitle1;
    QPushButton *pushButton_editPoem1;
    QPushButton *pushButton_removePoem1;
    QPushButton *pushButton_back;

    void setupUi(QDialog *Editpoem)
    {
        if (Editpoem->objectName().isEmpty())
            Editpoem->setObjectName("Editpoem");
        Editpoem->resize(600, 400);
        verticalLayout = new QVBoxLayout(Editpoem);
        verticalLayout->setObjectName("verticalLayout");
        label_title = new QLabel(Editpoem);
        label_title->setObjectName("label_title");
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        label_title->setFont(font);
        label_title->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_title);

        scrollArea = new QScrollArea(Editpoem);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 586, 338));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName("gridLayout");
        label_poemTitle1 = new QLabel(scrollAreaWidgetContents);
        label_poemTitle1->setObjectName("label_poemTitle1");

        gridLayout->addWidget(label_poemTitle1, 0, 0, 1, 1);

        pushButton_editPoem1 = new QPushButton(scrollAreaWidgetContents);
        pushButton_editPoem1->setObjectName("pushButton_editPoem1");

        gridLayout->addWidget(pushButton_editPoem1, 0, 1, 1, 1);

        pushButton_removePoem1 = new QPushButton(scrollAreaWidgetContents);
        pushButton_removePoem1->setObjectName("pushButton_removePoem1");

        gridLayout->addWidget(pushButton_removePoem1, 0, 2, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        pushButton_back = new QPushButton(Editpoem);
        pushButton_back->setObjectName("pushButton_back");

        verticalLayout->addWidget(pushButton_back);


        retranslateUi(Editpoem);

        QMetaObject::connectSlotsByName(Editpoem);
    } // setupUi

    void retranslateUi(QDialog *Editpoem)
    {
        Editpoem->setWindowTitle(QCoreApplication::translate("Editpoem", "Edit Poems", nullptr));
        label_title->setText(QCoreApplication::translate("Editpoem", "Edit or Remove Poems", nullptr));
        label_poemTitle1->setText(QCoreApplication::translate("Editpoem", "Poem Title 1", nullptr));
        pushButton_editPoem1->setText(QCoreApplication::translate("Editpoem", "Edit", nullptr));
        pushButton_removePoem1->setText(QCoreApplication::translate("Editpoem", "Remove", nullptr));
        pushButton_back->setText(QCoreApplication::translate("Editpoem", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Editpoem: public Ui_Editpoem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPOEM_H

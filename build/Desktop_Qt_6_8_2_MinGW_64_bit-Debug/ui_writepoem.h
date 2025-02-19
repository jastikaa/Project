/********************************************************************************
** Form generated from reading UI file 'writepoem.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WRITEPOEM_H
#define UI_WRITEPOEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_WritePoem
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_title;
    QFormLayout *formLayout;
    QLabel *label_authorName;
    QLineEdit *lineEdit_authorName;
    QLabel *label_poemTitle;
    QLineEdit *lineEdit_poemTitle;
    QLabel *label_genre;
    QComboBox *comboBox_genre;
    QTextEdit *textEdit_poemContent;
    QPushButton *pushButton_submitPoem;

    void setupUi(QDialog *WritePoem)
    {
        if (WritePoem->objectName().isEmpty())
            WritePoem->setObjectName("WritePoem");
        WritePoem->resize(500, 450);
        verticalLayout = new QVBoxLayout(WritePoem);
        verticalLayout->setObjectName("verticalLayout");
        label_title = new QLabel(WritePoem);
        label_title->setObjectName("label_title");
        label_title->setAlignment(Qt::AlignCenter);
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        label_title->setFont(font);

        verticalLayout->addWidget(label_title);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        formLayout->setLabelAlignment(Qt::AlignLeft);
        label_authorName = new QLabel(WritePoem);
        label_authorName->setObjectName("label_authorName");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_authorName);

        lineEdit_authorName = new QLineEdit(WritePoem);
        lineEdit_authorName->setObjectName("lineEdit_authorName");

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_authorName);

        label_poemTitle = new QLabel(WritePoem);
        label_poemTitle->setObjectName("label_poemTitle");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_poemTitle);

        lineEdit_poemTitle = new QLineEdit(WritePoem);
        lineEdit_poemTitle->setObjectName("lineEdit_poemTitle");

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_poemTitle);

        label_genre = new QLabel(WritePoem);
        label_genre->setObjectName("label_genre");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_genre);

        comboBox_genre = new QComboBox(WritePoem);
        comboBox_genre->addItem(QString());
        comboBox_genre->addItem(QString());
        comboBox_genre->addItem(QString());
        comboBox_genre->addItem(QString());
        comboBox_genre->setObjectName("comboBox_genre");

        formLayout->setWidget(2, QFormLayout::FieldRole, comboBox_genre);


        verticalLayout->addLayout(formLayout);

        textEdit_poemContent = new QTextEdit(WritePoem);
        textEdit_poemContent->setObjectName("textEdit_poemContent");
        QFont font1;
        font1.setPointSize(12);
        textEdit_poemContent->setFont(font1);

        verticalLayout->addWidget(textEdit_poemContent);

        pushButton_submitPoem = new QPushButton(WritePoem);
        pushButton_submitPoem->setObjectName("pushButton_submitPoem");

        verticalLayout->addWidget(pushButton_submitPoem);


        retranslateUi(WritePoem);

        QMetaObject::connectSlotsByName(WritePoem);
    } // setupUi

    void retranslateUi(QDialog *WritePoem)
    {
        WritePoem->setWindowTitle(QCoreApplication::translate("WritePoem", "Write Poem", nullptr));
        label_title->setText(QCoreApplication::translate("WritePoem", "Write and Submit Your Poem", nullptr));
        label_authorName->setText(QCoreApplication::translate("WritePoem", "Author Name:", nullptr));
        label_poemTitle->setText(QCoreApplication::translate("WritePoem", "Poem Title:", nullptr));
        label_genre->setText(QCoreApplication::translate("WritePoem", "Genre:", nullptr));
        comboBox_genre->setItemText(0, QCoreApplication::translate("WritePoem", "Romantic", nullptr));
        comboBox_genre->setItemText(1, QCoreApplication::translate("WritePoem", "Nature", nullptr));
        comboBox_genre->setItemText(2, QCoreApplication::translate("WritePoem", "Haiku", nullptr));
        comboBox_genre->setItemText(3, QCoreApplication::translate("WritePoem", "Free Verse", nullptr));

        textEdit_poemContent->setPlaceholderText(QCoreApplication::translate("WritePoem", "Write your poem here...", nullptr));
        pushButton_submitPoem->setText(QCoreApplication::translate("WritePoem", "Submit Poem", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WritePoem: public Ui_WritePoem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WRITEPOEM_H

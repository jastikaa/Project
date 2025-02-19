/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_title;
    QFormLayout *formLayout;
    QLabel *label_username;
    QLineEdit *lineEdit_username;
    QLabel *label_email;
    QLineEdit *lineEdit_email;
    QLabel *label_password;
    QLineEdit *lineEdit_password;
    QLabel *label_genre;
    QComboBox *comboBox_genre;
    QLabel *label_gender;
    QComboBox *comboBox_gender;
    QPushButton *pushButton_register;
    QLabel *label_footer;

    void setupUi(QDialog *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName("Register");
        Register->resize(500, 450);
        verticalLayout = new QVBoxLayout(Register);
        verticalLayout->setObjectName("verticalLayout");
        label_title = new QLabel(Register);
        label_title->setObjectName("label_title");
        label_title->setAlignment(Qt::AlignCenter);
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label_title->setFont(font);

        verticalLayout->addWidget(label_title);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        formLayout->setLabelAlignment(Qt::AlignLeft);
        label_username = new QLabel(Register);
        label_username->setObjectName("label_username");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_username);

        lineEdit_username = new QLineEdit(Register);
        lineEdit_username->setObjectName("lineEdit_username");

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_username);

        label_email = new QLabel(Register);
        label_email->setObjectName("label_email");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_email);

        lineEdit_email = new QLineEdit(Register);
        lineEdit_email->setObjectName("lineEdit_email");

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_email);

        label_password = new QLabel(Register);
        label_password->setObjectName("label_password");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_password);

        lineEdit_password = new QLineEdit(Register);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_password);

        label_genre = new QLabel(Register);
        label_genre->setObjectName("label_genre");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_genre);

        comboBox_genre = new QComboBox(Register);
        comboBox_genre->addItem(QString());
        comboBox_genre->addItem(QString());
        comboBox_genre->addItem(QString());
        comboBox_genre->addItem(QString());
        comboBox_genre->setObjectName("comboBox_genre");

        formLayout->setWidget(3, QFormLayout::FieldRole, comboBox_genre);

        label_gender = new QLabel(Register);
        label_gender->setObjectName("label_gender");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_gender);

        comboBox_gender = new QComboBox(Register);
        comboBox_gender->addItem(QString());
        comboBox_gender->addItem(QString());
        comboBox_gender->addItem(QString());
        comboBox_gender->setObjectName("comboBox_gender");

        formLayout->setWidget(4, QFormLayout::FieldRole, comboBox_gender);


        verticalLayout->addLayout(formLayout);

        pushButton_register = new QPushButton(Register);
        pushButton_register->setObjectName("pushButton_register");

        verticalLayout->addWidget(pushButton_register);

        label_footer = new QLabel(Register);
        label_footer->setObjectName("label_footer");
        label_footer->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_footer);


        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QDialog *Register)
    {
        Register->setWindowTitle(QCoreApplication::translate("Register", "Register", nullptr));
        label_title->setText(QCoreApplication::translate("Register", "Register for Poetry App", nullptr));
        label_username->setText(QCoreApplication::translate("Register", "Username:", nullptr));
        label_email->setText(QCoreApplication::translate("Register", "Email:", nullptr));
        label_password->setText(QCoreApplication::translate("Register", "Password:", nullptr));
        label_genre->setText(QCoreApplication::translate("Register", "Favorite Genre:", nullptr));
        comboBox_genre->setItemText(0, QCoreApplication::translate("Register", "Romantic", nullptr));
        comboBox_genre->setItemText(1, QCoreApplication::translate("Register", "Nature", nullptr));
        comboBox_genre->setItemText(2, QCoreApplication::translate("Register", "Haiku", nullptr));
        comboBox_genre->setItemText(3, QCoreApplication::translate("Register", "Free Verse", nullptr));

        label_gender->setText(QCoreApplication::translate("Register", "Gender:", nullptr));
        comboBox_gender->setItemText(0, QCoreApplication::translate("Register", "Male", nullptr));
        comboBox_gender->setItemText(1, QCoreApplication::translate("Register", "Female", nullptr));
        comboBox_gender->setItemText(2, QCoreApplication::translate("Register", "Other", nullptr));

        pushButton_register->setText(QCoreApplication::translate("Register", "Register", nullptr));
        label_footer->setText(QCoreApplication::translate("Register", "Already have an account? Log in", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H

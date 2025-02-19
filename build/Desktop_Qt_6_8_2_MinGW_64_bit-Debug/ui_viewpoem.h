/********************************************************************************
** Form generated from reading UI file 'viewpoem.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWPOEM_H
#define UI_VIEWPOEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ViewPoem
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_title;
    QHBoxLayout *searchLayout;
    QLineEdit *lineEdit_searchPoem;
    QPushButton *pushButton_searchPoem;
    QTextEdit *textEdit_poemContent;
    QHBoxLayout *infoLayout;
    QLabel *label_author;
    QLabel *label_authorName;
    QLabel *label_uploadedTime;
    QLabel *label_uploadedDate;
    QHBoxLayout *likeDislikeLayout;
    QPushButton *pushButton_likePoem;
    QPushButton *pushButton_dislikePoem;
    QHBoxLayout *navLayout;
    QHBoxLayout *buttonLayout;

    void setupUi(QDialog *ViewPoem)
    {
        if (ViewPoem->objectName().isEmpty())
            ViewPoem->setObjectName("ViewPoem");
        ViewPoem->resize(600, 500);
        verticalLayout = new QVBoxLayout(ViewPoem);
        verticalLayout->setObjectName("verticalLayout");
        label_title = new QLabel(ViewPoem);
        label_title->setObjectName("label_title");
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        label_title->setFont(font);
        label_title->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_title);

        searchLayout = new QHBoxLayout();
        searchLayout->setObjectName("searchLayout");
        lineEdit_searchPoem = new QLineEdit(ViewPoem);
        lineEdit_searchPoem->setObjectName("lineEdit_searchPoem");

        searchLayout->addWidget(lineEdit_searchPoem);

        pushButton_searchPoem = new QPushButton(ViewPoem);
        pushButton_searchPoem->setObjectName("pushButton_searchPoem");

        searchLayout->addWidget(pushButton_searchPoem);


        verticalLayout->addLayout(searchLayout);

        textEdit_poemContent = new QTextEdit(ViewPoem);
        textEdit_poemContent->setObjectName("textEdit_poemContent");
        QFont font1;
        font1.setPointSize(12);
        textEdit_poemContent->setFont(font1);
        textEdit_poemContent->setReadOnly(true);

        verticalLayout->addWidget(textEdit_poemContent);

        infoLayout = new QHBoxLayout();
        infoLayout->setObjectName("infoLayout");
        label_author = new QLabel(ViewPoem);
        label_author->setObjectName("label_author");

        infoLayout->addWidget(label_author);

        label_authorName = new QLabel(ViewPoem);
        label_authorName->setObjectName("label_authorName");

        infoLayout->addWidget(label_authorName);

        label_uploadedTime = new QLabel(ViewPoem);
        label_uploadedTime->setObjectName("label_uploadedTime");

        infoLayout->addWidget(label_uploadedTime);

        label_uploadedDate = new QLabel(ViewPoem);
        label_uploadedDate->setObjectName("label_uploadedDate");

        infoLayout->addWidget(label_uploadedDate);


        verticalLayout->addLayout(infoLayout);

        likeDislikeLayout = new QHBoxLayout();
        likeDislikeLayout->setObjectName("likeDislikeLayout");
        pushButton_likePoem = new QPushButton(ViewPoem);
        pushButton_likePoem->setObjectName("pushButton_likePoem");

        likeDislikeLayout->addWidget(pushButton_likePoem);

        pushButton_dislikePoem = new QPushButton(ViewPoem);
        pushButton_dislikePoem->setObjectName("pushButton_dislikePoem");

        likeDislikeLayout->addWidget(pushButton_dislikePoem);


        verticalLayout->addLayout(likeDislikeLayout);

        navLayout = new QHBoxLayout();
        navLayout->setObjectName("navLayout");

        verticalLayout->addLayout(navLayout);

        buttonLayout = new QHBoxLayout();
        buttonLayout->setObjectName("buttonLayout");

        verticalLayout->addLayout(buttonLayout);


        retranslateUi(ViewPoem);

        QMetaObject::connectSlotsByName(ViewPoem);
    } // setupUi

    void retranslateUi(QDialog *ViewPoem)
    {
        ViewPoem->setWindowTitle(QCoreApplication::translate("ViewPoem", "View Poem", nullptr));
        label_title->setText(QCoreApplication::translate("ViewPoem", "View Poem", nullptr));
        lineEdit_searchPoem->setPlaceholderText(QCoreApplication::translate("ViewPoem", "Enter Poem Title", nullptr));
        pushButton_searchPoem->setText(QCoreApplication::translate("ViewPoem", "Search", nullptr));
        label_author->setText(QCoreApplication::translate("ViewPoem", "Author:", nullptr));
        label_authorName->setText(QCoreApplication::translate("ViewPoem", "[Author Name]", nullptr));
        label_uploadedTime->setText(QCoreApplication::translate("ViewPoem", "Uploaded on:", nullptr));
        label_uploadedDate->setText(QCoreApplication::translate("ViewPoem", "[Upload Date]", nullptr));
        pushButton_likePoem->setText(QCoreApplication::translate("ViewPoem", "Like", nullptr));
        pushButton_dislikePoem->setText(QCoreApplication::translate("ViewPoem", "Dislike", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewPoem: public Ui_ViewPoem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWPOEM_H

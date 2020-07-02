/********************************************************************************
** Form generated from reading UI file 'markdowneditor.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MARKDOWNEDITOR_H
#define UI_MARKDOWNEDITOR_H

#include <QtCore/QVariant>
#include <QtWebEngineWidgets/QWebEngineView>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_markdowneditor
{
public:
    QAction *actionBold;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QPushButton *Bold;
    QSplitter *splitter;
    QPlainTextEdit *editor;
    QWebEngineView *preview;

    void setupUi(QDialog *markdowneditor)
    {
        if (markdowneditor->objectName().isEmpty())
            markdowneditor->setObjectName(QString::fromUtf8("markdowneditor"));
        markdowneditor->resize(663, 503);
        actionBold = new QAction(markdowneditor);
        actionBold->setObjectName(QString::fromUtf8("actionBold"));
        verticalLayout_2 = new QVBoxLayout(markdowneditor);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(markdowneditor);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMaximumSize(QSize(872, 43));
        Bold = new QPushButton(widget);
        Bold->setObjectName(QString::fromUtf8("Bold"));
        Bold->setGeometry(QRect(0, 0, 75, 41));

        verticalLayout->addWidget(widget);

        splitter = new QSplitter(markdowneditor);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        editor = new QPlainTextEdit(splitter);
        editor->setObjectName(QString::fromUtf8("editor"));
        QFont font;
        font.setFamily(QString::fromUtf8("Shobhika Regular"));
        font.setPointSize(14);
        editor->setFont(font);
        splitter->addWidget(editor);
        preview = new QWebEngineView(splitter);
        preview->setObjectName(QString::fromUtf8("preview"));
        preview->setUrl(QUrl(QString::fromUtf8("about:blank")));
        splitter->addWidget(preview);

        verticalLayout->addWidget(splitter);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(markdowneditor);

        QMetaObject::connectSlotsByName(markdowneditor);
    } // setupUi

    void retranslateUi(QDialog *markdowneditor)
    {
        markdowneditor->setWindowTitle(QCoreApplication::translate("markdowneditor", "markdowneditor", nullptr));
        actionBold->setText(QCoreApplication::translate("markdowneditor", "Bold", nullptr));
        Bold->setText(QCoreApplication::translate("markdowneditor", "Bold", nullptr));
    } // retranslateUi

};

namespace Ui {
    class markdowneditor: public Ui_markdowneditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MARKDOWNEDITOR_H

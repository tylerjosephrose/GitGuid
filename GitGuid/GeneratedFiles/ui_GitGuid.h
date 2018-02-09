/********************************************************************************
** Form generated from reading UI file 'GitGuid.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GITGUID_H
#define UI_GITGUID_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GitGuidClass
{
public:
    QWidget *centralWidget;
    QLabel *gitUsernameLabel;
    QLabel *gitPasswordLabel;
    QLabel *title;
    QPushButton *logInButton;
    QPushButton *cancelButton;
    QLineEdit *gitUsername;
    QLineEdit *gitPassword;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *GitGuidClass)
    {
        if (GitGuidClass->objectName().isEmpty())
            GitGuidClass->setObjectName(QStringLiteral("GitGuidClass"));
        GitGuidClass->resize(600, 291);
        centralWidget = new QWidget(GitGuidClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gitUsernameLabel = new QLabel(centralWidget);
        gitUsernameLabel->setObjectName(QStringLiteral("gitUsernameLabel"));
        gitUsernameLabel->setGeometry(QRect(30, 100, 131, 16));
        QFont font;
        font.setPointSize(12);
        gitUsernameLabel->setFont(font);
        gitPasswordLabel = new QLabel(centralWidget);
        gitPasswordLabel->setObjectName(QStringLiteral("gitPasswordLabel"));
        gitPasswordLabel->setGeometry(QRect(35, 140, 131, 16));
        gitPasswordLabel->setFont(font);
        title = new QLabel(centralWidget);
        title->setObjectName(QStringLiteral("title"));
        title->setGeometry(QRect(230, 10, 121, 91));
        QFont font1;
        font1.setPointSize(26);
        title->setFont(font1);
        logInButton = new QPushButton(centralWidget);
        logInButton->setObjectName(QStringLiteral("logInButton"));
        logInButton->setEnabled(false);
        logInButton->setGeometry(QRect(440, 210, 75, 23));
        cancelButton = new QPushButton(centralWidget);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(330, 210, 75, 23));
        gitUsername = new QLineEdit(centralWidget);
        gitUsername->setObjectName(QStringLiteral("gitUsername"));
        gitUsername->setGeometry(QRect(166, 100, 271, 20));
        gitUsername->setFocusPolicy(Qt::StrongFocus);
        gitPassword = new QLineEdit(centralWidget);
        gitPassword->setObjectName(QStringLiteral("gitPassword"));
        gitPassword->setGeometry(QRect(166, 140, 271, 20));
        gitPassword->setEchoMode(QLineEdit::Password);
        GitGuidClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(GitGuidClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        GitGuidClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(GitGuidClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        GitGuidClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(GitGuidClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        GitGuidClass->setStatusBar(statusBar);
        QWidget::setTabOrder(gitUsername, gitPassword);
        QWidget::setTabOrder(gitPassword, logInButton);
        QWidget::setTabOrder(logInButton, cancelButton);

        retranslateUi(GitGuidClass);
        QObject::connect(cancelButton, SIGNAL(released()), GitGuidClass, SLOT(close()));

        QMetaObject::connectSlotsByName(GitGuidClass);
    } // setupUi

    void retranslateUi(QMainWindow *GitGuidClass)
    {
        GitGuidClass->setWindowTitle(QApplication::translate("GitGuidClass", "GitGuid", nullptr));
        gitUsernameLabel->setText(QApplication::translate("GitGuidClass", "Github Username:", nullptr));
        gitPasswordLabel->setText(QApplication::translate("GitGuidClass", "Github Password:", nullptr));
        title->setText(QApplication::translate("GitGuidClass", "GitGuid", nullptr));
        logInButton->setText(QApplication::translate("GitGuidClass", "Log In", nullptr));
        cancelButton->setText(QApplication::translate("GitGuidClass", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GitGuidClass: public Ui_GitGuidClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GITGUID_H

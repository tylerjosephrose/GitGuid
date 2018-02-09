#include "GitGuid.h"

GitGuid::GitGuid(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.gitPassword, SIGNAL(textChanged(QString)), this, SLOT(checkInput()));
	connect(ui.gitUsername, SIGNAL(textChanged(QString)), this, SLOT(checkInput()));
	connect(ui.logInButton, SIGNAL(released()), this, SLOT(loginInput()));
}

void GitGuid::checkInput()
{

	if (!ui.gitPassword->text().isEmpty() && !ui.gitUsername->text().isEmpty())
		ui.logInButton->setEnabled(true);
}

void GitGuid::loginInput()
{
	qInfo(ui.gitUsername->text().toUtf8());
	qInfo(ui.gitPassword->text().toUtf8());
	return;
}

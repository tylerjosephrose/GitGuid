#pragma once

#include <QtWidgets/QMainWindow>
#include "GeneratedFiles/ui_GitGuid.h"

#include <string.h>

class GitGuid : public QMainWindow
{
	Q_OBJECT

public:
	GitGuid(QWidget *parent = Q_NULLPTR);

private:
	Ui::GitGuidClass ui;

	
private slots:
	bool checkInput();
	void loginInput();
	void verifyLogin();
};

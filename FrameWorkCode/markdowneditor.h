#pragma once

#include <QDialog>
#include "ui_markdowneditor.h"

class markdowneditor : public QDialog
{
	Q_OBJECT

public:
	markdowneditor(QWidget *parent = Q_NULLPTR);
	~markdowneditor();

private:
	Ui::markdowneditor ui;
};

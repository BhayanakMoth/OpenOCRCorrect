#pragma once

#include <QDialog>
#include "ui_markdowneditor.h"
#include <QString>
#include "Document.h"
class markdowneditor : public QDialog
{
	Q_OBJECT

public:
	markdowneditor(QString text, QWidget *parent = Q_NULLPTR);
	~markdowneditor();
private slots:
	void on_actionBold_triggered();

private:
	Ui::markdowneditor ui;
	Document m_content;
	QString path;
};

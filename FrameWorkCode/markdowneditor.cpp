#include "markdowneditor.h"
#include <QWebChannel>
#include <QTextDocumentFragment>
#include "Previewpage.h"
markdowneditor::markdowneditor(QString text, QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	ui.preview->setContextMenuPolicy(Qt::NoContextMenu);
	PreviewPage * page = new PreviewPage(this);
	ui.preview->setPage(page);
	ui.editor->setPlainText(text);
	//m_content.setText(text);
	connect(ui.editor, &QPlainTextEdit::textChanged, [this]() {
		m_content.setText(ui.editor->toPlainText());
		});
	QWebChannel * channel = new QWebChannel(this);
	channel->registerObject(QStringLiteral("content"), &m_content);
	page->setWebChannel(channel);
	ui.preview->setUrl(QUrl("qrc:/Markdown/resources/index.html"));
	connect(ui.Bold, SIGNAL(released()), this, SLOT(on_actionBold_triggered()));
}
void markdowneditor::on_actionBold_triggered() {
	auto cursor = ui.editor->textCursor();
	if (cursor.selectedText().isEmpty()) {
		cursor.insertText("**Insert Text Here**");
	}
	else {
		auto frag = cursor.selection();
		auto qstr = frag.toPlainText();
		auto stdstr = qstr.toStdString();
		size_t loc = stdstr.find("**");
		if (loc != std::string::npos) {
			stdstr.erase(loc, 2);
			size_t loc2 = stdstr.find_last_of("**");
			if (loc2 != std::string::npos)
				stdstr.erase(loc2 - 1, 2);
			if (loc != 0) {
				stdstr = "**" + stdstr + "**";
			}
			auto qstr2 = qstr.fromStdString(stdstr);

			auto newfrag = frag.fromPlainText(qstr2);
			cursor.insertFragment(newfrag);
			return;
		}
		else {
			qstr = "**" + qstr + "**";
			auto newfrag = frag.fromPlainText(qstr);
			cursor.insertFragment(newfrag);
		}
	}

}
markdowneditor::~markdowneditor()
{
	
}

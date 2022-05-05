#include "gui.h"
#include "httpclient.h"
#include <QCoreApplication>

Gui::Gui(QWidget *parent) :
    QWidget(parent)
{
    setupUi(this);
}

void Gui::on_goButton_clicked()
{
    QString m_hostname = hostEntry->text();

    resultBrowser->append("Connected!");
    resultBrowser->append(m_hostname);

    QString result;

}

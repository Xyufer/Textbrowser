#ifndef HTTPCLIENT_H
#define HTTPCLIENT_H

#include <QObject>
#include <QTcpSocket>
#include <QAbstractSocket>

class HttpClient : public QObject
{
    Q_OBJECT
public:
    explicit HttpClient(QObject *parent = nullptr);
    QTcpSocket *m_socket;
    QByteArray m_hostname;

signals:

public slots:
    void connected();
    void readyRead();
};

#endif // HTTPCLIENT_H

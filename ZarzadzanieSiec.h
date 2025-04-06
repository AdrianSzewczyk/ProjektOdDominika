#ifndef ZARZADZANIESIEC_H
#define ZARZADZANIESIEC_H

#include <QObject>
#include <QTcpSocket>

class ZarzadzanieSiec : public QObject
{
    Q_OBJECT
public:
    explicit ZarzadzanieSiec(QObject *parent = nullptr);
    void connectToDevice(QString i, int p);

signals:
    void connected();
    void disconnected();
    void stateChanged(QAbstractSocket::SocketState);
    void errorOccurred(QAbstractSocket::SocketError);

private:
    QTcpSocket socket;
    QString ip;
    int port;

};

#endif // ZARZADZANIESIEC_H

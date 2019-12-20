#ifndef SOCKETPLACEHOLDER_H
#define SOCKETPLACEHOLDER_H

#include <QObject>
#include <QTcpSocket>
#include <QString>
#include <QRandomGenerator>
#include <unistd.h>

class SocketPlaceholder : public QTcpSocket
{
public:
    SocketPlaceholder(unsigned int id);
    void write(QString msg);
    bool waitForBytesWritten(unsigned int sec);
    QString readAll();
    void flush();
    bool waitForReadyRead(unsigned int i);
    bool wait;
    QStringList packet;
    unsigned int idOrdi;
    QString randomPlay;
};

#endif // SOCKETPLACEHOLDER_H

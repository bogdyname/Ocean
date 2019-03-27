/*
***Copyright (C) 2019 Softwater Inc
***Contact: bogdyname@gmail.com
*/

#ifndef PEERMANAGER_H
#define PEERMANAGER_H

#include <QList>
#include <QTimer>
#include <QObject>
#include <QByteArray>
#include <QUdpSocket>

class UserClient;
class Connection;

static const qint32 BroadcastInterval = 2000;
static const unsigned broadcastPort = 45000;

class PeerManager : public QObject
{
    Q_OBJECT

public:
    PeerManager(UserClient *userclient);

    QString userName() const;
    void startBroadcasting();
    void setServerPort(int port);
    bool isWLANHostAddress(const QHostAddress &address);

signals:
    void newConnection(Connection *connection);

private slots:
    void sendBroadcastDatagram();
    void readBroadcastDatagram();

private:
    void updateAddresses();

    UserClient *userclient;

    int serverPort;
    QString username;
    QTimer broadcastTimer;
    QUdpSocket broadcastSocket;
    QList<QHostAddress> ipAddresses;
    QList<QHostAddress> broadcastAddresses;
};

#endif // PEERMANAGER_H

#ifndef QGSSERVER_H
#define GGSSERVER_H

#include <QObject>
#include <QDebug>
#include <QtNetwork/QTcpServer>
#include <QtNetwork/QTcpSocket>

class QGSServer : public QObject
{
  Q_OBJECT

  public:
    QGSServer(int port, const QString& project, QObject *parent = 0);

  public slots:
    void newConnection();

  private:
    void init( int port );
    void writeData( QTcpSocket &socket, const QString &str );

    QTcpServer *server;
};

#endif

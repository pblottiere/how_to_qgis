#ifndef QGSCLIENT_H
#define QGSCLIENT_H

#include <QtNetwork/QTcpSocket>

class QGSClient : public QObject
{
  Q_OBJECT

  public :
    QGSClient();

  public slots :
    void connectToServer(const QString &IP, int port);

  private slots :
    void connectionOK();
    void readData();

  signals :
    void clean();
    void wkt( const QString &str );
    void done();

  private :
    QTcpSocket mSocket;
};

#endif

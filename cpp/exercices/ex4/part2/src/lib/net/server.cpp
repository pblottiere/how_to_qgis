#include <unistd.h>
#include "server.h"
#include <iostream>

QGSServer::QGSServer(int port, const QString &project, QObject *parent)
  : QObject(parent)
{
  init( port );
}

void QGSServer::init( int port )
{
  server = new QTcpServer(this);

  connect(server, SIGNAL(newConnection()), this, SLOT(newConnection()));

  if(!server->listen(QHostAddress::Any, port))
  {
    std::cout << "Server could not start!" << std::endl;;
  }
  else
  {
    std::cout << "Server started!" << std::endl;
  }
}

void QGSServer::newConnection()
{
  QTcpSocket *socket = server->nextPendingConnection();

  while( true )
  {
    std::cout << "Send data to the client..." << std::endl;
    writeData( *socket, "BEGIN\n" );
    sleep(3);
  }

  socket->close();
}

void QGSServer::writeData( QTcpSocket &socket, const QString &str )
{
  socket.write(str.toStdString().c_str());
  socket.flush();
  socket.waitForBytesWritten(5000);
}

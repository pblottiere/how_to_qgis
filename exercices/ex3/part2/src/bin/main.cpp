#include <QApplication>
#include <QTranslator>

#include <iostream>

#include "view.h"
//#include "model.h"
//#include "controller.h"

int main( int argc, char** argv )
{
  // init application
  QApplication app( argc, argv );

  // parse command line to get language
  if ( argc != 3 )
  {
    std::cerr << "Invalid command lines arguments. Usage: " << std::endl;
    std::cerr << "  ./memo [file] [language]" << std::endl;
    return 1;
  }

  QString memoFile = QCoreApplication::arguments().at(1);
  QString lang = QCoreApplication::arguments().at(2);

  // translate
  QString qm_file = "i18n/texts_" + lang;
  QTranslator translator;
  translator.load(qm_file);
  app.installTranslator( &translator );

  // init widgets
  //Model model( memoFile );
  View view;
  view.show();

  //Controller controller( &view, &model );

  return app.exec();
}

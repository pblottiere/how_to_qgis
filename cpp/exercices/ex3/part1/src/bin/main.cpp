#include <QApplication>
#include <QTextEdit>
#include <QVBoxLayout>

int main( int argc, char** argv )
{
  QApplication app( argc, argv );

  QTextEdit *textEdit = new QTextEdit;

  QVBoxLayout *layout = new QVBoxLayout;
  layout->addWidget(textEdit);

  QWidget window;
  window.setLayout(layout);

  window.show();

  return app.exec();
}

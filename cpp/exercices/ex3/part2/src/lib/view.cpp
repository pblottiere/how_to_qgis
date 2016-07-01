#include "view.h"

View::View()
  : QWidget()
{
  mTextEdit = new QTextEdit( this );
  mQuitButton = new QPushButton( QPushButton::tr( "Quit" ), this );
  mSaveButton = new QPushButton( QPushButton::tr( "Save" ), this );

  QVBoxLayout *layout = new QVBoxLayout( this );
  layout->addWidget(mTextEdit);
  layout->addWidget(mSaveButton);
  layout->addWidget(mQuitButton);
  this->setLayout( layout );

  QObject::connect( mQuitButton, SIGNAL( clicked() ), this, SLOT( onQuit() ) );
  QObject::connect( mSaveButton, SIGNAL( clicked() ), this, SLOT( onSave() ) );
}

View::~View()
{
}

void View::onQuit()
{
  emit quit();
}

void View::onSave()
{
  emit save();
}

void View::setText( const QString& text )
{
  mTextEdit->setText( text );
}

void View::text( QString& text )
{
  text = mTextEdit->toPlainText();
}

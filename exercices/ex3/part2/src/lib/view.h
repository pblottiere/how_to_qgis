#ifndef VIEW_H
#define VIEW_H

#include <QPushButton>
#include <QWidget>
#include <QTextEdit>
#include <QVBoxLayout>

class View : public QWidget
{
  Q_OBJECT

  public:
    View();
    ~View();

    void text( QString& text );
    void setText( const QString& text );

  signals:
    void quit();
    void save();

  private slots:
    void onQuit();
    void onSave();

  private:
    QTextEdit *mTextEdit;
    QPushButton *mQuitButton;
    QPushButton *mSaveButton;
};

#endif

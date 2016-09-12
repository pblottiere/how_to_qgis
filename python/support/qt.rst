PyQT (1)
========

|

.. image:: imgs/qt.png
  :width: 150pt
  :align: center

- 1995
- multiplateforme
- libre depuis QT4
- widgets graphiques, signaux/slots, macros, patterns, ...

PyQT (2)
========

**QApplication**

.. code-block:: python

  #!/usr/bin/python
  # -*- coding: utf-8 -*-
  import sys
  from PyQt4 import QtGui

  def run():
      app = QtGui.QApplication(sys.argv)

      w = QtGui.QWidget()
      w.resize(250, 150)
      w.setWindowTitle('MyApp')
      w.show()

      text = QtGui.QLabel('Hello World', w)
      text.show()

      sys.exit(app.exec_())

  if __name__ == '__main__':
      run()


PyQT (3)
========

|

**slot/signal**

.. code-block:: python

  from PyQt4.QtCore import QObject, pyqtSignal

  class Foo(QObject):

      mysignal = pyqtSignal()

      def run(self):
          self.mysignal.connect(self.myslot)
          self.mysignal.emit()

      def myslot(self):
          print "signal received"

PyQT (4)
========

**QtDesigner**

Outil de modélisation de fenêtres

.. image:: imgs/qtdesigner.png
  :width: 600pt
  :align: center


PyQT (5)
========

**pyuic**

Utilitaire de transformation de code *.ui* en code Python

.. code-block:: bash

  # pyuic4 file.ui -o file_ui.py

Le code généré :

.. code-block:: python

  class Ui_MainWindow(object):
      def setupUi(self, MainWindow):
          MainWindow.setObjectName(_fromUtf8("MainWindow"))
          MainWindow.resize(800, 600)
          self.centralwidget = QtGui.QWidget(MainWindow)
          self.centralwidget.setObjectName(_fromUtf8("centralwidget"))
          self.verticalLayoutWidget = QtGui.QWidget(self.centralwidget)
          self.verticalLayoutWidget.setGeometry(QtCore.QRect(9, 19, 781, 531))
          self.verticalLayoutWidget.setObjectName(_fromUtf8("verticalLayoutWidget"))
          self.verticalLayout = QtGui.QVBoxLayout(self.verticalLayoutWidget)


PyQT (6)
========

**pyrcc**

Utilitaire de transformation de code *.qrc* en code Python

.. code-block:: bash

  # pyrcc4 resources.qrc -o resources.py

.. code-block:: python

  <RCC>
    <qresource prefix="/plugins/MyPlugin" >
      <file>icon.png</file>
    </qresource>
  </RCC>


PyQT (7)
========

|

**EXERCICE 3**

|

.. image:: imgs/exo.png
  :width: 200pt
  :align: center

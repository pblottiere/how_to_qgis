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

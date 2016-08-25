from PyQt4.QtCore import QObject, pyqtSignal

class Foo(QObject):

    mysignal = pyqtSignal()

    def run(self):
        self.mysignal.connect(self.myslot)
        self.mysignal.emit()

    def myslot(self):
        print "signal received"

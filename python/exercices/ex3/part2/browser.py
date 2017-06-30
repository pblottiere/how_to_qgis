# -*- coding: utf-8 -*-

import os

from PyQt4.QtGui import QDialog
from PyQt4.QtGui import QDialogButtonBox
from PyQt4.QtGui import QFileDialog
from PyQt4.QtCore import QDir
from PyQt4.QtCore import pyqtSignal


class Browser( QDialog, ban_ui.Ui_Browser ):

    def __init__(self):
        QDialog.__init__(self)
        self.setupUi(self)

        # init attributes
        # TODO

        # custom settings for widgets
        # TODO

        # connect
        # TODO

    @property
    def filename(self):
        # TODO
        pass

    @filename.setter
    def filename(self, filename):
        # TODO
        pass

    def _in_progress(self, line):
        # TODO
        pass

    def _compute_done(self):
        # TODO
        pass

    def _ok(self):
        # TODO
        pass

    def _browse(self):
        # TODO
        pass

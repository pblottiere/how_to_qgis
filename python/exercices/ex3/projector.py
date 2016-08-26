# -*- coding:utf-8 -*-

from PyQt4.QtCore import QThread
import os


def count_lines(filename):
    # TODO
    pass


def reproject(x, y, source_srid, dest_srid):

    # TODO
    pass


def transform_csv(filename, separator=','):

    # TODO
    pass


class Projector(QThread):

    # TODO : declare signals

    def __init__(self):
        QThread.__init__(self)
        self._filename = ""

    @property
    def filename(self):
        # TODO
        pass

    @filename.setter
    def filename(self, filename):
        # TODO
        pass

    def run(self):
        # TODO
        pass

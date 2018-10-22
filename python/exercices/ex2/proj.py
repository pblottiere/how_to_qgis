# -*- coding:utf-8 -*-

def docstring_example(a, b):

    """
        Simple docstring example:

        :param a: Description of a
        :param b: Description of b
        :type a: int
        :type b: int
        :return: The result is just another integer
        :rtype: int
    """

    return a + b


def reproject_pyproj(x, y, source_srid, dest_srid):

    from pyproj import Proj, transform

    sp = Proj("+init=EPSG:{}".format(source_srid))
    dp = Proj("+init=EPSG:{}".format(dest_srid))

    xd, yd = transform(sp, dp, x, y)

    return xd, yd


def reproject_ogr(x, y, source_srid, dest_srid):

    import ogr
    import osr

    point = ogr.Geometry(ogr.wkbPoint)
    point.AddPoint(x, y)

    inSpatialRef = osr.SpatialReference()
    inSpatialRef.ImportFromEPSG(source_srid)

    outSpatialRef = osr.SpatialReference()
    outSpatialRef.ImportFromEPSG(dest_srid)

    coordTransform = osr.CoordinateTransformation(inSpatialRef, outSpatialRef)

    point.Transform(coordTransform)

    return point.GetX(), point.GetY()


def transform_csv(filename, separator=','):

    pass


class Projector(object):

    def __init__(self):
        self.__filename = ''

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

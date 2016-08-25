# -*- coding: utf-8 -*-

from mpl_toolkits.basemap import Basemap
import matplotlib.pyplot as plt


def display(minlon, minlat, maxlon, maxlat, lons, lats, labels, markersize=10):
    """
        Draw a map with the given extent and positions in EPSG:4326

        :param minlon: Minimum longitude in decimal degrees
        :param minlat: Minimum latitude in decimal degrees
        :param maxlon: Maximum longitude in decimal degrees
        :param maxlat: Maximum latitude in decimal degrees
        :params lons: List of longitude in decimal degrees
        :params lats: List of latitude in decimal degrees
        :params labels: List of string labels
        :params markersize: Size of positions' points

        :Example:

        >>> lons = [-135.3318, -134.8331, -134.6572]
        >>> lats = [57.0799, 57.0894, 56.2399]
        >>> labels = ['Sitka', 'Baranof Warm Springs', 'Port Alexander']
        >>> display(-136.25, 56.0, -134.25, 57.75, lons, lats, labels)
    """

    basemap = Basemap(epsg='4326', resolution='h', area_thresh=0.1,
                      llcrnrlon=minlon, llcrnrlat=minlat,
                      urcrnrlon=maxlon, urcrnrlat=maxlat)

    basemap.drawcoastlines()
    basemap.drawcountries()
    basemap.fillcontinents(color='coral')
    basemap.drawmapboundary()

    x, y = basemap(lons, lats)
    basemap.plot(x, y, 'bo', markersize=markersize)

    for label, xpt, ypt in zip(labels, x, y):
        plt.text(xpt, ypt, label)

    plt.show()

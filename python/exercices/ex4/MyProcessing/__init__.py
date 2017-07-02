# -*- coding: utf-8 -*-
"""
/***************************************************************************
 MyProcessing
                                 A QGIS plugin
 d
                              -------------------
        begin                : 2016-09-12
        copyright            : (C) 2016 by a
        email                : a
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/
 This script initializes the plugin, making it known to QGIS.
"""

__author__ = 'a'
__date__ = '2016-09-12'
__copyright__ = '(C) 2016 by a'


# noinspection PyPep8Naming
def classFactory(iface):  # pylint: disable=invalid-name
    """Load MyProcessing class from file MyProcessing.

    :param iface: A QGIS interface instance.
    :type iface: QgsInterface
    """
    #
    from .my_processing import MyProcessingPlugin
    return MyProcessingPlugin()

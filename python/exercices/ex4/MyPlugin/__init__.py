# -*- coding: utf-8 -*-
"""
/***************************************************************************
 MyClass
                                 A QGIS plugin
 My description
                             -------------------
        begin                : 2016-09-12
        copyright            : (C) 2016 by pbl
        email                : blottiere.paul@gmail.com
        git sha              : $Format:%H$
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


# noinspection PyPep8Naming
def classFactory(iface):  # pylint: disable=invalid-name
    """Load MyClass class from file MyClass.

    :param iface: A QGIS interface instance.
    :type iface: QgsInterface
    """
    #
    from .my_module import MyClass
    return MyClass(iface)

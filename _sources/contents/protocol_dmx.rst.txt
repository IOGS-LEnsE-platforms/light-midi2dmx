DMX Protocol
============

.. caution::
   This page is still in development and some parts are still in French language.

**DMX** is for **Digital Multiplexing**. It's a data transmission protocol to control lights and effects.



DMX applications
----------------


Network topology
----------------

.. figure:: ../_static/dmx/DMX_topology.png


Low-level Protocol
------------------

Communication protocol
~~~~~~~~~~~~~~~~~~~~~~

DMX512 protocol is based on an unidirectional EIA-485 (RS-485) differential signaling as its physical layer.


Physical interface
~~~~~~~~~~~~~~~~~~




Application layer of the protocol
---------------------------------

The application layer is a packet-based communication protocol.

.. figure:: ../_static/dmx/DMX_trame.png

Each channel of the DMX trame is a byte corresponding to a parameter to control a color, an effect or a setup of a light connected to the DMX line.

.. figure:: ../_static/dmx/DMX_app_trame.png



Examples of setup
-----------------


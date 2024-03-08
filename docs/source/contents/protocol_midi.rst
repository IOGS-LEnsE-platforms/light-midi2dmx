MIDI protocol
=============

**MIDI** is for **Musical Instrument Digital Interface**. It's both a **communication protocol** to transfer data from keyboards (or controllers) to digital instruments (software or hardware synthetizers) and a **file format** to store musical data.

MIDI applications
-----------------

Instruments and sequencers
~~~~~~~~~~~~~~~~~~~~~~~~~~

Typical MIDI setup
~~~~~~~~~~~~~~~~~~ 


Low-level Protocol
------------------

Communication protocol
~~~~~~~~~~~~~~~~~~~~~~

MIDI protocol is based on a serial communication protocol called RS232. This protocol 


Physical interface
~~~~~~~~~~~~~~~~~~

MIDI IN, MIDI OUT, MIDI THRU

5 pins

SCHEMA -- Input with optocoupler and output...


Application layer of the protocol
---------------------------------

Channels
~~~~~~~~

Main MIDI messages
~~~~~~~~~~~~~~~~~~

Playing or stopping a note
~~~~~~~~~~~~~~~~~~~~~~~~~~

To play a note, a first type of message, called NOTE_ON, is used.

This message is composed of 3 bytes : 

* Status byte : 1001 CCCC
* Data byte 1 : 0PPP PPPP
* Data byte 2 : 0VVV VVVV

where C is the channel (coded on 4 bits), P is the note value (coded on 7 bits) and V is the velocity (coded on 7 bits).

.. figure:: ../_static/midi/note_on.png

To play the C3 note (value 60), at a velocity of 52, from the channel 3, the MIDI message is the folowing : (1001 0011) (0011 1100) (0011 0100) 


To stop playing a note, a second type of message, called NOTE_OFF, is used.

This message is composed of 3 bytes : 

* Status byte : 1000 CCCC
* Data byte 1 : 0PPP PPPP
* Data byte 2 : 0VVV VVVV

where C is the channel (coded on 4 bits), P is the note value (coded on 7 bits) and V is the velocity. In this case, the velocity is often set to 0.

.. figure:: ../_static/midi/note_off.png


After Touch
~~~~~~~~~~~

Control changes
~~~~~~~~~~~~~~~



There are standard values for controlling instruments. For example, the number 7 is often used to control the main volume of the instruments, the number 8 for the balance... 


Program changes and internal messages
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


To resume
---------

MIDI communications are based on the **RS232** (or Serial) protocol fot the low-level layer data transmission. The baudrate is **31250 bauds**.

|

A **MIDI message** is composed of **different bytes**. 

The **first byte**, *always greater than 128*, corresponds to a **message type** :
* NOTE_ON - 0x90 - to start a specific note
* NOTE_OFF - 0x80 - to stop a specific note
* CC - 0xB0 - to change other parameters (as volume, balance...)
* PC - 0xC0 - to change the kind of instruments (piano, percussion...)
* ...

Depending on the message type, other bytes can be sent. 

NOTE_ON and NOTE_OFF
~~~~~~~~~~~~~~~~~~~~

The **second bytes** is the value of the **note to play** or stop. This value is between 0 and 127, corresponding to notes from C-1 (value 0) to G9 (value 127).



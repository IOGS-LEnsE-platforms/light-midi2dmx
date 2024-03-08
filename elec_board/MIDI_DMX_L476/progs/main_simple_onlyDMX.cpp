/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"
#include "DMX_MIDI.h"

#define WAIT_TIME_MS 500 

int main()
{

    debug_out = 1;
    // DMX initialization
    initDMX();		// all the DMX data are forced to 0
	
	/* Update of the spots channels */
	// Example for Eurolite LED PARty Hybrid Spot @ address 1
	int add = 1;
	int chan = 1;
	dmx_data[(add-1) + (chan-1)] = 255;		// Master Dimmer
	chan = 2;
	dmx_data[(add-1) + (chan-1)] = 255;		// Red color
	chan = 6;
	dmx_data[(add-1) + (chan-1)] = 0;		// No function (no strobe)
	chan = 7;
	dmx_data[(add-1) + (chan-1)] = 0;		// No function (no fading)
	
    /* DMX */
    updateDMX();
    wait_us(10000);
 
	int color_k = 0;
    while(true) { 
		/* Update of the spots channels */
		color_k++;
		chan = 3;
		dmx_data[(add-1) + (chan-1)] = color_k%256;		// Blue color
        /* DMX */
        updateDMX();
        wait_us(12000);
    }
}

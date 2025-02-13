/*
 *  Copyright (C) 2018 Jonathan Brandenburg
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/* Warning: This file is automatically generated by AX-RadioLAB.
	Manual changes are overwritten! */

#include "configtx.h"

#include "../axradio/axradioinit.h"


const struct axradio_address remoteaddr_tx = {
	{ 0x33, 0x34, 0x00, 0x00}
};
const struct axradio_address_mask localaddr_tx = {
	{ 0x32, 0x34, 0x00, 0x00},
	{ 0x00, 0x00, 0x00, 0x00}
};

const uint8_t demo_packet[] =  { 0x00, 0x00, 0x55, 0x66, 0x77, 0x88 };

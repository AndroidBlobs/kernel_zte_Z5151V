/*****************************************************************************
* Copyright 2010 Texas Instruments Corporation, All Rights Reserved.
* TI makes NO WARRANTY as to software products, which are supplied "AS-IS"
*****************************************************************************/

/*****************************************************************************
*     This code is automatically generated from bqfs/dffs file.              *
*          DO NOT MODIFY THIS FILE DIRECTLY                                  *
*****************************************************************************/

/* this file is generated from ZTE Z578ATL ChemID 1848 ZTE NTC learned Rbteak DF3.gm.fs at Sun Apr  8 10:15:00 2018
 */

#ifndef __BQFS_FILE__
#define __BQFS_FILE__

#include "../bqfs_cmd_type.h"

const bqfs_cmd_t bqfs_coslight_atl[] = {
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x00,
		.data		= {.bytes = {0x01, 0x00} },
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x00,
		.data		= {.bytes = {0x26, 0x04} },
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x00,
		.data		= {.bytes = {0x02, 0x00} },
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x00,
		.data		= {.bytes = {0x02, 0x02} },
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x00,
		.data		= {.bytes = {0x13, 0x00} },
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 1100},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x02, 0x00} },
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x40,
		.data		= {.bytes = {0x02, 0x26, 0x00, 0x00, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00,
						0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
						0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
						0x00, 0x00} },
		.data_len	= 32,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0xA5} },
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 10},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x02, 0x00} },
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0xA5} },
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x24, 0x00} },
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x40,
		.data		= {.bytes = {0x00, 0x19, 0x28, 0x63, 0x5F, 0xFF, 0x62, 0x00, 0x32, 0x00,
						0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
						0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
						0x00, 0x00} },
		.data_len	= 32,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0x69} },
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 10},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x24, 0x00} },
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0x69} },
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x31, 0x00} },
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x40,
		.data		= {.bytes = {0x0A, 0x0F, 0x02, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
						0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
						0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
						0x00, 0x00} },
		.data_len	= 32,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0xDF} },
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 10},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x31, 0x00} },
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0xDF} },
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x40, 0x00} },
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x40,
		.data		= {.bytes = {0x64, 0x79, 0x0F, 0x86, 0x23, 0x03, 0x00, 0x14, 0x04, 0x00,
						0x09, 0x04, 0x26, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
						0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
						0x00, 0x00} },
		.data_len	= 32,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0x1C} },
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 10},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x40, 0x00} },
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0x1C} },
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x44, 0x00} },
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x40,
		.data		= {.bytes = {0x00, 0x32, 0x01, 0xC2, 0x30, 0x00, 0x03, 0x08, 0x98, 0x01,
						0x00, 0x3C, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
						0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
						0x00, 0x00} },
		.data_len	= 32,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0xF9} },
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 10},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x44, 0x00} },
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0xF9} },
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x50, 0x00} },
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x40,
		.data		= {.bytes = {0x01, 0xF4, 0x00, 0x1E, 0xC8, 0x14, 0x08, 0x00, 0x3C, 0x0E,
						0x10, 0x00, 0x0A, 0x46, 0x05, 0x14, 0x05, 0x0F, 0x03, 0x20,
						0x7F, 0xFF, 0x00, 0xF0, 0x46, 0x50, 0x18, 0x01, 0x90, 0x00,
						0x64, 0x19} },
		.data_len	= 32,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0xE4} },
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 10},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x50, 0x00} },
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0xE4} },
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x50, 0x01} },
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x40,
		.data		= {.bytes = {0xDC, 0x5C, 0x60, 0x00, 0x7D, 0x00, 0x04, 0x03, 0x19, 0x25,
						0x0F, 0x14, 0x0A, 0x78, 0x60, 0x28, 0x01, 0xF4, 0x00, 0x00,
						0x00, 0x00, 0x43, 0x80, 0x04, 0x01, 0x14, 0x00, 0x08, 0x0B,
						0xB8, 0x01} },
		.data_len	= 32,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0xDB} },
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 10},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x50, 0x01} },
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0xDB} },
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x50, 0x02} },
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x40,
		.data		= {.bytes = {0x2C, 0x0A, 0x01, 0x0A, 0x00, 0x00, 0x00, 0xC8, 0x00, 0x64,
						0x02, 0x00, 0x00, 0x00, 0x00, 0x07, 0xD0, 0x01, 0x03, 0x5A,
						0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
						0x00, 0x00} },
		.data_len	= 32,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0x47} },
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 10},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x50, 0x02} },
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0x47} },
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x51, 0x00} },
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x40,
		.data		= {.bytes = {0x01, 0x90, 0x01, 0xF4, 0x07, 0xD0, 0x00, 0x3C, 0x3C, 0x01,
						0xB3, 0xB3, 0x01, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
						0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
						0x00, 0x00} },
		.data_len	= 32,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0x32} },
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 10},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x51, 0x00} },
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0x32} },
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x52, 0x00} },
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x40,
		.data		= {.bytes = {0x41, 0x8D, 0x00, 0x00, 0x00, 0x81, 0x0F, 0xA0, 0x3B, 0xB0,
						0x0D, 0x48, 0x00, 0xC8, 0x00, 0x32, 0x00, 0x14, 0x03, 0xE8,
						0x01, 0x00, 0xE4, 0x00, 0x0A, 0xFF, 0xCE, 0xFF, 0xCE, 0x00,
						0x02, 0x00} },
		.data_len	= 32,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0x3D} },
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 10},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x52, 0x00} },
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0x3D} },
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x53, 0x00} },
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x40,
		.data		= {.bytes = {0x18, 0x48, 0x11, 0x2E, 0xE0, 0xE0, 0xDF, 0xE0, 0xE1, 0xE1,
						0xE3, 0xE4, 0xE4, 0xE5, 0xEB, 0xE4, 0xDC, 0xE8, 0xE5, 0xE5,
						0xE9, 0xEC, 0xED, 0xF0, 0xF2, 0xF5, 0xF5, 0xF7, 0xF8, 0xFA,
						0xF7, 0x00} },
		.data_len	= 32,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0xC4} },
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 10},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x53, 0x00} },
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0xC4} },
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x53, 0x01} },
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x40,
		.data		= {.bytes = {0xF8, 0xF7, 0xF6, 0xF2, 0xF4, 0xE9, 0xF8, 0xFE, 0xFB, 0xDE,
						0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
						0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
						0x00, 0x00} },
		.data_len	= 32,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0xFC} },
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 10},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x53, 0x01} },
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0xFC} },
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x54, 0x00} },
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x40,
		.data		= {.bytes = {0xFB, 0xE5, 0x05, 0x05, 0x06, 0x0A, 0x07, 0x03, 0x05, 0xFD,
						0xFE, 0xFC, 0x02, 0xF4, 0x05, 0x1D, 0x0A, 0x1E, 0xFF, 0xEF,
						0xEC, 0xF0, 0x06, 0xFF, 0xFE, 0x00, 0x00, 0xFC, 0xFD, 0x01,
						0xE1, 0xF1} },
		.data_len	= 32,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0x26} },
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 10},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x54, 0x00} },
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0x26} },
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x54, 0x01} },
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x40,
		.data		= {.bytes = {0xF0, 0xFD, 0x0D, 0xF9, 0x01, 0x10, 0xFF, 0xE5, 0x9C, 0x45,
						0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
						0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
						0x00, 0x00} },
		.data_len	= 32,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0x36} },
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 10},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x54, 0x01} },
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0x36} },
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x55, 0x00} },
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x40,
		.data		= {.bytes = {0xFF, 0x80, 0x00, 0x05, 0x09, 0xE0, 0x1D, 0x09, 0xFA, 0xEB,
						0x22, 0xEE, 0xFB, 0x20, 0xD0, 0x52, 0x80, 0x00, 0x00, 0x00,
						0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
						0x00, 0x00} },
		.data_len	= 32,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0xBA} },
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 10},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x55, 0x00} },
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0xBA} },
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x6C, 0x00} },
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x40,
		.data		= {.bytes = {0xFE, 0x60, 0x00, 0x00, 0x0B, 0x22, 0x07, 0xF9, 0xFA, 0xCE,
						0xFC, 0xFE, 0xF2, 0x09, 0x0B, 0x0A, 0x21, 0x00, 0x00, 0x00,
						0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
						0x00, 0x00} },
		.data_len	= 32,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0x81} },
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 10},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x6C, 0x00} },
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0x81} },
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x59, 0x00} },
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x40,
		.data		= {.bytes = {0x00, 0x21, 0x00, 0x21, 0x00, 0x23, 0x00, 0x26, 0x00, 0x24,
						0x00, 0x23, 0x00, 0x26, 0x00, 0x25, 0x00, 0x26, 0x00, 0x28,
						0x00, 0x27, 0x00, 0x2D, 0x00, 0x37, 0x00, 0x42, 0x00, 0x57,
						0x00, 0x00} },
		.data_len	= 32,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0x70} },
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 10},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x59, 0x00} },
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0x70} },
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x6D, 0x00} },
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x40,
		.data		= {.bytes = {0x0F, 0xC3, 0x0E, 0xE4, 0x0E, 0xB2, 0x11, 0x23, 0x10, 0xFC,
						0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
						0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
						0x00, 0x00} },
		.data_len	= 32,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0x3B} },
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 10},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x6D, 0x00} },
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0x3B} },
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x68, 0x00} },
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x40,
		.data		= {.bytes = {0x00, 0x00, 0x00, 0x00, 0xB7, 0x15, 0xF8, 0x80, 0xCB, 0x4F,
						0x7E, 0x8D, 0x02, 0x1B, 0xC8, 0xCE, 0x7E, 0x48, 0x99, 0xB3,
						0x28, 0x8C, 0x2D, 0xB7, 0x00, 0x00, 0x00, 0x00, 0xCB, 0xD4,
						0x1A, 0x05} },
		.data_len	= 32,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0x7B} },
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 10},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x68, 0x00} },
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0x7B} },
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x68, 0x01} },
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x40,
		.data		= {.bytes = {0x1C, 0x98, 0x02, 0xD3, 0xFF, 0xB9, 0x30, 0xEF, 0x05, 0x11,
						0x05, 0x01, 0x00, 0x00, 0x10, 0x01, 0x00, 0x3C, 0x00, 0x50,
						0x3C, 0x00, 0x64, 0x3C, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00,
						0x00, 0x00} },
		.data_len	= 32,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0xEA} },
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 10},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x68, 0x01} },
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0xEA} },
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x69, 0x00} },
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x40,
		.data		= {.bytes = {0x00, 0x01, 0x0B, 0xD6, 0x7E, 0x73, 0xB6, 0x45, 0x93, 0x0A,
						0xA5, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
						0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
						0x00, 0x00} },
		.data_len	= 32,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0xCD} },
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 10},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x69, 0x00} },
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0xCD} },
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x6B, 0x00} },
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x40,
		.data		= {.bytes = {0xEF, 0x05, 0x11, 0x05, 0x01, 0x00, 0x00, 0x10, 0x01, 0x00,
						0x3C, 0x00, 0x50, 0x3C, 0x00, 0x64, 0x3C, 0x00, 0x20, 0x00,
						0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
						0x00, 0x00} },
		.data_len	= 32,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0x5B} },
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 10},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x6B, 0x00} },
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0x5B} },
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x70, 0x00} },
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x40,
		.data		= {.bytes = {0x80, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
						0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
						0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
						0x00, 0x00} },
		.data_len	= 32,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0xFF} },
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 10},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x70, 0x00} },
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0xFF} },
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x00,
		.data		= {.bytes = {0x00, 0x00} },
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x00,
		.data		= {.bytes = {0x42, 0x00} },
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 2000},
	},
};
/* end of const bqfs_cmd_t bqfs_image[] */
#endif

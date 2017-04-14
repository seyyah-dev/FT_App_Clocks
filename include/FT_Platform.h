/*

Copyright (c) Future Technology Devices International 2014

THIS SOFTWARE IS PROVIDED BY FUTURE TECHNOLOGY DEVICES INTERNATIONAL LIMITED "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL
FUTURE TECHNOLOGY DEVICES INTERNATIONAL LIMITED BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT
OF SUBSTITUTE GOODS OR SERVICES LOSS OF USE, DATA, OR PROFITS OR BUSINESS INTERRUPTION)
HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR
TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

FTDI DRIVERS MAY BE USED ONLY IN CONJUNCTION WITH PRODUCTS BASED ON FTDI PARTS.

FTDI DRIVERS MAY BE DISTRIBUTED IN ANY FORM AS LONG AS LICENSE INFORMATION IS NOT MODIFIED.

IF A CUSTOM VENDOR ID AND/OR PRODUCT ID OR DESCRIPTION STRING ARE USED, IT IS THE
RESPONSIBILITY OF THE PRODUCT MANUFACTURER TO MAINTAIN ANY CHANGES AND SUBSEQUENT WHQL
RE-CERTIFICATION AS A RESULT OF MAKING THESE CHANGES.

Abstract:

This file contains is functions for all UI fields.

Author : FTDI 

Revision History: 
0.1 - date 2013.04.24 - initial version
0.2 - date 2014.04.28 - Split in individual files according to platform

*/

#ifndef _FT_PLATFORM_H_
#define _FT_PLATFORM_H_

//#define MSVC_PLATFORM // enable by default for MSVC platform

//#define SAMAPP_DISPLAY_QVGA
#define ORIENTATION_PORTRAIT 
//#define ORIENTATION_LANDSCAPE 
#define SAMAPP_DISPLAY_WQVGA

/* Uncomment this macro to enable the FT801 specific features, enable this macro only on demo applications that support FT801. */
//#define FT_801_ENABLE 

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "WinTypes.h"
//#include <direct.h>
#include <time.h>
//#include <io.h>

#include "ftd2xx.h"
#include <mpsse.h>

//#include "libMPSSE_spi.h"

#include "FT_DataTypes.h"
#include "FT_Gpu_Hal.h"
#include "FT_Gpu.h"
#include "FT_CoPro_Cmds.h"

#define BUFFER_OPTIMIZATION
//#define MSVC_PLATFORM_SPI

#define LINUX_PLATFORM
#define LINUX_PLATFORM_SPI

#ifdef LINUX_PLATFORM
	#define min(x,y)  ((x) > (y) ? (y) : (x))
	#define max(x,y)  ((x) > (y) ? (x) : (y))
#endif


#endif /*_FT_PLATFORM_H_*/
/* Nothing beyond this*/





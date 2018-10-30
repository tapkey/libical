/* 
 * This work is based on work from Hiram Clawson and has been modified to the
 * needs of the libical project. The original copyright notice is as follows:
 */
/*
 *      Copyright (c) 1986-2000, Hiram Clawson
 *      All rights reserved.
 *
 *      Redistribution and use in source and binary forms, with or
 *      without modification, are permitted provided that the following
 *      conditions are met:
 *
 *              Redistributions of source code must retain the above
 *              copyright notice, this list of conditions and the
 *              following disclaimer.
 *
 *              Redistributions in binary form must reproduce the
 *              above copyright notice, this list of conditions and
 *              the following disclaimer in the documentation and/or
 *              other materials provided with the distribution.
 *
 *              Neither name of The Museum of Hiram nor the names of
 *              its contributors may be used to endorse or promote products
 *              derived from this software without specific prior
 *              written permission.
 *
 *      THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND
 *      CONTRIBUTORS ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES,
 *      INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 *      MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 *      IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
 *      INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 *      (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 *      OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 *      HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 *      STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
 *      IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
 *      THE POSSIBILITY OF SUCH DAMAGE.
 */
/*
 * The modifications made are licensed as follows (to distinguish between
 * the original code and the modifications made, refer to the source code
 * history):
 */
 /*======================================================================

  (C) COPYRIGHT 2018, Markus Minichmayr
      https://tapkey.com

  This library is free software; you can redistribute it and/or modify
  it under the terms of either:

     The LGPL as published by the Free Software Foundation, version
     2.1, available at: http://www.gnu.org/licenses/lgpl-2.1.html

  Or:

     The Mozilla Public License Version 2.0. You may obtain a copy of
     the License at http://www.mozilla.org/MPL/
 ========================================================================*/

/**
 *      @file astime.h
 *      @brief contains definitions of structures used for time calculations.
 */

#ifndef ICAL_ASTIME_H
#define ICAL_ASTIME_H

#include "libical_ical_export.h"

typedef struct ut_instant
{
    long j_date0;      /**< julian decimal date, 0 = 01 Jan 4713 BC */
    long year;          /**< year, valid range [-4,713, +32,767] */
    int month;          /**<    [1-12]  */
    int day;            /**<    [1-31]  */
    int weekday;                /**<    [0-6]   */
    int day_of_year;            /**<    [1-366] */
} UTinstant, *UTinstantPtr;

/*      Functions in caldate.c  */

LIBICAL_ICAL_EXPORT void caldat(UTinstantPtr);    /** converts julian date to year,mo,da */

LIBICAL_ICAL_EXPORT void juldat(UTinstantPtr);    /** returns julian day from year,mo,da */

#endif

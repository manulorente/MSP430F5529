//*****************************************************************************
//
// ustdlib.h - Prototypes for simple standard library functions.
//
// Copyright (c) 2007-2013 Texas Instruments Incorporated.  All rights reserved.
// Software License Agreement
// 
// Texas Instruments (TI) is supplying this software for use solely and
// exclusively on TI's microcontroller products. The software is owned by
// TI and/or its suppliers, and is protected under applicable copyright
// laws. You may not combine this software with "viral" open-source
// software in order to form a larger program.
// 
// THIS SOFTWARE IS PROVIDED "AS IS" AND WITH ALL FAULTS.
// NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT
// NOT LIMITED TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE. TI SHALL NOT, UNDER ANY
// CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR CONSEQUENTIAL
// DAMAGES, FOR ANY REASON WHATSOEVER.
// 
// This is part of revision 2.0.1.11577 of the Tiva Utility Library.
//
//*****************************************************************************

//!! Modificado por DTE para MSP430 y GCC---> sustituye parcialmente e stdlib (y es mas fiable, para m�s INRI)

#ifndef __USTDLIB_H__
#define __USTDLIB_H__

//*****************************************************************************
//
// Include the standard C headers upon which these replacements are based.
//
//*****************************************************************************
#include <stdarg.h>
#include <time.h>

//*****************************************************************************
//
// If building with a C++ compiler, make all of the definitions in this header
// have a C binding.
//
//*****************************************************************************
#ifdef __cplusplus
extern "C"
{
#endif

//*****************************************************************************
//
// Prototypes for the APIs.
//
//*****************************************************************************
extern void ulocaltime(time_t timer, struct tm *tm);
extern time_t umktime(struct tm *timeptr);
extern int urand(void);
extern int usnprintf(char * __restrict__ s, size_t n, const char * __restrict__ format,
                     ...);
extern int usprintf(char * __restrict__ s, const char * __restrict__ format, ...);
extern void usrand(unsigned int seed);
extern int ustrcasecmp(const char *s1, const char *s2);
extern int ustrcmp(const char *s1, const char *s2);
extern size_t ustrlen(const char *s);
extern int ustrncasecmp(const char *s1, const char *s2, size_t n);
extern int ustrncmp(const char *s1, const char *s2, size_t n);
extern char *ustrncpy(char * __restrict__ s1, const char * __restrict__ s2, size_t n);
extern char *ustrstr(const char *s1, const char *s2);
extern float ustrtof(const char * __restrict__ nptr,
                     const char ** __restrict__ endptr);
extern unsigned long int ustrtoul(const char * __restrict__ nptr,
                                  const char ** __restrict__ endptr, int base);
extern int uvsnprintf(char * __restrict__ s, size_t n,
                      const char * __restrict__ format, va_list arg);

//*****************************************************************************
//
// Mark the end of the C bindings section for C++ compilers.
//
//*****************************************************************************
#ifdef __cplusplus
}
#endif

#endif // __USTDLIB_H__

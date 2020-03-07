/* Automatically generated header (sfdc 1.11)! Do not edit! */
#ifndef PRAGMAS_AMBOSDATA_PRAGMAS_H
#define PRAGMAS_AMBOSDATA_PRAGMAS_H

/*
**   $VER: ambosdata_pragmas.h
**
**   Direct ROM interface (pragma) definitions.
**
**   Copyright (c) 2001 Amiga, Inc.
**       All Rights Reserved
*/

#if defined(LATTICE) || defined(__SASC) || defined(_DCC)
#ifndef __CLIB_PRAGMA_LIBCALL
#define __CLIB_PRAGMA_LIBCALL
#endif /* __CLIB_PRAGMA_LIBCALL */
#else  /* __MAXON__, __STORM__ or AZTEC_C */
#ifndef __CLIB_PRAGMA_AMICALL
#define __CLIB_PRAGMA_AMICALL
#endif /* __CLIB_PRAGMA_AMICALL */
#endif /* */

#if defined(__SASC_60) || defined(__STORM__)
#ifndef __CLIB_PRAGMA_TAGCALL
#define __CLIB_PRAGMA_TAGCALL
#endif /* __CLIB_PRAGMA_TAGCALL */
#endif /* __MAXON__, __STORM__ or AZTEC_C */

#ifdef __CLIB_PRAGMA_LIBCALL
#pragma libcall AmBoSDataBase ADataSet 24 901
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
#pragma amicall(AmBoSDataBase, 0x24, ADataSet(a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_TAGCALL
#ifdef __CLIB_PRAGMA_LIBCALL
#pragma tagcall AmBoSDataBase ADataSetTags 24 901
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
#pragma tagcall(AmBoSDataBase, 0x24, ADataSetTags(a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#endif /* __CLIB_PRAGMA_TAGCALL */
#ifdef __CLIB_PRAGMA_LIBCALL
#pragma libcall AmBoSDataBase AGetAttr 2a a902
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
#pragma amicall(AmBoSDataBase, 0x2a, AGetAttr(a1, a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_TAGCALL
#ifdef __CLIB_PRAGMA_LIBCALL
#pragma tagcall AmBoSDataBase AGetAttrTags 2a a902
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
#pragma tagcall(AmBoSDataBase, 0x2a, AGetAttrTags(a1, a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#endif /* __CLIB_PRAGMA_TAGCALL */
#ifdef __CLIB_PRAGMA_LIBCALL
#pragma libcall AmBoSDataBase ASetAttr 2a a902
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
#pragma amicall(AmBoSDataBase, 0x30, ASetAttr(a1, a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_TAGCALL
#ifdef __CLIB_PRAGMA_LIBCALL
#pragma tagcall AmBoSDataBase ASetAttrTags 30 a902
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
#pragma tagcall(AmBoSDataBase, 0x30, ASetAttrTags(a1, a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#endif /* __CLIB_PRAGMA_TAGCALL */

#endif /* PRAGMAS_AMBOSDATA_PRAGMAS_H */

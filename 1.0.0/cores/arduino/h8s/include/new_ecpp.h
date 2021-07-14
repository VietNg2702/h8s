// H8S,H8/300 SERIES C/C++ Compiler Ver. 7.0
// Embedded C++ Library
// Copyright (C) 1994,2007 Renesas Technology Corp. and Renesas Solutions Corp.
// Copyright (C) 2000 Hitachi, Ltd.
// Copyright (C) 1994,2007 Hitachi Information & Control Solutions, Ltd.
// All rights reserved.

//
// Dynamic memory management
// Embeded C++ Library Header <new>
//

//====================================================================
//  File:	new
//  Purpose:	Definition of class new
//  Create:     2000.04.12 Rev. 1.0
//====================================================================

#ifndef _NEW_ECPP_H
#define _NEW_ECPP_H

#include <stdlib.h>

// Storage allocation and deallocation
void *operator new(size_t);
void *operator new[] (size_t);
void *operator new(size_t,void *);
void *operator new[](size_t,void *);

void operator delete(void *);
void operator delete[](void *);
// void operator delete(void *, void *);	// Not implemented
// void operator delete[](void *, void *);	// Not implemented

// Type new_handler
typedef void (*new_handler)();

// set_new_handler
new_handler set_new_handler(new_handler new_P);

// new_handler
extern new_handler _ec2p_new_handler;

#endif

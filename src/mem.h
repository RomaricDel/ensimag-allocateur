/*****************************************************
 * Copyright Grégory Mounié 2008-2013                *
 * This code is distributed under the GLPv3 licence. *
 * Ce code est distribué sous la licence GPLv3+.     *
 *****************************************************/

#ifndef MEM_H
#define MEM_H

/* ENTETE DU TP1. NE RIEN INSERER OU EDITER DANS CE FICHIER ! */
/* TP1 HEADERS. DO NOT EDIT THIS FILE ! */

#include "variante.h"

#if SUJET == 0
// Circular First Fit default value
#define CFF
#define CFF_MAX_INDEX 20
#define ALLOC_MEM_SIZE ((unsigned int) 1<< CFF_MAX_INDEX)

#elif SUJET == 1
// Buddy default value
#define BUDDY
#define BUDDY_MAX_INDEX 20
#define ALLOC_MEM_SIZE ((unsigned int) 1<< BUDDY_MAX_INDEX)

#elif SUJET == 2

// Weigthed buddy default values
#define WBUDDY
#define WBUDDY_MAX_INDEX 40
#define ALLOC_MEM_SIZE ((unsigned int) 1<<(WBUDDY_MAX_INDEX/2))

#else
#error "*** ERREUR GRAVE *** Le numéro de sujet est incohérent !! "
#endif

#ifdef __cplusplus
extern "C" {
#endif


int mem_init();
void *mem_alloc(unsigned long size);
int mem_free(void *ptr, unsigned long size);
int mem_destroy();

#ifdef __cplusplus
}
#endif

#endif

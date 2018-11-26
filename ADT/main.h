#ifndef main_H

#define main_H
/* spesifikasi ADT Main */
#include <stdio.h>
#include <stdlib.h>

#include "jam.h"
#include "ADT_mesinkar.h"
#include "ADT_mesinkata.h"
#include "ADT_stack.h"
#include "ADT_queue.h"
#include "ADT_point.h"
#include "boolean.h"


/* KAMUS */
typedef struct {
          int Waktu;     // Informasi Waktu tersisa
          int Reputasi;  // Informasi 'Nyawa" player
          POINT Peta;      // Memberi tahu player terdapat di ruangan mana

     } Player ;

/* Tipe Bentukan Antrian Pelanggan */
typedef Queue Antrian; 

/* Tipe Bentukan Order Makanan */
typedef TabInt FoodOrder;

/* Tipe Bentukan Nampan Makanan */
typedef Stack FoodStack;

/* Tipe Bentukan Peta Ruangan */
typedef MATRIKS PetaRuang;


/* Fungsi dan Prosedur */

void PromptUser(char KataPrompt);





#endif
#ifndef main_H

#define main_H
/* spesifikasi ADT Main */
#include "jam.h"
#include "mesinkar.h"
#include "ADT_mesinkata.h"

/* KAMUS */
typedef struct {
          Jam Waktu;     // Informasi Waktu tersisa
          int Reputasi;  // Informasi 'Nyawa" player
          int Peta;      // Memberi tahu player terdapat di ruangan mana

     } Player ;

/* Tipe Bentukan Antrian Pelanggan */
typedef Queue Antrian; 

/* Tipe Bentukan Order Makanan */
typedef TabInt FoodOrder;

/* Tipe Bentukan Nampan Makanan */
typedef Stack FoodStack;

/* Tipe Bentukan Peta Ruangan */
typedef MATRIKS PetaRuang;


#endif
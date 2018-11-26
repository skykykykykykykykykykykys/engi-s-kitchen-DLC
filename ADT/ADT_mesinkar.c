#include "mesinkar.h"

static FILE *pita;
static int retval;

void START(char file[10]) 
/* Mesin siap dioperasikan. Pita disiapkan untuk dibaca.
Karakter pertama yang ada pada pita posisinya adalah pada
jendela.
I.S. : sembarang
F.S. : CC adalah karakter pertama pada pita. Jika CC != MARK maka
EOP akan padam (false). Jika CC = MARK maka EOP akan menyala (true)*/
/* Algoritma */
{
	pita = fopen(file,"r");
	ADV();
}

void ADV() 
/* Pita dimajukan satu karakter.
I.S. : Karakter pada jendela = CC, CC != MARK
F.S. : CC adalah karakter berikutnya dari CC yang lama,
CC mungkin = MARK. Jika CC = MARK maka EOP akan menyala (true) */
{
 /* Algoritma */
	retval = fscanf(pita,"%c",&CC);
	EOP = (CC == MARK);
	if (EOP) 
		fclose(pita);
}
char GetCC() {
    /* Mengembalikan karakter yang sedang terbaca di jendela.
    I.S. : Karakter pada jendela = CC, CC != MARK
    F.S. : mengembalikan karakter yang sedang terbaca di jendela
    */
   return CC;
}


boolean IsEOP() {
    /* Mengecek apakah pita telah selesai dibaca
    I.S. : Pita telah terbaca
    F.S. : Menegmbalikan true jika pita telah selesai terbaca, false jika sebaliknya
    */
   if (CC == ".") {
       return true;
   } else {
       return false;
   }
}

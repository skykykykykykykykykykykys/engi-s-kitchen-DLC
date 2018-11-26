
#include <stdio.h>
#include <stdlib.h>
#include "matriksMap.h"

/* ********** DEFINISI PROTOTIPE PRIMITIF ********** */
/* *** Konstruktor membentuk MATRIKS *** */
void MakeMATRIKSMap (int NB, int NK, MATRIKS * M)
/* Membentuk sebuah MATRIKS "kosong" yang siap diisi berukuran NB x NK di "ujung kiri" memori */
/* I.S. NB dan NK adalah valid untuk memori matriks yang dibuat */
/* F.S. Matriks M sesuai dengan definisi di atas terbentuk */
{
	/* ALGORITMA */

	NBrsEff(*M) = NB;
	NKolEff(*M) = NK;
}

void ReadMapFile (MATRIKS  M, FILE *F)
/* Membaca file txt dan memasukan ke matriks */
{
int i,j;

	for(i = GetFirstIdxBrs(M); i <= GetLastIdxBrs(M); i++)
  {
      for(j = GetFirstIdxKol(M); j <= GetLastIdxKol(M); j++)
      {
       if (!fscanf(F, "%c", &Elmt(M,i,j)))
           break;
      }

  }
  fclose(F);
}

indeks BarisPemain(MATRIKS M, Player P )
/*I.S : Matriks telah diisi oleh denah dan posisi Pemain
F.S : Mengembalikan indeks baris pemain saat ini */
{}

indeks KolomPemain(MATRIKS M, Player P )
/*I.S : Matriks telah diisi oleh denah dan posisi Pemain
F.S : Mengembalikan indeks kolom pemain saat ini */
{}

void UpdatePosition(MATRIKS M, Player P, Prompt X)
{
	if (Prompt ='GU'){
		/*Pemain berpindah ke atas baris = baris -1 */
		if(Elmt(M,(BarisPemain(M,P)-1),KolomPemain(M,P)) = '0'){
			Elmt(M,(BarisPemain(M,P)-1),KolomPemain(M,P)) = Elmt(M,BarisPemain(M,P),KolomPemain(M,P));
		}else{printf("%s\n",'ADA MEJA GOBLOK' );}
	}
	if (Prompt ='GD'){
		/*Pemain berpindah ke atas baris = baris +1 */
		if(Elmt(M,(BarisPemain(M,P)+1),KolomPemain(M,P)) = '0'){
			Elmt(M,(BarisPemain(M,P)+1),KolomPemain(M,P)) = Elmt(M,BarisPemain(M,P),KolomPemain(M,P));
		}else{printf("%s\n",'ADA MEJA GOBLOK' );}
	}
	if (Prompt ='GL'){
		/*Pemain berpindah ke atas kolom = kolom -1 */
		if(Elmt(M,BarisPemain(M,P),(KolomPemain(M,P)-1)) = '0'){
			Elmt(M,BarisPemain(M,P),(KolomPemain(M,P)-1)) = Elmt(M,BarisPemain(M,P),KolomPemain(M,P));
		}else{printf("%s\n",'ADA MEJA GOBLOK' );}
	}
	if (Prompt ='GR'){
		/*Pemain berpindah ke atas kolom = kolom +1 */
		if(Elmt(M,BarisPemain(M,P),(KolomPemain(M,P)+1)) = '0'){
			Elmt(M,BarisPemain(M,P),(KolomPemain(M,P)+1)) = Elmt(M,BarisPemain(M,P),KolomPemain(M,P));
		}else{printf("%s\n",'ADA MEJA GOBLOK' );}
	}
}


/* *** Selektor "DUNIA MATRIKS" *** */
boolean IsIdxValid (int i, int j)
/* Mengirimkan true jika i, j adalah indeks yang valid untuk matriks apa pun */
{
	/* ALGORITMA */
	return (((BrsMin <= i) && (i <= BrsMax)) && ((KolMin <= j) && (j <= KolMax)));
}

/* *** Selektor: Untuk sebuah matriks M yang terdefinisi: *** */
indeks GetFirstIdxBrs (MATRIKS M)
/* Mengirimkan indeks baris terkecil M */
{
	/* ALGORITMA */
	return BrsMin;
}

indeks GetFirstIdxKol (MATRIKS M)
/* Mengirimkan indeks kolom terkecil M */
{
	/* ALGORITMA */
	return KolMin;
}

indeks GetLastIdxBrs (MATRIKS M)
/* Mengirimkan indeks baris terbesar M */
{
	/* ALGORITMA */
	return NBrsEff(M);
}

indeks GetLastIdxKol (MATRIKS M)
/* Mengirimkan indeks kolom terbesar M */
{
	/* ALGORITMA */
	return NKolEff(M);
}

boolean IsIdxEff (MATRIKS M, indeks i, indeks j)
/* Mengirimkan true jika i, j adalah indeks efektif bagi M */
{
	/* ALGORITMA */
	return (((GetFirstIdxBrs(M) <= i) && (i <= GetLastIdxBrs(M))) && ((GetFirstIdxKol(M) <= j) && (j <= GetLastIdxKol(M))));
}

ElmtType GetElmtDiagonal (MATRIKS M, indeks i)
/* Mengirimkan elemen M(i,i) */
{
	/* ALGORITMA */
	return Elmt(M,i,i);
}

/* ********** Assignment  MATRIKS ********** */

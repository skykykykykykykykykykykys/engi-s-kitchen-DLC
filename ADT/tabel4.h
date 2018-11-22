
#ifndef tabel4_H
#define tabel4_H
#include <stdio.h>
#include "boolean.h"
#include <math.h>

/*kamus umum*/
#define IdxMax 100
#define IdxMin 1
#define IdxUndef -999
#define ValUndef -9999


/*defenisi elemen dan koleksi objek*/
typedef int ElType;  /*type elemen tabel*/
typedef struct
{
 ElType E1;
 ElType E2;
}duo;
typedef int IdxType; /*type indeks*/
typedef struct
{
 ElType *TI;
 int Size;
}TabInt;

/*KONSTRUKTOR*/
void MakeEmpty(TabInt *T, int N);
/*I.S : sembarang*/
/*F.S : terbentuk tabel T */

/*SELEKTOR*/

/*banyaknya elemen*/
int NbElmt(TabInt T);
/*mengirimkan nol jika tabel kosong*/

/*daya tampung container*/
int MaxNbEl(TabInt T);
/*mengirimkan maksimum elemen yang ditampung oleh tabel*/

/*selektor INDEKS*/
IdxType GetFirstIdx(TabInt T);
/*I.S : Tabel T tidak kosong*/
/*mengirimkan indeks elemen pertama*/

IdxType GetLastIdx(TabInt T);
/*I.S : Tabel T tidak kosong*/
/*mengirimkan indeks elemen terakhir*/

/*menghasilkan sebuah elemen*/
ElType GetElmt (TabInt T,IdxType i); 
/* Prekondisi : Tabel tidak kosong, i antara FirstIdx(T)..LastIdx(T) */
/* Mengirimkan elemen tabel yang ke-i */

/* *** Selektor SET : Mengubah nilai TABEL dan elemen tabel *** */
/* Untuk type private/limited private pada bahasa tertentu */

void SetTab (TabInt Tin,TabInt *Tout);
/* I.S. Tin terdefinisi, sembarang */
/* F.S. Tout berisi salinan Tin */
/* Assignment THsl ? Tin */

void SetEl (TabInt *T,IdxType i,ElType v);
/* I.S. T terdefinisi, sembarang */
/* F.S. Elemen T yang ke-i bernilai v */
/* Mengeset nilai elemen tabel yang ke-i sehingga bernilai v */

/* ********** Test Indeks yang valid ********** */

boolean IsIdxValid (TabInt T,IdxType i);
/* Prekondisi : i sembarang */
/* Mengirimkan true jika i adalah indeks yang valid utk ukuran tabel */
/* yaitu antara indeks yang terdefinisi utk container*/

boolean IsIdxEff (TabInt T,IdxType i); 
/* Prekondisi : i sembarang*/
/* Mengirimkan true jika i adalah indeks yang terdefinisi utk tabel */
/* yaitu antara FirstIdx(T)..LastIdx(T) */


/* ********** TEST KOSONG/PENUH ********** */

/* *** Test tabel kosong *** */
boolean IsEmpty (TabInt T);
/* Mengirimkan true jika tabel T kosong, mengirimkan false jika tidak */

/* *** Test tabel penuh *** */
boolean IsFull (TabInt T); 
/* Mengirimkan true jika tabel T penuh, mengirimkan false jika tidak */

/* ********** BACA dan TULIS dengan INPUT/OUTPUT device ********** */
/* *** Mendefinisikan isi tabel dari pembacaan *** */
void BacaIsi (TabInt *T);
/* I.S. sembarang */
/* F.S. tabel T terdefinisi */
/* Proses : membaca banyaknya elemen T dan mengisi nilainya */

void TulisIsi (TabInt T);
/* Proses : Menuliskan isi tabel dengan traversal */
/* I.S. T boleh kosong */
/* F.S. Jika T tidak kosong : indeks dan elemen tabel ditulis berderet ke bawah */
/* Jika T kosong : Hanya menulis "Tabel kosong" */

void TulisIsiTab (TabInt T);
/* Proses : Menuliskan isi tabel dengan traversal, tabel ditulis di antara kurung
siku; antara dua elemen dipisahkan dengan separator "koma" */
/* I.S. T boleh kosong */
/* F.S. Jika T tidak kosong: [e1, e2, ... ,en] */
/* Contoh : jika ada tiga elemen bernilai 1, 20, 30 : [1, 20, 30] */
/* Jika tabel kosong : menulis [] */


/* ********** OPERATOR ARITMATIKA ********** */
/* *** Aritmatika tabel : Penjumlahan, pengurangan, perkalian, ... *** */
TabInt PlusTab (TabInt T1,TabInt T2);
/* Prekondisi : T1 dan T2 berukuran sama dan tidak kosong */
/* Mengirimkan T1 + T2 */

TabInt MinusTab (TabInt T1,TabInt T2); 
/* Prekondisi : T1 dan T2 berukuran sama dan tidak kosong */
/* Mengirimkan T1 - T2 */

TabInt KaliTab (TabInt T1,TabInt T2); 
/* Prekondisi : T1 dan T2 berukuran sama dan tidak kosong */
/* Mengirimkan T1 * T2 dengan definisi setiap elemen dengan indeks yang sama
dikalikan */

TabInt KaliKons (TabInt Tin,ElType c); 
/* Prekondisi : Tin tidak kosong */
/* Mengirimkan tabel dengan setiap elemen Tin dikalikan c */

/* ********** OPERATOR RELASIONAL ********** */

/* *** Operasi pembandingan tabel : < =, > *** */

boolean IsEQ (TabInt T1,TabInt T2); 
/* Mengirimkan true jika T1 sama dengan T2 yaitu jika ukuran T1 = T2 dan semua
elemennya sama */

boolean IsLess (TabInt T1,TabInt T2); 
/* Mengirimkan true jika T1 < T2, */
/* yaitu : sesuai dg analogi 'Ali' < Badu'; maka [0, 1] < [2, 3] */

/* ********** SEARCHING ********** */
/* *** Perhatian : Tabel boleh kosong!! *** */

IdxType Search1 (TabInt T,ElType X); 
/* Search apakah ada elemen tabel T yang bernilai X */
/* Jika ada, menghasilkan indeks i terkecil, dengan elemen ke-i = X */
/* Jika tidak ada, mengirimkan IdxUndef */
/* Menghasilkan indeks tak terdefinisi (IdxUndef) jika tabel T kosong */
/* Memakai skema search TANPA boolean */

IdxType Search2 (TabInt T,ElType X); 
/* Search apakah ada elemen tabel T yang bernilai X */
/* Jika ada, menghasilkan indeks i terkecil, dengan elemen ke-i = X */
/* Jika tidak ada, mengirimkan IdxUndef */
/* Menghasilkan indeks tak terdefinisi (IdxUndef) jika tabel T kosong */
/* Memakai skema search DENGAN boolean Found */

boolean SearchB (TabInt T,ElType X); 
/* Search apakah ada elemen tabel T yang bernilai X */
/* Jika ada, menghasilkan true, jika tidak ada menghasilkan false */
/* Menghasilkan indeks tak terdefinisi (IdxUndef) jika tabel T kosong */
/* Memakai Skema search DENGAN boolean */

int SearchSentinel (TabInt T,ElType X); 
/* Search apakah ada elemen tabel T yang bernilai X */
/* Jika ada, menghasilkan true, jika tidak ada menghasilkan false */
/* dengan metoda sequential search dengan sentinel */
/* Untuk sentinel, manfaatkan indeks ke-0 dalam definisi array dalam Bahasa C yang
tidak dipakai dalam definisi tabel */
/* Menghasilkan indeks tak terdefinisi (IdxUndef) jika tabel T kosong */

/* ********** NILAI EKSTREM ********** */

ElType ValMax (TabInt T); 
/* Prekondisi : Tabel T tidak kosong */
/* Mengirimkan nilai maksimum tabel */

ElType ValMin (TabInt T); 
/* Prekondisi : Tabel T tidak kosong */
/* Mengirimkan nilai minimum tabel */
/* *** Mengirimkan indeks elemen bernilai ekstrem *** */

IdxType IdxMaxTab (TabInt T); 
/* Prekondisi : Tabel T tidak kosong */
/* Mengirimkan indeks i dengan elemen ke-i adalah nilai maksimum pada tabel */

IdxType IdxMinTab (TabInt T); 
/* Prekondisi : Tabel tidak kosong */
/* Mengirimkan indeks i */
/* dengan elemen ke-i nilai minimum pada tabel */

/* ********** OPERASI LAIN ********** */

void CopyTab (TabInt Tin,TabInt *Tout);
/* I.S. sembarang */
/* F.S. Tout berisi salinan dari Tin (elemen dan ukuran identik) */
/* Proses : Menyalin isi Tin ke Tout */

TabInt InverseTab (TabInt T);
/* Menghasilkan tabel dengan urutan tempat yang terbalik, yaitu */
/* elemen pertama menjadi terakhir, */
/* elemen kedua menjadi elemen sebelum terakhir, dst.. */
/* Tabel kosong menghasilkan tabel kosong */

boolean IsSimetris (TabInt T);
/* Menghasilkan true jika tabel simetrik */
/* Tabel disebut simetrik jika: */
/*elemen pertama = elemen terakhir, */
/*elemen kedua = elemen sebelum terakhir, dan seterusnya */
/* Tabel kosong adalah tabel simetris */

/* ********** SORTING ********** */

void MaxSortDesc (TabInt *T);
/* I.S. T boleh kosong */
/* F.S. T elemennya terurut menurun dengan Maximum Sort */
/* Proses mengurutkan T sehingga elemennya menurun/mengecil */
/*tanpa menggunakan tabel kerja */

void InsSortAsc (TabInt *T;
/* I.S. T boleh kosong */
/* F.S. T elemennya terurut menaik dengan Insertion Sort */
/* Proses mengurutkan T sehingga elemennya menaik/membesar */
/*tanpa menggunakan tabel kerja */

/* ********** MENAMBAH ELEMEN ********** */
/* *** Menambahkan elemen terakhir *** */

void AddAsLastEl (TabInt *T,ElType X);
/* Menambahkan X sebagai elemen terakhir tabel */
/* I.S. Tabel boleh kosong, tetapi tidak penuh */
/* F.S. X adalah elemen terakhir T yang baru */
/* Proses Menambahkan sebagai elemen ke-i yang baru */

void AddEli (TabInt *T,ElType X ,IdxType i);
/* Menambahkan X sebagai elemen ke-i tabel tanpa mengganggu kontiguitas terhadap
elemen yang sudah ada */
/* I.S. Tabel tidak kosong dan tidak penuh */
/*i adalah indeks yang valid. */
/* F.S. X adalah elemen ke-i T yang baru */
/* Proses Geser elemen ke-i+1 s.d. terakhir */
/*Isi elemen ke-i dengan X */

/* ********** MENGHAPUS ELEMEN ********** */
void DelLastEl (TabInt *T,ElType *X );
/* Proses Menghapus elemen terakhir tabel */
/* I.S. Tabel tidak kosong */
/* F.S. X adalah nilai elemen terakhir T sebelum penghapusan, */
/*Banyaknya elemen tabel berkurang satu */
/*Tabel T mungkin menjadi kosong */

void DelEli(TabInt *T,IdxType i ,ElType *X );
/* Proses Menghapus elemen ke-i tabel tanpa mengganggu kontiguitas */
/* I.S. Tabel tidak kosong, i adalah indeks efektif yang valid */
/* F.S. Elemen T berkurang satu */
/*Banyaknya elemen tabel berkurang satu */
/*Tabel T mungkin menjadi kosong */
/* Proses Geser elemen ke-i+1 s.d. elemen terakhir */
/*Kurangi elemen efektif tabel */

/* ********** TABEL DGN ELEMEN UNIK (SETIAP ELEMEN HANYA MUNCUL 1 KALI) ********** */

void AddElUnik (TabInt *T ,ElType X );
/* Menambahkan X sebagai elemen terakhir tabel, pada tabel dengan elemen unik*/
/* I.S. Tabel boleh kosong, tetapi tidak penuh */
/*dan semua elemennya bernilai unik, tidak terurut*/
/* F.S. Jika tabel belum penuh, menambahkan X sbg elemen terakhir T, jika belum ada
elemen yang bernilai X. Jika sudah ada elemen tabel yang bernilai X maka I.S. =
F.S. dan dituliskan pesan "nilai sudah ada" */
/* Proses Cek keunikan dengan sequential search dengan sentinel*/
/*kemudian tambahkan elemen jika belum ada */

/* ********** TABEL DGN ELEMEN TERURUT MEMBESAR ********** */
IdxType SearchUrut (TabInt T, ElType X);
/* PrekondisiTabel boleh kosong. Jika tidak kosong, elemen terurut membesar. */
/* mengirimkan indeks di mana harga X dengan indeks terkecil diketemukan */
/* mengirimkan IdxUndef jika tidak ada elemen tabel bernilai X */
/* Menghasilkan indeks tak terdefinisi (IdxUndef) jika tabel kosong */

ElType Max (TabInt T );
/* Prekondisi Tabel tidak kosong, elemen terurut membesar */
/* Mengirimkan nilai maksimum pada tabel*/

ElType Min (TabInt T );
/* Prekondisi Tabel tidak kosong, elemen terurut membesar */
/* Mengirimkan nilai minimum pada tabel*/

duo MaxMin (TabInt T);
/* Prekondisi Tabel tidak kosong, elemen terurut membesar */
/* Mengirimkan nilai maksimum dan minimum pada tabel */

void Add1Urut (TabInt *T ,ElType X );
/* Menambahkan X tanpa mengganggu keterurutan nilai dalam tabel */
/* Nilai dalam tabel tidak harus unik. */
/* I.S. Tabel boleh kosong, boleh penuh. */
/* Jika tabel isi, elemennya terurut membesar. */
/* F.S. Jika tabel belum penuh, menambahkan X. */
/* Jika tabel penuh, maka tabel tetap. */
/* Proses Search tempat yang tepat sambil geser */
/* Insert X pada tempat yang tepat tersebut tanpa mengganggu keterurutan */

void Del1Urut (TabInt *T,ElType X);
/* Menghapus X yang pertama kali (pada indeks terkecil) yang ditemukan */
/* I.S. Tabel tidak kosong */
/* F.S. Jika ada elemen tabel bernilai X , */
/* maka banyaknya elemen tabel berkurang satu. */
/* Jika tidak ada yang bernilai X, tabel tetap. */
/* Setelah penghapusan, elemen tabel tetap kontigu! */
/* Proses Search indeks ke-i dengan elemen ke-i=X. */
/* Delete jika ada. */

#endif


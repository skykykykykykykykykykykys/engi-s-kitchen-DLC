# engi-s-kitchen-DLC
Engi's Kitchen Expansion
Simple restaurant simulation made to fulfill algorithm and data structture course


## Flow of the Game
  1. Awalnya, perlu ada main menu yang memiliki New Game, Start Game, Load Game
(bonus), dan Exit.
a. Ketika memilih new game, perlu ada input nama dari user
b. Ketika memilih start game, program perlu mengecek apakah user sudah memiliki
nama, kemudian player akan ke langkah nomor 2.
c. Ketika memilih load game, program perlu mengakses file eksternal yang
menyimpan state dari game sebelumnya.
d. Ketika memilih exit, program akan berhenti
2. Program akan membentuk beberapa area berukuran N*M dengan membaca dari teks
file. Area-area ini akan kemudian dihubungkan membentuk peta besar. Lihat Gambar
agar lebih mudah dipahami. Pada setiap awal permainan, peta besar dikonstruksi dari
kumpulan area.
3. Program menunggu interaksi dari player. Untuk memudahkan input dari player, perintah
yang diterima hanyalah satu kata. Berikut adalah perintah/command yang diterima
(perintah boleh diubah namun fungsionalitas harus sama)
a. GU
Command ini adalah singkatan dari ‘Go Up’, sehingga posisi player berpindah ke
atas.
b. GD
Command ini adalah singkatan dari ‘Go Down’, sehingga posisi player berpindah
ke bawah.
c. GL
Command ini adalah singkatan dari ‘Go Left’, sehingga posisi player berpindah
ke kiri.
d. GR
Command ini adalah singkatan dari ‘Go Right’, sehingga posisi player berpindah
kekanan.
e. ORDER
Command ini digunakan untuk mengambil order dari meja yang bersebelahan
dengan pemain
f. TAKE
Command ini digunakan untuk mengambil makanan yang bersebelahan dengan
pemain dan menaruh makanan tersebut ke nampan
g. CT
Command ini digunakan untuk membuang seluruh makanan yang berada di
dalam tray
Tugas Besar IF2111 Algoritma dan Struktur Data | Halaman 2 dari 10
h. PLACE
Command ini digunakan untuk menaruh pelanggan di meja dan kosong.
Pelanggan yang ditaruh adalah pelanggan pada top of queue
i. GIVE
Memberikan makanan yang berada di paling atas tumpukan ke pengunjung yang
bertetanggaan
j. SAVE (bonus)
Command ini digunakan untuk menyimpan state permainan saat ini agar dapat
dilanjutkan kemudian. Metode interaksi bebas.
k. LOAD (bonus)
Command ini digunakan untuk melanjutkan permainan sesuai dengan state yang
ada pada text file. Metode interaksi bebas.
l. EXIT
Command ini digunakan untuk keluar dari program.
4. Semua perintah menghabiskan waktu 1 tick.
5. Player direpresentasikan dengan simbol P pada peta.
6. Pengunjung direpresentasikan dengan simbol C pada peta. Selain itu, kursi kosong
direpresentasikan dengan X
7. Pada dapur, M melambangkan tempat makanan.
8. Pada setiap ruangan, D melambangkan posisi pintu.
9. Jika tidak ada kursi yang bisa diduduki oleh pengunjung di antrean terdepan namun bisa
diduduki oleh antrean di belakangnya, maka kursi tersebut diberikan ke antrean di
belakangnya.
10. Setiap makanan memiliki harganya masing - masing. Jenis makanan yang disediakan
dibebaskan, namun minimal ada 8 jenis makanan berbeda yang ada di Engi’s Kitchen.
Ketika berhasil menyajikan makanan dan menyerahkannya pada pengunjung, maka
pengunjung akan langsung pergi dan memberikan uangnya kepada player.
11. Ketika pengunjung kehabisan kesabaran dan pergi meninggalkan restoran, maka
pemain akan kehilangan 1 nyawa. Permainan dinyatakan berakhir ketika pemain
kehilangan seluruh nyawanya
12. Setelah permainan berakhir, muncul tampilan credit pembuat game.


## Rules :


## Credits :
- [@skykykykykykykykykykykys](https://github.com/skykykykykykykykykykykys/)
- Rama
- Habib
- Farabi

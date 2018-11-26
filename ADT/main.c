/*   FIle : Main.c 
     Deskripsi : File Main dari Game Engi's Kitchen DLC
*/
#include "main.h"

void PromptUser(char KataPrompt){
     /**/
     if (isGameReady) {
          printf('>>');
          printf('%c\n', KataPrompt);
     } else {
          printf('>');
          printf('%c\n', KataPrompt);
     }
}



int main() {
     /* KAMUS */
     char CommandInput[10]; //Inputan dari User
     bool isGameReady = false;
     Player User;

     /* ALGORITMA */
     printf("Welcome to Engi's Kitchen");
     printf('1. New Game\n 2. Start Game\n 3.Load Game\n')
     switch (CommandInput){
          case '1':
               /* New Game */
               /* Create new file */
               ReadMapFile();
               isGameReady = true;
               StartGame();
               break;
          case '2':
               /* Start Game */
               if not(isNamaAda(User)) {
                    PromptUser('Nama belum ada!');
                    PromptUser('Player Name : ');
               }
               isGameReady = true;
               StartGame();
               break;
          case '3':
               /* Load Game */
               PromptUser('Input Nama File : ');
               break;
          default:
               PromptUser('Command Invalid');
               break;
     }
     LoadFile();



     // Sudah Game Ready

     printf('Command Input : ');
     switch (CommandInput){
          case 'GU':
               /* Movement Go Up */
               break;
          case 'GD':
               /* Movement Go Down */
               break;
          case 'GL':
               /* Movement Go Left */
               break;
          case 'GR':
               /* Movement Go Right */
               break;
          case 'PLACE':
               /* Places Customer */
               if (NextToEmptyTable(Player, PetaRuang)) {
                    // Place Customer
               } else {
                    PromptUser('Tidak ada tempat untuk menempatkan pelanggan!');
               }
               break;
          case 'ORDER':
               if (NextToFullTable(Player, PetaRuang)) {
                    //Order, Akses FoodStack, FoodOrder
               } else {
                    PromptUser('Tidak ada pelanggan yang dapat diminta pesanan!');
               }
               break;
          case 'TAKE':
               /* Mengambil makanan dari meja makanan ke nampan */
               if (NextToFoodTable(Player, PetaRuang)) {
                    //Take Food
               } else {
                    PromptUser('Tidak ada makanan yang dapat diambil!');
               }
               break;
          case 'CT':
               /* Clear Tray Food */
               ClearFoodStack(FoodStack);
               break;
          case 'GIVE':
               /* Memberikan makanan ke customer yang ada */
               if (NextToFullTable(Player, PetaRuang)) {
                    if (isFoodReady(FoodOrder, PetaRuang)) {
                         //Gives Food
                    } else {
                         PromptUser('Tidak ada makanan yang dapat diberikan!'); //Promptnya mending di fungsi FoodOrder
                    }
               } else {
                    PromptUser('Command Give gagal!');
               }
               break;
          case 'HELP':
               /* List Command */
               
          case 'EXIT':
               /* Exit the game */
               exit(0);
               break;               
          default:
               PromptUser('Command Invalid!!');
               break;
     }
     return 0;
}

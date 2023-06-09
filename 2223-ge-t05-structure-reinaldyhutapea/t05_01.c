// 12S22048 - Ira Wianda Sari Silalahi
// 12S22048 - Reinaldy Hutapea

#include <stdio.h>
#include <string.h>

// Membuat  struct bernama "kata" dengan atribut kata dan arti 
typedef struct {
char kata[21];
char arti[81];
} kata;

int main() {

/*Membuat array of struct "dictionary" dengan panjang 5 dan variabel "jumlah_kata" 
untuk menyimpan banyak kata yang sudah di-register*/ 

kata dictionary[5];
int jumlah_kata = 0;
char command[21];
int j = 0;

// Melakukan perulangan while selama variabel "j" masih bernilai 0
while (!j) {
scanf("%s", command);// Membaca input dari pengguna dan menyimpannya pada variabel "command"

// Jika perintah yang diberikan pengguna adalah "register"
if (strcmp(command, "register") == 0) {
    // Jika jumlah kata yang sudah diregister masih kurang dari 5
    if (jumlah_kata < 5) {
        // Membuat variabel "kata_baru" bertipe "kata" dan membaca input kata dan artinya dari pengguna
        kata kata_baru;
        scanf("%s %[^\n]", kata_baru.kata, kata_baru.arti);
        // Memasukkan kata baru ke dalam array "dictionary" dan menambahkan jumlah kata yang sudah di-register
        dictionary[jumlah_kata++] = kata_baru;
    }
}


// Jika perintah yang diberikan pengguna adalah "find" yang telah masuk ke program
else if (strcmp(command, "find") == 0){
    // Membuat variabel "kata_find" bertipe char dan membaca kata yang ingin dicari dari pengguna
    char kata_find[21];
    scanf("%s", kata_find);

    // Mencari kata yang sesuai dengan kata yang dicari di dalam array "dictionary"
    int k;
    
    for ( k = 0; k < jumlah_kata; k++) {
        if (strcmp(kata_find,dictionary[k].kata) == 0) {
            // Jika ditemukan kata yang sesuai, mencetak kata dan artinya dengan format "kata#arti" dan keluar dari loopingan
            printf("%s#%s\n",  dictionary[k].kata, dictionary[k].arti);
        }
    }
}
// Jika perintah yang diberikan pengguna adalah "---", keluar dari perulangan while yang ada di bagian paling awal
else if (strcmp(command, "---") == 0) {
    j = 1;
    }
}
    return 0;
}
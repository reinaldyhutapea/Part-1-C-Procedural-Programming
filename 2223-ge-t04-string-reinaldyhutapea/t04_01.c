// 12S22010 - Reinaldy Hutapea
// 12S22048 - Ira Wianda Silalahi

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char kata[105];
    int l;
    int i;

    if (argc < 2) {
        scanf("%d", &l);
    } else {
        l = atoi(argv[1]);
    }

    scanf(" %[^\n]", kata);

    int panjang_kalimat = strlen(kata);
    int sisa = panjang_kalimat % l;

    if (sisa != 0) {
        for (i = sisa; i < l; i++) {
            kata[panjang_kalimat + i - sisa] = '#';
        }
        panjang_kalimat = panjang_kalimat + (l - sisa);
    }

    int n = 0;
    while (n < panjang_kalimat) {
        for (i = n; i < n + l; i++) {
            if (i >= panjang_kalimat) {
                break;
            }
            if (kata[i] != '\r') {
                printf("%c", kata[i]);
            }
        }
        n = n + l;
        if (n >= panjang_kalimat) {
            printf("#");
        } else {
            printf("\n");
        }
        
    }

    printf("\n"); // Tambahkan newline sebelum mencetak kolom

    int colom = panjang_kalimat / l;
    for (i = 0; i < l; i++) {
        for (int j = 0; j < colom; j++) {
            printf("%c", kata[j * l + i]);
        }
        if (i == l - 1) {
            break;
        }
        printf(" "); // Tambahkan spasi antar kolom
    }

    return 0;

}

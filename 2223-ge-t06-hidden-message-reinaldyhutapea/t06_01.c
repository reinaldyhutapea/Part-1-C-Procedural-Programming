// 12S22010 - Reinaldy Hutapea
// 12S22048 - Ira Wianda Silalahi

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void add_padding(char *kata, int *panjang_kalimat, int l) {
    int sisa = *panjang_kalimat % l;
    int i;
    if (sisa != 0) {
        for (i = sisa - 2; i < l; i++) {
            kata[*panjang_kalimat+ i - sisa+1] = '#';
        }
        *panjang_kalimat = *panjang_kalimat - 2 + (l - sisa+1 );
    }
}

void print_lines(char *kata, int panjang_kalimat, int l) {
    int n = 0;
    int i;
    while (n < panjang_kalimat) {
        for ( i = n; i < n + l; i++) {
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
    printf("\n");
}
int i,j;
void print_columns(char *kata, int panjang_kalimat, int l) {
    for ( i = 0; i < l; i++) {
        for ( j = i; j < panjang_kalimat + 1; j += l) {
            if (kata[j] != '\r' && kata[j] != ' ') {
                printf("%c", kata[j]);
        } else {
                printf(" ");
            }
        }
    }
}

int main(int argc, char *argv[]) {
    char kata[105];
    int l;
    int panjang_kalimat;

    if (argc < 2) {
        scanf("%d", &l);
    } else { 
        l = atoi(argv[1]); 
    }

    scanf("%[^\n]", kata); 
    panjang_kalimat = strlen(kata);
    add_padding(kata, &panjang_kalimat, l);

    print_lines(kata, panjang_kalimat, l);
    print_columns(kata, panjang_kalimat, l);

    return 0;
}
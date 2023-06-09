//  12S22010 - Reinaldy Hutapea
// 12S22048 - Ira Wianda Silalahi

#include <stdio.h>

int main(int _argc, char **_argv) {

//declare
int angka;

//tempat input angka
scanf("%d", &angka);

//penggunaan switch case untuk program yang sudah diketahui batasnya
switch (angka) {
  case 1:
    printf("January\n");
    printf("February\n");
    printf("March");
    break;
  case 2:
    printf("February\n");  
    printf("March\n");
    printf("April");
    break;
  case 3:
    printf("March\n");
    printf("April\n");
    printf("May");
    break;
  case 4:
    printf("April\n");
    printf("May\n");
    printf("June");    
    break;
  case 5:
    printf("May\n");
    printf("June\n");
    printf("July\n");    
    break;
  case 6:
    printf("June\n");
    printf("July\n");
    printf("August");    
    break;
  case 7:
    printf("July\n");
    printf("August\n");
    printf("September");    
    break;
  case 8:
    printf("August\n");
    printf("September\n");
    printf("October");    
    break;
  case 9:
    printf("September\n");
    printf("October\n");
    printf("November");    
    break;
  case 10:
    printf("October\n");
    printf("November\n");
    printf("December");    
    break;
  case 11:
    printf("November\n");
    printf("December\n");
    printf("New year\n"); 
    printf("January");   
    break;
  case 12:
    printf("December\n");
    printf("New year\n");
    printf("January\n"); 
    printf("February"); 

}
  return 0;
}

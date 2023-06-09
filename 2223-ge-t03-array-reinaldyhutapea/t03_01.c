// 12S22010 - Reinaldy Hutapea
// 12S22048 - Ira Silalahi

#include <stdio.h>

int main(int _argc, char **_argv) {
  
int n = 0;

int nilai_min = 0;
int nilai_max = 0;
int i;



scanf("%d", &n);
int jangkauan[n];


scanf("%d", &jangkauan[0]);
nilai_min = jangkauan[0] ;
nilai_max = jangkauan[0];

for (i = 1; i < n; i++){
  scanf("%d", &jangkauan[i]);

  if(jangkauan[i] < nilai_min){
    nilai_min = jangkauan[i];
  }
  if(jangkauan[i] > nilai_max){
    nilai_max = jangkauan[i];
}
}

printf("%d\n", nilai_min);
printf("%d", nilai_max);

  return 0;
}
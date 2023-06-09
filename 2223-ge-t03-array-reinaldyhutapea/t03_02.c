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


float min_rata=(float) (jangkauan[0]+jangkauan[1])/2;
for(i=1;i<n-1;i++){
  float rata=(float)(jangkauan [i]+jangkauan [i+1])/2;
  if(rata<min_rata){
    min_rata=rata;
  }
}



printf("%d\n", nilai_min);
printf("%d\n", nilai_max);
printf("%.2f",min_rata);

  return 0;
}
#include <stdio.h>

int main() {
    int u, b, total;

    scanf("%d", &u);
    scanf("%d", &b);

    u = (u + 2) / 3;
    b = (b + 3) / 3;

    int uWait = u * 3;
    int bWait = b * 3;

    switch (u)
    {
    case 4:
      uWait += 3;
      bWait += 6;
      break;
    
    case 0:
      uWait += 3;
      break;
    }
    
    total = uWait + bWait;

    printf("%d\n", uWait);
    printf("%d\n", bWait);
    printf("%d\n", total);

    return 0;
}

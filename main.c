#include <stdio.h>

int main() {

  int temp, n, max;

  scanf("%d%d", &n, &max);

  n--;
  
  while(n--){
    scanf("%d", &temp);
    if(temp > max) max = temp;
  }

  printf("%d", max);
  
  return 0;
}
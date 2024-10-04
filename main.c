#include <stdio.h>

int main() {

  int temp, n, max;

  scanf("%d", &n);
  scanf("%d", &temp);

  max = temp;
  n--;
  
  while(n--){
    scanf("%d", temp);
    if(temp > max) max = temp;
  }

  printf("%d", max);
  
  return 0;
}
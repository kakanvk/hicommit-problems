#include <stdio.h>

int main() {

  int n, sumOfEven = 0;

  scanf("%d", &n);

  for(i=1; i<=n; i++){
    sumOfEven += i%2==0 ? i : 0;
  }
  
  printf("%d", sumOfEven);
  
  return 0;
}
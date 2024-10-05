#include <stdio.h>

int main() {

  long long n, sumOfEven = 0;

  scanf("%lld", &n);

  if (n%2==0) {
    n--;
  }

  sumOfEven = ((n+1)/2)*((n+1)/2);
  
  printf("%lld", sumOfEven);
  
  return 0;
}
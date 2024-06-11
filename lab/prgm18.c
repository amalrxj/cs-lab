#include <stdio.h>

int addNumbers(int n);

int main() {

  int num;
  printf("Enter a positive integer: ");
  scanf("%d", &num);
  printf("Sum = %d", addNumbers(num));
  return 0;
}

int addNumbers(int n) {//5
  if (n != 0)
    return n + addNumbers(n - 1);//5*4
  else
    return n;
}

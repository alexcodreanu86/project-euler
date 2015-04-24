#include <stdio.h>
int sumOfNumbers(int num);
int main(int argc, char *argv[]) {
  int sum = sumOfNumbers(1000);
  printf("sum of multiples of 3 or 5 smaller than 1000 is: %d\n", sum);
}

int sumOfNumbers(int num) {
  int sum = 0;
  int i;
  for (i=0; i < num;i++) {
    if (i % 3 == 0 || i % 5 == 0) {
      sum += i;
    }
  }

  return sum;
}

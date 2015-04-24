#include <stdio.h>
#include <math.h>
#include <sys/time.h>

int largest_prime_factor(long num);
void benchmark_function();
int main(int argc, char *argv[]) {
  benchmark_function();
  benchmark_function();
  benchmark_function();
  printf("Largest prime factor of 600851475143: %d\n", largest_prime_factor(600851475143));
}

void benchmark_function() {
  float start_time = (float)clock()/CLOCKS_PER_SEC;
  int i;
  int prime;
  for(i = 0; i<100000; i++) {
    prime = largest_prime_factor(600851475143);
  }
  prime = largest_prime_factor(600851475143);
  float end_time = (float)clock()/CLOCKS_PER_SEC;

  printf("Benchmark: %f\n", end_time - start_time);
}

int largest_prime_factor(long num) {
  if (num % 2 == 0) {
    while(left % possible_factor == 0) {
      left = left / possible_factor;
    }
  }

  int last_factor = 2;
  int possible_factor = 2;
  long sqrt_of_num = sqrt(num);
  long left = num;

  possible_factor = 3;

  while(possible_factor <=left && possible_factor < sqrt_of_num) {
    if (left % possible_factor == 0) {
      while (left % possible_factor == 0) {
        left = left / possible_factor;
      }
      last_factor = possible_factor;
    } else {
      possible_factor += 2;
    }
  }
  return last_factor;
}

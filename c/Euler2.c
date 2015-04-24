#include <stdio.h>
#include <sys/time.h>

int sum_of_fibs(int num);
void benchmark_function();
int main(int argc, char *argv[]) {
  benchmark_function();
  benchmark_function();
  benchmark_function();
  printf("Sum of fibs under 4m: %d\n", sum_of_fibs(4000000));
}

void benchmark_function() {
  float start_time = (float)clock()/CLOCKS_PER_SEC;
  int i;
  int sum;
  for(i = 0; i<1000000; i++) {
    sum = sum_of_fibs(4000000);
  }
  float end_time = (float)clock()/CLOCKS_PER_SEC;

  printf("Sum of fibs under 4m: %f\n", end_time - start_time);
}

int sum_of_fibs(int num) {
  int sum = 2;
  int last_fib;
  int first_fib = 0;
  int second_fib = 1;
  int third_fib = 1;
  while (third_fib < num) {
    first_fib = second_fib + third_fib;
    second_fib = first_fib + third_fib;
    third_fib = first_fib + second_fib;
    sum += third_fib;
  };

  return sum;
}

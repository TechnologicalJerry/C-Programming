#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void *init_with_memset(int *arr, size_t num_locations) {

  return memset(arr, 0, num_locations * sizeof(int));
}

void *init_with_calloc(int *arr, size_t num_locations) {
  arr = calloc(num_locations, sizeof(int));
  return arr;
}

void *init_with_iteration(int *arr, size_t num_locations) {

  for (int i = 0; i < num_locations; i++) {
    arr[i] = 0;
  }
  return arr;
}

int main() {

  int arr[2560];
  for (int i = 0; i < 2560; i++)
    arr[i] = -1;

  clock_t start_time, end_time;
  double total_time;

  start_time = clock();

  init_with_memset(arr, 1000);
  end_time = clock();
  total_time = (double)(end_time - start_time);
  total_time = total_time / CLOCKS_PER_SEC;
  printf("Time for memset() = %.6f seconds\n", total_time);

  start_time = clock();

  init_with_calloc(arr, 1000);
  end_time = clock();
  total_time = (double)(end_time - start_time);
  total_time = total_time / CLOCKS_PER_SEC;
  printf("Time for calloc() = %.6f seconds\n", total_time);

  start_time = clock();

  init_with_iteration(arr, 1000);
  end_time = clock();
  total_time = (double)(end_time - start_time);
  total_time = total_time / CLOCKS_PER_SEC;
  printf("Time for naive iteration = %.6f seconds\n", total_time);

  return 0;
}
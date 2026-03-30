//Passing array to a function
#include <stdio.h>
// Function to display array
void display(int arr[], int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
}
int main() {
  int a[] = {10, 20, 30, 40, 50};
  int n = 5;
  printf("Array elements:\n");
  display(a, n);
  return 0;
}

#include <stdio.h>

int main() {
  int n;
  printf("Enter size: ");
  scanf("%d", &n);
  int arr[n];
  int sum = 0;
  printf("Enter %d elements:\n", n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    sum += arr[i];
  }


  float average = (float)sum / n;
  printf("Average: %.2f\n", average);

  return 0;
}

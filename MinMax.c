#include <stdio.h>
void MaxMin_Naive(int arr[], int n, int *max, int *min)
{
  *min = arr[0];
  *max = arr[0];
  for (int i = 0; i < n; i++)
  {
    if (arr[i] < *min)
      *min = arr[i];
    if (arr[i] > *max)
      *max = arr[i];
  }
}
void MaxMin(int arr[], int low, int high, int *max, int *min)
{
  int nMax, nMin;
  if (low == high)
  {
    *min = arr[low];
    *max = arr[high];
  }
  else if (low == high - 1)
  {
    if (arr[low] < arr[high])
    {
      *max = arr[high];
      *min = arr[low];
    }
    else
    {
      *max = arr[low];
      *min = arr[high];
    }
  }
  else
  {
    int mid = (low + high) / 2;
    MaxMin(arr, low, mid, max, min);
    MaxMin(arr, mid + 1, high, &nMax, &nMin);
    if (nMax > *max)
      *max = nMax;
    if (nMin < *min)
      *min = nMin;
  }
}
int main()
{
  int n, i;
  printf("Enter no of Elements: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter the Elements: ");
  for (i = 0; i < n; i++)
    scanf("%d", &arr[i]);
  int min, max;
  printf("Using Brute Force:\n");
  MaxMin_Naive(arr, n, &max, &min);
  MaxMin(arr, 0, n - 1, &max, &min);
  printf("Max Value: %d", max);
  printf("\nMin Value: %d", min);
  printf("\nUsing Divide and Conquer:\n");
  printf("Max Value: %d", max);
  printf("\nMin Value: %d", min);
}

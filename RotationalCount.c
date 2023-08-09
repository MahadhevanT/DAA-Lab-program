#include<stdio.h>
int countRotations(int arr[], int n)
{
    int low = 0, high = n - 1;
    if (arr[low] <= arr[high])
        return 0;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        int prev = (mid - 1 + n) % n;
        int next = (mid + 1) % n;
        if (arr[mid] <= arr[prev] && arr[mid] <= arr[next])
            return mid;
        else if (arr[mid] <= arr[high])
            high = mid - 1;
        else if (arr[mid] >= arr[0])
            low = mid + 1;
    }
    return 0;
}
int main()
{
  int n;
  printf("Enter the size:");
  scanf("%d",&n);
  int arr[n];
  printf("Enter the element:");
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  printf("result:%d",countRotations(arr,n));
  return 0;
}
#include<stdio.h>
int binarySearch (int arr[],int low,int high,int target)
{
if (low > high){
return -1;
}
else
{
int mid = (low + high)/2;
if (arr[mid] == target){
return mid;
}
else if(arr[mid] < target){
return binarySearch( arr, mid + 1, high,target);
}
else
return binarySearch( arr, low, mid - 1,target);
}
}
int main(){
    int size;
    printf("Enter the size:\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the element:\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    printf("Enter the target element:");
    scanf("%d",&target);
    int result=binarySearch(arr,0,size-1,target);
    printf("%d",result);
    }

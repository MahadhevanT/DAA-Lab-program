#include<stdio.h>
int findpeakelement(int arr[],int high,int low,int size){
  int mid=(low+high)/2;
  if((mid==0||arr[mid-1]<=arr[mid])&& (mid==size-1 ||arr[mid+1]<=arr[mid]))
  return mid;
  
  else if(mid-1>=0 && arr[mid-1]>arr[mid])
  return findpeakelement(arr,low,(mid-1),size);
  
  else
  return findpeakelement(arr,(mid+1),high,size);
}
int main(){
  int size;
  printf("Enter the size:");
  scanf("%d",&size);
  printf("enter the element:");
  int arr[size];
  for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
  }
  printf("peak element is %d",arr[findpeakelement(arr,size-1,0,size)]);
  return 0;
}
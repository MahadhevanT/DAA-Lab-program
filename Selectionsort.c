#include<stdio.h>
void swap(int *x,int *y){
  int temp=*x;
  *x=*y;
  *y=temp;
}
void selectionsort(int arr[],int size){
  int min;
  for(int i=0;i<size-1;i++){
    min=i;
    for(int j=i+1;j<size;j++){
      if(arr[j]<arr[min]){
        min=j;
      }
      if(min!=i){
        swap(&arr[min],&arr[i]);
      }
    }
  }
}
int main(){
  int size;
  printf("Enter the size:");
  scanf("%d",&size);
  int arr[size];
  for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
  }
  printf("Sorted array:\n");
  selectionsort(arr,size);
  for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
  }
  return 0;

}
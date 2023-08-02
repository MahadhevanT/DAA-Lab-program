#include<stdio.h>
int binarySearch(int arr[],int low,int high,int tar){
     while(low<=high){
        int a=(low+high)/2;
        if(arr[a]==tar){
        return tar;
        }
        if(arr[a]<tar){
            low=a+1;
        }else{
            high=a - 1;
        }
    }
    return -1;
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
    //bubble sort
    for(int i=0;i<size;i++){
        for(int j=0;j<=(size-i-1);j++){
            if(arr[j]>arr[j+1]){
                int temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Sorted element:");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    //Binary search
    int tar,i;
     printf("\nEnter the target:");
     scanf("%d",&tar);
    int res=binarySearch(arr,0,size-1,tar);
    if(res==-1){
        printf("Element is not present in the array");
    }else{
        printf(" Element is present in the array %d\n",res);
    }
     return -1;
}
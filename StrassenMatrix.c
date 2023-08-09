#include<stdio.h>
void StrassenMulti(int a[][2],int b[][2],int m[][2]){
  int p1=a[0][0]*(b[0][1]-b[1][1]);
  int p2=b[1][1]*(a[0][0]+a[0][1]);
  int p3=b[0][0]*(a[1][0]+a[1][1]);
  int p4=a[1][1]*(b[1][0]-b[0][0]);
  int p5=(a[0][0]+a[1][1])*(b[0][0]+b[1][1]);
  int p6=(a[0][1]-a[1][1])*(b[1][0]-b[1][1]);
  int p7=(a[0][0]-a[1][0])*(b[0][0]+b[0][1]);
  m[0][0]=p4+p5+p6-p2;
  m[0][1]=p1+p2;
  m[1][0]=p3+p4;
  m[1][1]=p1-p3+p5-p7;
}
int main(){
  int a[2][2],b[2][2],mul[2][2],i,j;
  printf("Enter the Matrix A:\n");
  for( i=0;i<2;i++){
      for(j=0;j<2;j++){
        scanf("%d",&a[i][j]);
      } 
  }
  printf("Enter the Matrix b:");
  for(i=0;i<2;i++){
    for(j=0;j<2;j++){
      scanf("%d",&b[i][j]);
    }
  }
  StrassenMulti(a,b,mul);
  printf("ProductMatrix mul:\n");
  for(i=0;i<2;i++){
    for(j=0;j<2;j++){
      printf("%d\t",mul[i][j]);
    }
    printf("\n");
  }
  return 0;
}
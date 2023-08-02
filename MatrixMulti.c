#include<stdio.h>
#define MAX 50
int main(){
    int a[MAX][MAX],b[MAX][MAX];
    int arows,acolumns,brows,bcolumns;
    printf("Enter the rows and columns of the matrix a:");
    scanf("%d %d",&arows,&acolumns);
    printf("Enter the elemnets of matrix a:\n");
    for(int i=0;i<arows;i++){
        for(int j=0;j<acolumns;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the rows and columns of matrix b:");
    scanf("%d %d",&brows,&bcolumns);
    printf("Enter the elemnets of matrix b:\n");
    for(int i=0;i<brows;i++){
        for(int j=0;j<bcolumns;j++){
            scanf("%d",&b[i][j]);
        }
    }
    int product[MAX][MAX];
    int sum=0;
    printf("\n");
    for(int i=0;i<arows;i++){
        for(int j=0;j<bcolumns;j++){
            for(int k=0;k<arows;k++){
                sum+=a[i][k]*b[j][k];
            }
            product[i][j]=sum;
            sum=0;
        }
    }
    printf("Resultant matrix\n");
    for(int i=0;i<arows;i++){
        for(int j=0;j<bcolumns;j++){
            printf("%d\t",product[i][j]);
        }
        printf("\n");
    }
    return 0;
}
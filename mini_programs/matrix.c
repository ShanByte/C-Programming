#include <stdio.h>
int main() 
{
    int A[2][2], B[2][2], sum[2][2], mul[2][2]={0};

    printf("Enter elements of Matrix A:\n");
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            scanf("%d",&A[i][j]);

    printf("Enter elements of Matrix B:\n");
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            scanf("%d",&B[i][j]);

    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            sum[i][j]=A[i][j]+B[i][j];

    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            for(int k=0;k<2;k++)
                mul[i][j]+=A[i][k]*B[k][j];

    printf("Addition:\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++) printf("%d ",sum[i][j]);
        printf("\n");
    }

    printf("Multiplication:\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++) printf("%d ",mul[i][j]);
        printf("\n");
    }
}

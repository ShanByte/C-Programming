#include <stdio.h>
int main()
{
    int n; 
    float sum=0,x;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%f",&x);
        sum+=x;
    }
    printf("Average=%f",sum/n);
}

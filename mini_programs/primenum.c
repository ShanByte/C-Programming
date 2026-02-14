#include <stdio.h>
int main()
{
    int n, temp=1;
    scanf("%d",&n);
    for(int i=2;i<=n/2;i++)
        if(n%i==0){ temp=0; break; }
    if(temp && n>1) 
      printf("Prime");
    else 
      printf("Not Prime");
}

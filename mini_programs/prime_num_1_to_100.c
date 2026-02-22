#include <stdio.h>
int main()
{
    for(int n=2;n<=100;n++){
        int f=1;
        for(int i=2;i<=n/2;i++)
            if(n%i==0){f=0; break;}
        if(f) printf("%d ",n);
    }
}

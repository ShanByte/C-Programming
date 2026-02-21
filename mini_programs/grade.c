#include <stdio.h>
int main()
{
    int m; scanf("%d",&m);
    if(m<50) printf("F");
    else if(m<60) printf("D");
    else if(m<70) printf("C");
    else if(m<80) printf("B");
    else if(m<90) printf("A");
    else printf("A+");
}

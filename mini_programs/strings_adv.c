#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    gets(a); gets(b);

    int len=strlen(a), flag=1;
    for(int i=0;i<len/2;i++)
        if(a[i]!=a[len-i-1]) flag=0;

    printf(flag?"Palindrome\n":"Not Palindrome\n");

    strrev(a);
    printf("Reverse=%s\n",a);

    printf(strcmp(a,b)==0?"Equal":"Not Equal");
}

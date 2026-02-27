#include <stdio.h>
struct emp{ char name[50]; float sal; };
int main()
{
    int n; scanf("%d",&n);
    struct emp e[n], t;
    for(int i=0;i<n;i++) scanf("%s%f",e[i].name,&e[i].sal);

    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(e[i].sal>e[j].sal){ t=e[i]; e[i]=e[j]; e[j]=t; }

    for(int i=0;i<n;i++)
        printf("%s %.2f\n",e[i].name,e[i].sal);
}

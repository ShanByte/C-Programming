#include <stdio.h>
struct book{ int id; char name[50]; };
int main()
{
    int n; scanf("%d",&n);
    struct book b[n];
    for(int i=0;i<n;i++) scanf("%d%s",&b[i].id,b[i].name);
    for(int i=0;i<n;i++) printf("%d %s\n",b[i].id,b[i].name);
}

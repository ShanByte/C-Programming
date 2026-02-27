#include <stdio.h>
struct stud{ int roll; char name[50]; };
int main()
{
    int n,key;
    scanf("%d",&n);
    struct stud s[n];
    for(int i=0;i<n;i++) scanf("%d%s",&s[i].roll,s[i].name);

    scanf("%d",&key);
    for(int i=0;i<n;i++)
        if(s[i].roll==key)
            printf("%d %s",s[i].roll,s[i].name);
}

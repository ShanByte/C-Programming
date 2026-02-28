#include <stdio.h>
struct emp{ int id; char name[50]; float sal; };
int main()
{
    struct emp e;
    scanf("%d%s%f",&e.id,e.name,&e.sal);
    printf("%d %s %.2f",e.id,e.name,e.sal);
}

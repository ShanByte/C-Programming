#include <stdio.h>
struct item
{
    int no, stock;
    char name[50], category[50];
};
int main(){
    struct item i;
    scanf("%d%s%s%d",&i.no,i.name,i.category,&i.stock);
    printf("%d %s %s %d",i.no,i.name,i.category,i.stock);
}

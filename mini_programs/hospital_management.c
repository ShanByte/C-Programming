#include <stdio.h>
union patient
{
    int id, age;
    char name[50], disease[50];
};
int main(){
    union patient p;
    scanf("%d",&p.id);
    scanf("%s",p.name);
    scanf("%s",p.disease);
    scanf("%d",&p.age);
    printf("%d %s %s %d",p.id,p.name,p.disease,p.age);
}

#include <stdio.h>
struct student{
    int roll, year;
    char name[50], activity[50];
    union{ int cash; char memento[50]; } prize;
};
int main()
{
    struct student s;
    scanf("%d%s%d%s",&s.roll,s.name,&s.year,s.activity);
    scanf("%d",&s.prize.cash);
    printf("%d %s %d %s %d",s.roll,s.name,s.year,s.activity,s.prize.cash);
}

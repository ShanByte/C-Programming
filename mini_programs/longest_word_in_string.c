#include <stdio.h>
#include <string.h>
int main()
{
    char str[200], max[50];
    gets(str);
    char *tok=strtok(str," ");
    while(tok){
        if(strlen(tok)>strlen(max)) strcpy(max,tok);
        tok=strtok(NULL," ");
    }
    printf("%s",max);
}

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], ch, rep;
    int count=0, words=1;

    gets(str);
    scanf(" %c",&ch);
    scanf(" %c",&rep);

    for(int i=0;str[i];i++){
        if(str[i]==' ') words++;
        if(str[i]==ch){
            count++;
            str[i]=rep;
        }
    }
    printf("Words=%d Occurrences=%d\n%s",words,count,str);
}

// the 4
#include <stdio.h>
#include <stdbool.h>
bool compare (char first[] , char second[])
{
    int i ;
    for (i=0;i<70;i++)
    {
        if(*(first+i)!=*(second+i))
        {
            break ;
        }
        if( *(first+i)=='\0' && *(second+i)=='\0')
        {
            i=70;
            break ;
        }
    }
    if (i==70)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main (void)
{
    int a;
    char first[70];
    char second[70];
    printf("enter the first phrase : \n");
    scanf("%s",first);
    printf("enter the second phrase : \n");
    scanf("%s",second);
    a=compare(first , second);
    if (a==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0 ;
}




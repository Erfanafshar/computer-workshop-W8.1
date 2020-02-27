// the 6
#include <stdio.h>
void Cyclic_Swap(int *a , int *b , int *c)
{
    int temp;
    temp=*b;
    *b=*a;
    *a=*c;
    *c=temp;
}
int main (void)
{
    int a , b ,c ;
    printf("enter num 1 and num 2 and num 3 : ");
    scanf("%d%d%d",&a,&b,&c);
    Cyclic_Swap(&a,&b,&c);
    printf("num 1 = %d\nnum 2 = %d\nnum 3 = %d\n",a,b,c);
    return 0 ;
}





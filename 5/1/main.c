#include <stdio.h>
int main (void)
{
    int a[2][2] = { {1,2},{3,4} };
    printf("0x%p 0x%p", &a[0][0], &a[1][0]);
    return 0 ;
}
// آدرس شروع خانه اول 00 است و آدرس شروع خانه سوم 08 است
// که نشان دهنده این است که 2 خانه جلو تر رفته ایم
// سایز هر عدد صحیج 4 واحد است

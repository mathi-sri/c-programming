#include <stdio.h>

int main()
{
    int a=2, b=4, c=6;
    
    int f=(a>b)?((a>c)?a:c):((b>c)?b:c);
    
    printf("Greatest number is: %d\n",f);
    return 0;
}

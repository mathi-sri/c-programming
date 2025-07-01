#include <stdio.h>

int main()
{
    int n;

    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++)
    {
        if((i&1)==0)
        {
            printf("\n%d is even\n",i);
        }
        else
        {
           printf("\n%d is odd\n",i);
        }
    }

    return 0;
}


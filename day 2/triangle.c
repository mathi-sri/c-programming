#include <stdio.h>

int main()
{
    int d, f, g;
    printf("enter the number(d):");
    scanf("%d",&d);
    printf("enter the number(f):");
    scanf("%d",&f);
    printf("enter the number(g):");
    scanf("%d",&g);
    
    if(d==f==g)
    {
        printf("equal triangle");
    }
    else if (d+f>g)
    {
        printf("this form the triangle");
    }
    else
    {
        printf("this not form the triangle" );
    }

    return 0;
}

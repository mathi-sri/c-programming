#include <stdio.h>

int main()
{
   char ch;
   scanf("%c",&ch);
   printf("enter the character:");
   
       if((ch>='A' && ch<='Z' )|| (ch>='a' && ch<='z'))
    {   
           printf("THIS IS THE ALPABATS");
    } 
       else if( ch >='0' && ch <='9')
          {
          printf("THIS IS THE NUMBER");
          }
       
       
       else
       {
       printf("THIS IS THE SPECIAL CHARACTER");
       }
 

    return 0;
}

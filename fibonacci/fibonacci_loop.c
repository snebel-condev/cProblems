#include <stdio.h>

int fib(int n)
{

    int i, out, first, second;
    
    for ( i = 1 ; i <= n ; i++ ) 
    {
        if ( i == 1 )
        {
            out = 1;
            first = 0;
            second = 0;
        }
        else
        {
            second = first;
            first = out;
            out = first + second;
        }
            
    }
    return out;

}


int main()
{
    int a, i;
    int result;

    printf("Enter an integer\n");
    scanf("%d", &a);
   
    for ( i = 1 ; i <= a ; i++ )
    {
        result = fib(i);
        printf("%d\t",result);
    }

     
    return 0;
}

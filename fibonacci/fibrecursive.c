#include <stdio.h>


int fibrec(int n)
{
    if ( n == 1 )
    {
        return 1;
    }
    else if ( n == 0 )
    {
        return 0;
    }
    else
    {
        return fibrec(n-1) + fibrec(n-2);
    }
}

int main()
{
    int a, i;
    int result;

    printf("Enter an integer\n");
    scanf("%d", &a);
   
    for ( i = 1 ; i <= a ; i++ )
    {
        result = fibrec(i);
        printf("%d\t",result);
    }

     
    return 0;
}

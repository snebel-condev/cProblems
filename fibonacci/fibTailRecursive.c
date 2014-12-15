#include <stdio.h>

// no default arguments in c. otherwise this wouldn't be necessary
int fibTailRecursiveHelper(int n, int a, int b) {    
    return n <= 1 ? a : fibTailRecursiveHelper(n - 1, a + b, a);
}

int fibTailRecursive(int n) {
    return fibTailRecursiveHelper(n, 1, 0);
}

int main() {
    int a;

    printf("Enter an integer\n");
    scanf("%d", &a);
   
    for ( int i = 1 ; i <= a ; i++ ) {            
        printf("%d\t", fibTailRecursive(i));
    }
}

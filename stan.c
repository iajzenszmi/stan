//program edited by  Ian Martin Ajzenszmidt, Melbourne  Australia

#include <stdio.h>
#include <stdlib.h>
/* function statement */
int multiply(int a, int b);

/* function definition */
int multiply(int a, int b) {
    return a * b;
}

int main() {
    int result = multiply(3, 4);
    printf("The result is %d\n", result);
    return 0;
}

     

#include <stdio.h>

#define ADD(a, b) ((a) + (b))
#define SUB(a, b) ((a) - (b))
#define MUL(a, b) ((a) * (b))
#define DIV(a, b) ((b) ? ((a) / (b)) : 0)  

int main() {
    int a,b;
    printf("enter the first number a : ");
    scanf("%d",&a);
    printf("enter the second number b : ");
    scanf("%d",&b);
    printf("the addition is : %d\n", ADD(a, b));
    printf("the subtraction is : %d\n", SUB(a, b));
    printf("the multiplication is : %d\n", MUL(a, b));
    printf("the division is : %d\n", DIV(a, b));
    return 0;
}

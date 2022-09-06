#include <stdio.h>

// https://www.geeksforgeeks.org/showbits-function-in-c-with-examples/
void showbits (int n){
    int i, k, andmask;

    for (i = 7; i >= 0;i--){
        andmask = 1 << i;
        k = n & andmask;
        if(i == 3){
            printf(" ");
        }
        k == 0 ? printf ("0") : printf ("1");
    }
    printf("\n");
}


int main(){
    //use unsigned int for logical shift
    int a;
    int b; 
    printf("Input value a (hex): ");
    scanf("%x", &a);

    printf("Input value a (hex): ");
    scanf("%x", &b);

    // printf("Results: hex= %x, binary= ", ~a); showbits(~a);
    // printf("Results: hex= %x, binary= ", ~b); showbits(~b);

    printf("Results a&b : hex= %x, binary= ", a&b); showbits(a&b);
    printf("Results a|b : hex= %x, binary= ", a|b); showbits(a|b);
    printf("Results a^b : hex= %x, binary= ", a^b); showbits(a^b);
    return 0;
}
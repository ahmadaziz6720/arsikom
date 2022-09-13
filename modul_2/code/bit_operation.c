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
    unsigned int x;
    unsigned int y; 
    printf("Input value a (hex): ");
    scanf("%x", &x);

    printf("Input value a (hex): ");
    scanf("%x", &y);

    printf("Results x&y : hex= %x, binary= ", x&y); showbits(x&y);
    printf("Results x|y : hex= %x, binary= ", x|y); showbits(x|y);
    printf("Results ~x|~y : hex= %x, binary= ", (~x)|(~y)); showbits((~x)|(~y));
    printf("Results x&!y : hex= %x, binary= ", (x)&(!y)); showbits((x)&(!y));
    printf("Results x&&y : hex= %x, binary= ", x&&y); showbits(x&&y);
    printf("Results x||y : hex= %x, binary= ", x||y); showbits(x||y);
    printf("Results !x||!y : hex= %x, binary= ", (!x)||(!y)); showbits((!x)||(!y));
    printf("Results x&&~y : hex= %x, binary= ", x&&(~y)); showbits(x&&(~y));
    return 0;
}
#include <stdio.h>

int func1 (unsigned int a){
    return (int) ((a<<27)>>27);
}
int func2 (unsigned int a){
    return ((int) a<<27)>>27;
}

int main(){
    unsigned int a=31;
    printf("0x%x   %d\n", func1(a), func1(a));
    printf("0x%x   %d\n", func2(a), func2(a));
    return 0;
}
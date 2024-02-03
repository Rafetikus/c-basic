#include <stdio.h>


int main(void){
    char a[] = "r";
    char b[] = "j";
    foo();
    printf("%s\n", a);
}


int foo(void){
    printf("Hello\n");
    return 0;
}
#include<stdio.h>
#include<conio.h>
int main(){
    int a = 10, b = 5;

    printf("Increment/decrementOperators:\n");

    printf("a++: %d\n",a++);
    printf("Now a = %d\n",a);
    printf("++a: %d\n",++a);

    printf("b--: %d\n",b--);
    printf("Now b = %d\n",b);
    printf("--b: %d\n",--b);

    getch();
    return 0;
}
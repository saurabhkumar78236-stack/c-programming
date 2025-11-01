#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,c;
    float d = 7;
    printf("enter three numbers \n");
    scanf("%d%d%d",&a,&b,&c);
    d=(a+b+c)/3;
    printf("\n Average is=%f",d);

    getch();
    return 0;
}
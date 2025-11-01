#include<stdio.h>
#include<conio.h>
int main()
{
    int j, sum = 0;
    printf("the first 10 natural numbers:\n");
    for(j=1;j <=10;j++)
    {
        sum = sum+j;
        printf("%d ",j);
    }
    printf("\n the sum is : %d\n",sum);
    
}
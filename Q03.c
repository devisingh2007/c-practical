#include<stdio.h>
int main()
{
    int sum=0;
    int num;
    do
    {
        printf("Enter a number : ");
        scanf("%d",&num);
        sum += num;
    } while (num!=0);
    printf("Sum is %d",sum);
    
    return 0;
}
#include<stdio.h>
int sumofdigits(int n,int sum)
{
    if(n==0)
        return sum;
    return sumofdigits(n/10,sum=sum+n%10);
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Sum of digits: %d",sumofdigits(n,0));
    return 0;
}
#include<stdio.h>
int main()
{
    int n,rem,result=0,multiplier=1;
    printf("Enter the number to convert decimal into binary:");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%2;
        result=result+rem*multiplier;
        n=n/2;
        multiplier=multiplier*10;
    }
    printf("\nBinary Number is =%d",result);
    return 0;
}

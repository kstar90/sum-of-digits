#include <stdio.h>
int sum (int num)
{
    if (num != 0)
    {
        return (num % 10 + sum (num / 10));
    }
    else
    {
       return 0;
    }
}
int main()
{
    int n,result;
    printf("enter the number : ");
    scanf("%d",&n);
    result = sum(n);
    printf("Sum of digits in %d is %d\n", n, result);
    return 0;
}

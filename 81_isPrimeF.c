#include <stdio.h>
int isPrime(int num)
{
    int is_prime = 1;
    for(int i = 2 ; i<=num/2 ; i++)
    {
        if(num%i==0)
        {
            is_prime = 0;
            break;
        }
    }
    if(num==1 || num==0)
    {
        is_prime = 0;
    }
    return is_prime;
}
int main()
{
    int num;
    printf("Enter number to check whether it is prime : ");
    scanf("%d",&num);
    if (is_prime)
    {
        printf("the number %d is prime.",num);
    }
    else
    {
        printf("the number %d is not prime.",num);
    }
    return 0;
}
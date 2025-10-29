#include <stdio.h>
#include <math.h>
int countDig(int num)
{
    int count = 0;
    while(num!=0)
    {
        num/=10;
        count++;
    }
    return count;
}
int isArmstrong(int num , int n)
{
    int store = num,sum=0;
    int d;
    while(num!=0)
    {
        d = num%10;
        num/=10;
        sum += pow((double)d,(double)n);
    }
    if((int)sum == store) return 1;
    else return 0;
}
int main()
{
    int num,n;
    scanf("%d",&num);
    n = countDig(num);
    if(isArmstrong(num,n))
    {
        printf("the number %d is an armstron number.",num);
    }
    else{
        printf("the number %d is not an armstron number.",num);
    }
}
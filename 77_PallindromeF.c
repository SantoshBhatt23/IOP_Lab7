#include <stdio.h>
int isPallin(int num)
{
    int storeNum = num , rev = 0,d; 
    while(num!=0)
    {
        d = num%10;
        rev = rev*10 + d;
        num/=10;
    }
    if(storeNum == rev)
        printf("the number %d is a pallindrome number\n",storeNum);
    else
        printf("the number %d is not a pallindrome number\n",storeNum);
}
int main()
{
    int num;
    scanf("%d",&num);
    isPallin(num);
}
#include <stdio.h>
int fact(int n){
    if (n==1) return 1;
    int factN,factNm1;
    factNm1 = fact(n-1);
    factN=n*factNm1;
    return factN;
}
int nCr(int n , int r)
{
    return (fact(n))/(fact(r)*fact(n-r));
}
int main()
{
    int n,r;
    scanf("%d %d",&n,&r);
    printf("%dC%d = %d\n",n,r,nCr(n,r));
}
#include <stdio.h>
void printFibo(int n)
{
    int t1 = 0 , t2 = 1 , nt = 1;
    for(int i = 1 ; i<=n ; i++)
    {
        if(i==1) printf("%d\t",t1);
        else if(i==2) printf("%d\t",t2);
        else{
            nt = t1+t2;
            t1 = t2;
            t2= nt;
            printf("%d\t",nt);
        }
    }
    printf("\n");
}
int main()
{
    printFibo(5);
    printFibo(10);
    printFibo(15);
}
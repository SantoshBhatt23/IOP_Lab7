#include <stdio.h>
int maxInArray(int arr[],int n)
{
    int max = arr[0];
    for(int i = 0 ; i<n ; i++)
    {
        if (arr[i]>max)
            max = arr[i];
    }
    return max;
}
void printArray(int arr[],int n){
    for(int i = 0 ; i<n ; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
int main()
{
    int a[5] = {23,33,45,1090,22};
    printf("given array a:\n");
    printArray(a,5);
    printf("max element in array = %d\n",maxInArray(a,5));
    return 0;
}
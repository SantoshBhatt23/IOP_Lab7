#include <stdio.h>
#void swap(int *x ,int *y)
{
  *x = *x + *y;
  *y = *x - *y;
  *x = *x -*y;
  return;
}
int main()
{
  printf("enter x and y (space separated):");
  scanf("%d %d",&x,&y);
  swap(&x,&y);
  printf("after swapping x = %d and y = %d\n",x,y);
  return 0;
}

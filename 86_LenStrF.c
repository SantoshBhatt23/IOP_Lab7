#include <stdio.h>
#include <string.h>
int stringLenth(char str[])
{
    int count = 0;
    for(int i = 0 ; str[i]!='\0';i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char str[200];
    printf("Enter line of text : \n");
    fgets(str,200,stdin);
    str[strcspn(str,"\n")] = '\0';
    printf("Length of string = %d",stringLenth(str));
    return 0;
}
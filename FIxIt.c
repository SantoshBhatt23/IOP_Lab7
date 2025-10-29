#include <stdio.h>
int isVowel(char ch)
{
    if((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u') || (ch == 'A') || (ch == 'E') || (ch== 'I') || (ch == 'O') || (ch == 'U'))
        return 1;
    else
        return 0;
}
int main()
{
    int t;
    scanf("%d",&t);
    int r[t];
    for (int i = 0 ; i<t ; i++)
    {
        char ch;
        scanf("%c",&ch);
        r[i] = isVowel(ch);
    }
    for(int i = 0 ; i<t ; i++)
    {
        if (r[i] == 1)
            printf("vowel\n");
        else
            printf("not vowel\n");
    }
}
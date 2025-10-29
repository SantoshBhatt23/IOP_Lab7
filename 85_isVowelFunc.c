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
    char ch;
    sanf("%c",&ch);
    (isVowel(ch))?printf("vowel"):printf("not vowel");
    return 0;
}
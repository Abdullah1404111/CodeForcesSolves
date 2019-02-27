#include <stdio.h>
#include <string.h>

int main()
{
    char ch[200];
    int i, len;

    scanf("%s", ch);

    len = strlen(ch);

    for(i = 0; i < len; i++) {
        if(ch[i] >= 'A' && ch[i] <= 'Z'){
            ch[i] = ch[i] - 'A' + 'a';
        }
    }

    for(i = 0; i < len; i++)
        if(ch[i] != 'a' && ch[i] != 'e' && ch[i] != 'i' && ch[i] != 'o' &&ch[i] != 'u' && ch[i] != 'y')
             printf(".%c",ch[i]);

    printf("\n");

    return 0;
}

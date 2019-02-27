#include <stdio.h>
#include <string.h>

int main()
{
    char ch[100];
    int i, j, k, ck = 0, l;

    scanf("%s", ch);

    for(i = 0; i < strlen(ch); i++)
    {
        if(ch[i] == 'h' && ck == 0) {
            ck = 1;
        }

        if(ck == 1) {
            if(ch[i] == 'e')
                ck = 2;
        }

        if(ck == 2) {
            if(ch[i] == 'l') {
                ck = 3;
                continue;
            }
        }

        if(ck == 3) {
            if(ch[i] == 'l')
                ck = 4;
        }

        if(ck == 4) {
            if(ch[i] == 'o')
                ck = 5;
        }
    }

    if(ck == 5)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}

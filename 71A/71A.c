#include <stdio.h>
#include <string.h>

int main()
{
    int n, len, i, j, c;
    char ch[100];
    scanf("%d", &n);

    while(n--)
    {
        c = 0;
        scanf("%s", ch);
        len = strlen(ch);

        if(len > 10) {
            for(i = 0; i < len; i++) {
                c++;
            }
            printf("%c%d%c\n", ch[0], c-2, ch[len-1]);
        } else {
            printf("%s\n", ch);
        }
    }
}

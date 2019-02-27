#include <stdio.h>
#include <string.h>

int main()
{
    char ch[200], ch1[200], t[200];
    unsigned int n, i;
    scanf("%s", ch);
    scanf("%s", t);

    n = strlen(ch);

    for(i=0; i<n; i++)
    {
        ch1[i] = ch[n-i-1];
    }
    ch1[i] = '\0';

    if(strcmp(t, ch1) == 0)
        printf("YES\n", ch);
    else
        printf("NO\n", ch);


    return 0;
}

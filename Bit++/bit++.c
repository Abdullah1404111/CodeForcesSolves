#include <stdio.h>
#include <string.h>
int main()
{
    char ch[150][100];
    int i, n, c = 0;
    scanf("%d", &n);

    for(i=0; i<n; i++) {
        scanf("%s", ch[i]);
    }

    for(i=0; i<n; i++){
        if(strcmp(ch[i], "++X") == 0)
            c++;
        else if(strcmp(ch[i], "X++") == 0)
            c++;
        else
            c--;
    }

    printf("%d\n",c);


}

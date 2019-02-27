#include <stdio.h>

int main()
{
    int N;

    scanf("%d", &N);

    if(N%2 == 0 && N != 2)
        printf("YES");
    else
        printf("No");
    return 0;
}

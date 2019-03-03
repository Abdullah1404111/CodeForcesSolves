#include <stdio.h>

int main()
{
    int arr[100], i, k, N, c = 0;

    scanf("%d %d", &N, &k);

    for(i = 0; i < N; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < N; i++)
        if(arr[i] >= arr[k-1] && arr[i] != 0)
            c++;

    printf("%d\n", c);
}

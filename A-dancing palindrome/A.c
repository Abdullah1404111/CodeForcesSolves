#include <stdio.h>

int main()
{
    int n, a, b, arr[20], i, ck = 1, bl = 0, w = 0, min, max, sum;

    scanf("%d %d %d", &n, &a, &b);
    if(a >= b) {
        min = b;
        max = a;
    } else {
        min = a;
        max = b;
    }
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < n / 2 + 1; i++) {
        if(n % 2 == 0) {
            if(i >= n/2)
                break;
        }

        if(i == n-i-1) {
            if(arr[i] == 2){
                if(a >= b) {
                    bl++;
                } else {
                    w++;
                }
            }
            break;
        }

        if(arr[i] == 2 && arr[n-i-1] == 2) {

            if(a >= b) {
                bl = bl + 2;
            } else {
                w = w + 2;
            }
        } else if (arr[i] != 2 || arr[n-i-1] != 2) {
            if(arr[n-1-i] == 2) {
                if(arr[i] == 0) {
                    w++;
                } else {
                    bl++;
                }
            } else if(arr[i] == 2){
                if(arr[n-1-i] == 0) {
                    w++;
                } else {
                    bl++;
                }
            } else {
                if(arr[i] != arr[n-i-1]) {
                    ck = 0;
                    break;
                }
            }
        }
    }

    sum = w*a + bl*b;

    if(ck == 1) {
        printf("%d", sum);
    } else {
        printf("%d", -1);
    }
    return 0;
}

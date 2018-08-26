#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    for(int i = 1, n, temp, total; i <= T; i++) {
        scanf("%d", &n);

        temp = n;
        total = 0;

        while(temp) {
            total = (total * 10) + (temp % 10);
            temp /= 10;
        }

        if(n == total) {
            printf("Case %d: Yes\n", i);
        }
        else {
            printf("Case %d: No\n", i);
        }
    }

    return 0;
}

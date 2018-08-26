#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    for(int i = 1, n; i <= T; i++) {
        scanf("%d", &n);
        int count = 0;

        while(n) {
            if(n & 1) {
                count++;
            }
            n >>= 1;
        }

        if(count & 1) {
            printf("Case %d: odd\n", i);
        }
        else {
            printf("Case %d: even\n", i);
        }
    }

    return 0;
}

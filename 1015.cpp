#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    for(int i = 1; i <= T; i++) {
        int N, n, total = 0;
        scanf("%d", &N);

        while(N--) {
            scanf("%d", &n);

            if(n > 0) {
               total += n;
            }
        }
        printf("Case %d: %d\n", i, total);
    }

    return 0;
}

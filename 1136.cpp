#include <stdio.h>

int main()
{
    int T;

    scanf("%d", &T);

    for(int i = 1, a, b; i <= T; i++) {
        scanf("%d%d", &a, &b);

        int ans1 = a / 3 * 2;

        if(a % 3 == 0) {
            ans1--;
        }

        int ans2 = b / 3 * 2;

        if(b % 3 == 2) {
            ans2++;
        }

        printf("Case %d: %d\n", i, ans2 - ans1);
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    for(int i = 1; i <= T; i++) {
        long long a, b, c;
        scanf("%lld%lld%lld", &a, &b, &c);

        a *= a;
        b *= b;
        c *= c;

        if((a + b) == c || (a + c) == b || (b + c) == a) {
            printf("Case %d: yes\n", i);
        }
        else {
            printf("Case %d: no\n", i);
        }
    }

    return 0;
}

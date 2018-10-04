#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, n, d;

    scanf("%d", &T);

    for(int i = 1; i <= T; i++) {
        scanf("%d%d", &n, &d);

        int ans = 1, temp = d;

        while(d % n) {
            d = (d * 10 + temp) % n;
            ans++;
        }

        printf("Case %d: %d\n", i, ans);
    }

    return 0;
}

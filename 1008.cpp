 #include <bits/stdc++.h>

using namespace std;

int main()
{

    int T;
    long long s, n, x, y;

    scanf("%d", &T);

    for(int i = 1; i <= T; i++) {
        scanf("%lld", &s);
        n = ceil(sqrt(s));

        if(n * n - s < n) {
            x = n;
            y = n * n - s + 1;
        } else {
            x = -n * n + 2 * n + s - 1;
            y = n;
        }

        if(n & 1) {
            swap(x, y);
        }

        printf("Case %d: %lld %lld\n", i, x, y);
    }

    return 0;
}
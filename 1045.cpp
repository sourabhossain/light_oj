#include <bits/stdc++.h>
#define SIZE 1000001

double dp[SIZE];

int main()
{
    for(int i = 1; i < SIZE; i++) {
        dp[i] = dp[i - 1] + log(i);
    }

    int T;

    scanf("%d", &T);

    for(int i = 1, f, b; i <= T; i++) {
        scanf("%d%d", &f, &b);
        printf("Case %d: %lld\n", i, (long long)(dp[f] / log(b) + 1));
    }

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int count(long long n) {
    int cnt = 0;

    while (n) {
        if (n & 1) {
            cnt++;
        }

        n >>= 1;
    }

    return cnt;
}

long long solve(long long n) {
    long long result = 0;

    for (long long i = 1; i <= n; i *= 2) {
        if (n & i) {
            result = n + i;
            break;
        }
    }
    
    int diffent = count(n) - count(result);

    for (int i = 0; i < diffent; i++) {
        result += (1 << i);
    }

    return result;
}

int main(int argc, char const *argv[])
{
    int T;
    long long n;

    scanf("%d", &T);

    for (int i = 1; i <= T; i++) {
        scanf("%lld", &n);
        printf("Case %d: %lld\n", i, solve(n));
    }

    return 0;
}

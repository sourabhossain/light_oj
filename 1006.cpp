#include <bits/stdc++.h>
#define PI acos(-1)
#define MOD 10000007

using namespace std;

int main(int argc, char const *argv[])
{
	int T;

	scanf("%d", &T);

	for(int i = 1; i <= T; i++) {
		long long dp[10001], n;

		scanf("%lld%lld%lld%lld%lld%lld%lld", &dp[0], &dp[1], &dp[2], &dp[3], &dp[4], &dp[5], &n);

		for(int j = 6; j <= n; j++) {
			dp[j] = (dp[j - 1] + dp[j - 2] + dp[j - 3] + dp[j - 4] + dp[j - 5] + dp[j - 6]) % MOD;
		}

		printf("Case %d: %lld\n", i, dp[n] % MOD);
	}

	return 0;
}
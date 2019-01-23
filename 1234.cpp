#include <bits/stdc++.h>
#define PHI 0.57721566490153286060651209
#define SIZE 1000001

using namespace std;

double dp[SIZE];

int main(int argc, char const *argv[])
{
	for(int i = 1; i < SIZE; i++) {
		dp[i] = dp[i - 1] + 1.0 / i;
	}

	int T, n;

	scanf("%d", &T);

	for(int i = 1; i <= T; i++) {
		scanf("%d", &n);
		printf("Case %d: %0.10lf\n", i, (n < SIZE)? dp[n] : log(n + 0.5) + PHI);
	}

	return 0;
}
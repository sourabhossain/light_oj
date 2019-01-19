#include <bits/stdc++.h>
#define PI acos(-1)

using namespace std;

int main(int argc, char const *argv[])
{
	int T;
	long long n, m;

	scanf("%d", &T);

	for(int i = 1; i <= T; i++) {
		scanf("%lld%lld", &n, &m);
		printf("Case %d: %lld\n", i, ((m * ((m << 1) + 1)) - (m * (m + 1))) * (n / (m << 1)));
	}

	return 0;
}
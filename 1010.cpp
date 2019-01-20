#include <bits/stdc++.h>
#define PI acos(-1)

using namespace std;

int main(int argc, char const *argv[])
{
	int T, m, n;

	scanf("%d", &T);

	for(int i = 1; i <= T; i++) {
		scanf("%d%d", &m, &n);

		if(m == 1 || n == 1) {
			printf("Case %d: %d\n", i, max(m, n));
		} else if(m == 2 || n == 2) {
			m = max(m, n);
			printf("Case %d: %d\n", i, (m % 4 == 1 || m % 4 == 3)? m + 1 : (m % 4 == 2)? m + 2 : m);
		} else {
			m *= n;
			printf("Case %d: %d\n", i, (m & 1)? (m >> 1) + 1 : (m >> 1));
		}
	}

	return 0;
}
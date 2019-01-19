#include <bits/stdc++.h>
#define PI acos(-1)

using namespace std;

int main(int argc, char const *argv[])
{
	int T;

	scanf("%d", &T);

	for(int i = 1; i <= T; i++) {
		int n, p, q, sum = 0, temp, ans = 0;

		scanf("%d%d%d", &n, &p, &q);

		while(n--) {
			scanf("%d", &temp);
			sum += temp;

			if(ans < p && sum <= q) {
				ans++;
			}
		}

		printf("Case %d: %d\n", i, ans);
	}

	return 0;
}
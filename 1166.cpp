#include <bits/stdc++.h>
#define PI acos(-1)

using namespace std;

int main(int argc, char const *argv[])
{
	int T, n;

	scanf("%d", &T);

	for(int i = 1; i <= T; i++) {
		scanf("%d", &n);
		int data[n + 1], result = 0;

		for(int j = 1; j <= n; j++) {
			scanf("%d", &data[j]);
		}

		for(int j = 1; j <= n; j++) {
			if(data[j] != j) {
				for(int k = j + 1; k <= n; k++) {
					if(data[k] == j) {
						swap(data[k], data[j]);
						result++;
					}
				}
			}
		}

		printf("Case %d: %d\n", i, result);
	}

	return 0;
}
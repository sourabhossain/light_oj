#include <bits/stdc++.h>
#define PI acos(-1)

using namespace std;

int main(int argc, char const *argv[])
{
	int T, n;

	scanf("%d", &T);

	for(int i = 1; i <= T; i++) {
		scanf("%d", &n);
		vector<int> v(n);

		for(int j = 0; j < n; j++) {
			scanf("%d", &v[j]);
		}

		sort(v.begin(), v.end());
        
        int result = 0;

		for(int j = 0; j < n; j++) {
			for(int k = j + 1; k < n; k++) {
				result += (upper_bound(v.begin() + j, v.end(), v[j] + v[k] - 1) - v.begin() - 1 - k);
			}
		}

	    printf("Case %d: %d\n", i, result);
	}

	return 0;
}
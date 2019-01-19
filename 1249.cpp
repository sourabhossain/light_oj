#include <bits/stdc++.h>
#define PI acos(-1)

using namespace std;

int main(int argc, char const *argv[])
{
	int T;

	scanf("%d", &T);

	for(int i = 1; i <= T; i++) {
		int n, a, b, c;
		string name, min_name, max_name;
		int max = INT_MIN, min = INT_MAX;

		scanf("%d", &n);

		while(n--) {
			cin >> name >> a >> b >> c;
            a *= b * c;

			if(a > max) {
				max = a;
				max_name = name;
			}

			if(a < min) {
				min = a;
				min_name = name;
			}
		}

		if(min < max) {
            printf("Case %d: %s took chocolate from %s\n", i, max_name.c_str(), min_name.c_str());
		} else {
		    printf("Case %d: no thief\n", i);
		}
	}

	return 0;
}

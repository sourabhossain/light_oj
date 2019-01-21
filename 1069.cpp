#include <bits/stdc++.h>
#define PI acos(-1)

using namespace std;

int main(int argc, char const *argv[])
{
	int T;

	scanf("%d", &T);

	for(int i = 1, a, b; i <= T; i++) {
		scanf("%d%d", &a, &b);
		printf("Case %d: %d\n", i, (int)abs(b - a) * 4 + 19 + a * 4);
	}

	return 0;
}
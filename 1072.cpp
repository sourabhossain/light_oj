#include <bits/stdc++.h>
#define PI acos(-1)

using namespace std;

int main(int argc, char const *argv[])
{
	int T;
	double r, n;

	scanf("%d", &T);

	for(int i = 1; i <= T; i++) {
		scanf("%lf%lf", &r, &n);
		printf("Case %d: %lf\n", i, (r * sin(PI / n)) / (1 + sin(PI / n)));
	}

	return 0;
}
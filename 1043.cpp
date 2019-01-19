#include <bits/stdc++.h>
#define PI acos(-1)

using namespace std;

int main(int argc, char const *argv[])
{
    int T;
    double ab, ac, bc, ratio;

    scanf("%d", &T);

    for(int i = 1; i <= T; i++) {
    	scanf("%lf%lf%lf%lf", &ab, &ac, &bc, &ratio);
    	printf("Case %d: %lf\n", i, ab * sqrt(ratio / (ratio + 1)));
    }

	return 0;
}
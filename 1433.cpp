#include <bits/stdc++.h>
#define PI acos(-1)

using namespace std;

int main(int argc, char const *argv[])
{
	int T;
	double ox, oy, ax, ay, bx, by;

	scanf("%d", &T);

	for(int i = 1; i <= T; i++) {
		scanf("%lf%lf%lf%lf%lf%lf", &ox, &oy, &ax, &ay, &bx, &by);
		
		double r = sqrt(((ax - ox) * (ax - ox)) + ((ay - oy) * (ay - oy)));
		double ab = sqrt(((bx - ax) * (bx - ax)) + ((by - ay) * (by - ay)));
          
		printf("Case %d: %0.8lf\n", i,  acos(((r * r) + (r * r) - (ab * ab)) / (2 * r * r)) * r);
	}

	return 0;
}
#include <bits/stdc++.h>
#define PI acos(-1)

using namespace std;

int main(int argc, char const *argv[])
{
	int T, ax, ay, bx, by, cx, cy;

	scanf("%d", &T);

	for(int i = 1; i <= T; i++) {
		scanf("%d%d%d%d%d%d", &ax, &ay, &bx, &by, &cx, &cy);
		printf("Case %d: %d %d %d\n", i, ax + cx - bx, ay + cy - by, (int)abs(ax * (by - cy) + bx * (cy - ay) + cx * (ay - by)));
	}

	return 0;
}
#include <bits/stdc++.h>
#define PI acos(-1)

using namespace std;

int main(int argc, char const *argv[])
{
	int T;

	scanf("%d", &T);

	for(int i = 1; i <= T; i++) {
		printf("Case %d:\n", i);
		
		int x1, x2, y1, y2, x, y, m;

		scanf("%d%d%d%d%d", &x1, &y1, &x2, &y2, &m);

		while(m--) {
			scanf("%d%d", &x, &y);

			if(x > x1 && x < x2 && y > y1 && y < y2) {
				puts("Yes");
			} else {
				puts("No");
			}
		}
	}

	return 0;
}
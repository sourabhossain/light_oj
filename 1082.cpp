#include <bits/stdc++.h>
#define SIZE 100001

using namespace std;

int arr[SIZE];
int tree[SIZE * 3];

void init(int node, int b, int e) {
    if(b == e) {
        tree[node] = arr[b];
        return;
    }

    init(node << 1, b, (b + e) >> 1);
    init((node << 1) + 1, ((b + e) >> 1) + 1, e);
    tree[node] = min(tree[node << 1], tree[(node << 1) + 1]);
}

int query(int node, int b, int e, int i, int j) {
    if(i > e || j < b) {
        return INT_MAX;
    }

    if(b >= i && e <= j) {
        return tree[node];
    }

    return min(query(node << 1, b, (b + e) >> 1, i, j), query((node << 1) + 1, ((b + e) >> 1) + 1, e, i, j));
}

int main()
{
	int T;

	scanf("%d", &T);

	for(int i = 1; i <= T; i++) {
		int n, q;

		scanf("%d%d", &n, &q);

		for(int j = 1; j <= n; j++) {
			scanf("%d", &arr[j]);
		}
        
        memset(tree, 0, sizeof(tree));  
		init(1, 1, n);
        printf("Case %d:\n", i);
        int x, y;

		while(q--) {
			scanf("%d%d", &x, &y);
			printf("%d\n", query(1, 1, n, x, y));
		}
	}

    return 0;
}

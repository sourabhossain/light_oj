#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, n, q;

    scanf("%d", &T);

    for(int i = 1; i <= T; i++) {
        printf("Case %d:\n", i);

        scanf("%d%d", &n, &q);
        vector<int> data(n);

        for(int j = 0; j < n; j++) {
            scanf("%d", &data[j]);
        }

        int a, b;
        vector<int>::iterator lower, upper;

        while(q--) {
            scanf("%d%d", &a, &b);
            lower = lower_bound(data.begin(), data.end(), a);
            upper = upper_bound(data.begin(), data.end(), b);
            printf("%d\n", (int)(upper - lower));
        }
    }

    return 0;
}

#include <bits/stdc++.h>
#define SIZE 101

using namespace std;

vector<map<int, int> > f(SIZE);

void solve() {
    int p[] = {2, 3, 5, 7};

    for(int i = 2, temp; i < SIZE; i++) {
        temp = i;
        map<int, int> m;

        for(int j = 0; j < 4; j++) {
            while(temp % p[j] == 0) {
                temp /= p[j];
                m[p[j]]++;
            }
        }

        if(temp > 1) {
            m[temp]++;
        }

        f[i] = m;
    }
}

int main()
{
    solve();
    int T, n;

    scanf("%d", &T);

    for(int i = 1; i <= T; i++) {
        scanf("%d", &n);
        map<int, int> ans;

        for(int j = 2; j <= n; j++) {
            for(map<int, int>::iterator it = f[j].begin(); it != f[j].end(); it++) {
                ans[it->first] += it->second;
            }
        }

        printf("Case %d: %d =", i, n);
        for(map<int, int>::iterator it = ans.begin(); it != ans.end(); ) {
            printf(" %d (%d)", it->first, it->second);

            if(++it != ans.end()) {
                printf(" *");
            }
        }
        putchar('\n');
    }

    return 0;
}

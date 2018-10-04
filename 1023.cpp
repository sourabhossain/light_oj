#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    scanf("%d", &T);

    for(int i = 1, n, k; i <= T; i++) {
        scanf("%d%d", &n, &k);
        string s = "";

        for(int i = 0; i < n; i++) {
            s += ('A' + i);
        }

        int temp = 1;

        for(int i = 1; i <= n; i++) {
            temp *= i;

            if(temp > k) {
                break;
            }
        }

        if(temp < k) {
            k = temp;
        }

        set<string> ans;

        do {
            ans.insert(s);
        } while(--k && next_permutation(s.begin(), s.end()));

        printf("Case %d:\n", i);

        for(set<string>::iterator it = ans.begin(); it != ans.end(); it++) {
            cout << *it << "\n";
        }
    }

    return 0;
}

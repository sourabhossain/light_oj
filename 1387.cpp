#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    scanf("%d", &T);

    for(int i = 1, n; i <= T; i++) {
        scanf("%d", &n);

        string s;
        int total = 0;

        printf("Case %d:\n", i);
        while(n--) {
            cin >> s;

            if(s == "donate") {
                int t;
                scanf("%d", &t);
                total += t;
            }
            else if(s == "report") {
                printf("%d\n", total);
            }
        }
    }

    return 0;
}

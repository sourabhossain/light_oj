#include <bits/stdc++.h>

using namespace std;

bool mod(string n, long long m) {
    long long r = 0;
    int i = 0;

    if(n[i] == '-') {
        i = 1;
    }

    while(n[i]) {
        r = (r * 10 + (n[i++] - '0')) % m;
    }

    return r == 0;
}

int main()
{
    int T;
    string n;
    long long m;

    scanf("%d", &T);

    for(int i = 1; i <= T; i++) {
        cin >> n >> m;

        if(mod(n, m)) {
            printf("Case %d: divisible\n", i);
        } else {
            printf("Case %d: not divisible\n", i);
        }
    }

    return 0;
}

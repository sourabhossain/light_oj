#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    scanf("%d", &T);

    for(int i = 1; i <= T; i++) {
        long long w;

        scanf("%lld", &w);

        if(w & 1) {
            printf("Case %d: Impossible\n", i);
        } else {
            long long even = 2, odd = w / 2;

            while(!(odd & 1)) {
                odd /= 2;
                even *= 2;
            }

            printf("Case %d: %lld %lld\n", i, odd, even);
        }
    }

    return 0;
}

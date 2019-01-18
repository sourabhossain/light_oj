#include <bits/stdc++.h>
#define PI acos(-1)

using namespace std;

int main(int argc, char const *argv[])
{
    int T;

    scanf("%d", &T);

    for(int i = 1; i <= T; i++) {
        int n, m;

        scanf("%d%d", &n, &m);
        long long data[n];

        for(int j = 0; j < n; j++) {
            scanf("%lld", &data[j]);
        }

        char ch;
        
        while(m--) {
            cin >> ch;

            if(ch == 'S') {
                int d;
                
                scanf("%d", &d);

                for(int j = 0; j < n; j++) {
                    data[j] += d;
                }
            } else if(ch == 'M') {
                int d;

                scanf("%d", &d);

                for(int j = 0; j < n; j++) {
                    data[j] *= d;
                }
            } else if(ch == 'D') {
                int k;
                
                scanf("%d", &k);

                for(int j = 0; j < n; j++) {
                    if(data[j]) {
                        data[j] /= k;
                    }
                }
            } else if(ch == 'R') {
                reverse(data, data + n);
            } else if(ch == 'P') {
                int y, z;
                scanf("%d%d", &y, &z);
                swap(data[y], data[z]);
            }
        }

        printf("Case %d:\n", i);

        for(int j = 0; j < n; ) {
            printf("%lld", data[j]);

            if(++j != n) {
                putchar(' ');
            }
        }
        putchar('\n');
    }

    return 0;
}
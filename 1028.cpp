#include <bits/stdc++.h>

using namespace std;

#define SIZE 1000002

int prime[(SIZE >> 6) + 2];
vector<int> p;

#define CHECK(n) (prime[n >> 6] & (1 << ((n % 64) >> 1)))
#define SET(n) (prime[n >> 6] |= (1 << ((n % 64) >> 1)))

void sieve() {
	int root = sqrt(SIZE);
	p.push_back(2);

	for(int i = 3; i < SIZE; i += 2) {
		if(CHECK(i) == false) {
			p.push_back(i);

			if(i <= root) {
                for(int j = i * i; j < SIZE; j += i << 1) {
                    SET(j);
                }
			}
		}
	}
}

int main()
{
    sieve();
	int T, length = p.size();
	long long n;

	scanf("%d", &T);

	for(int i = 1; i <= T; i++) {
        scanf("%lld", &n);
        int ans = 1;

        for(int j = 0; j < length && p[j] * p[j] <= n; j++) {
            int c = 0;

            while(n % p[j] == 0) {
                n /= p[j];
                c++;
            }

            ans *= (c + 1);
        }

        if(n > 1) {
            ans *= 2;
        }

        printf("Case %d: %d\n", i, ans - 1);
	}

	return 0;
}

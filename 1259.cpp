#include <bits/stdc++.h>
#define SIZE 10000002

using namespace std;

vector<int> p;
int prime[(SIZE >> 6) + 2];

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

bool isPrime(int n) {
	return n > 1 && (n == 2 || ((n & 1) && !CHECK(n)));
}

int main()
{
    sieve();
    int T, n;

    scanf("%d", &T);

    for(int i = 1; i <= T; i++) {
        scanf("%d", &n);
        int c = 0, temp;

        for(int i = 0; ; i++) {
            temp = n - p[i];

            if(temp < p[i]) {
                break;
            } else if(isPrime(temp)) {
                c++;
            }
        }
        printf("Case %d: %d\n", i, c);
    }

    return 0;
}

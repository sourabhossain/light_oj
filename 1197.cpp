#include <bits/stdc++.h>
#define SIZE 10000002

using namespace std;

int prime[SIZE/64 + 2];

#define CHECK(n) (prime[n / 64] & (1 << ((n % 64) / 2)))
#define SET(n) (prime[n / 64] |= (1 << ((n % 64) / 2)))

vector<int> sievePrime;

void sieve() {
	int root = sqrt(SIZE);
	sievePrime.push_back(2);

	for(int i = 3; i < SIZE; i += 2) {
		if(CHECK(i) == false) {
            sievePrime.push_back(i);

            if(i <= root) {
                for(int j = i * i; j < SIZE; j += i << 1) {
                    SET(j);
                }
            }
		}
	}
}

vector<long long> segment;

void segmentSieve(long long low, long long high) {
    int root = sqrt(high) + 1;
    long long start, temp;

    for(long long i = low; i <= high; i++) {
        segment.push_back(i);
    }

    if(low == 0) {
        segment[1] = 0;
    } else if(low == 1) {
        segment[0] = 0;
    }

    for(int i = 0; sievePrime[i] <= root; i++) {
        temp = sievePrime[i];
        start = temp * temp;

        if(start < low) {
            start = ((low + temp - 1) / temp) * temp;
        }

        for(long long j = start; j <= high; j += temp) {
            segment[j - low] = 0;
        }
    }
}

int main()
{
    sieve();
    int T;
    long long low, high;

    scanf("%d", &T);

    for(int i = 1; i <= T; i++) {
        scanf("%lld%lld", &low, &high);

        segmentSieve(low, high);
        int c = 0;

        for(long long j = low; j <= high; j++) {
            if(segment[j - low]) {
                c++;
            }
        }

        segment.clear();
        printf("Case %d: %d\n", i, c);
    }

    return 0;
}

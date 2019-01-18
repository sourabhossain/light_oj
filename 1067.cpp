#include <bits/stdc++.h>
#define PI acos(-1)
#define MOD 1000003
#define SIZE 1000001 

using namespace std;

long long f[SIZE];

long long bigMod(long long b, long long p) {
    long long r = 1;

    while(p) {
    	if(p & 1) {
    		r = ((r % MOD) * (b % MOD)) % MOD;
    	}

    	p >>= 1;
    	b = ((b % MOD) * (b % MOD)) % MOD;
    }

    return r;	
} 

int main(int argc, char const *argv[])
{
    f[0] = f[1] = 1;

    for(int i = 2; i < SIZE; i++) {
    	f[i] = (i * f[i - 1]) % MOD;
    }

    int T;
    long long  n, c;

    scanf("%d", &T);

    for(int i = 1; i <= T; i++) {
    	scanf("%lld%lld", &n, &c);
	    printf("Case %d: %lld\n", i, (f[n] * bigMod((f[n - c] * f[c]) % MOD, MOD - 2)) % MOD);
    }

	return 0;
}
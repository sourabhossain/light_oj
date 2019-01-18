#include <bits/stdc++.h>
#define PI acos(-1)

using namespace std;

long long f[] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800, 39916800, 479001600, 6227020800, 87178291200, 1307674368000, 20922789888000, 355687428096000, 6402373705728000, 121645100408832000};

int main(int argc, char const *argv[])
{
  	int T;

  	scanf("%d", &T);

  	for(int i = 1; i <= T; i++) {
  		long long n;

  		scanf("%lld", &n);
  		vector<int> v;

  		for(int j = 19; j >= 0; j--) {
  			if(n >= f[j]) {
  				n -= f[j];
  				v.push_back(j);
  			}
  		}

  		if(n) {
  			printf("Case %d: impossible\n", i);
  		} else {
  			printf("Case %d: ", i);

  			for(int j = v.size() - 1; j > 0; j--) {
  				printf("%d!+", v[j]);
  			}
  			printf("%d!\n", v[0]);
  		}
  	}

	return 0;
}

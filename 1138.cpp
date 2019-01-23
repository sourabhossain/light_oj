#include <bits/stdc++.h>
#define PI acos(-1)

using namespace std;

int zeroCount(int n) {
	int zero = 0;

	while(n) {
    	zero += n /= 5;
    }

    return zero;
}

int binarySearch(int n) {
    int left = 1, right = n * 5, mid, result = -1, temp;

    while(left <= right) {
    	mid = left + ((right - left) >> 1);
        temp = zeroCount(mid);

    	if(temp == n) {
    		result = mid;
    		right = mid - 1;
    	} else if(temp < n) {
    		left = mid + 1;
    	} else {
    		right = mid - 1;
    	}
    }

	return result;
}

int main(int argc, char const *argv[])
{
	int T, n;

	scanf("%d", &T);

	for(int i = 1; i <= T; i++) {
		scanf("%d", &n);
        n = binarySearch(n);

		if(n == -1) {
			printf("Case %d: impossible\n", i);
		} else {
			printf("Case %d: %d\n", i, n);
		}
	}

	return 0;
}

#include <bits/stdc++.h>
#define PI acos(-1)

using namespace std;

int main(int argc, char const *argv[])
{
	int T, n;
	string str;

	scanf("%d", &T);

	for(int i = 1; i <= T; i++) {
		cin >> n >> str;
		n %= 3;

		if(str == "Bob") {
			printf("Case %d: %s\n", i, (n == 0)? "Alice" : "Bob");
		} else {
			printf("Case %d: %s\n", i, (n == 1)? "Bob" : "Alice");
		}
	}

	return 0;
}
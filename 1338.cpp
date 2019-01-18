#include <bits/stdc++.h>
#define PI acos(-1)

using namespace std;

int main(int argc, char const *argv[])
{
    int T;
    string a, b;

    scanf("%d ", &T);

    for(int i = 1; i <= T; i++) {
    	getline(cin, a);
    	getline(cin, b);

    	a.erase(remove(a.begin(), a.end(), ' '), a.end());
    	b.erase(remove(b.begin(), b.end(), ' '), b.end());

    	for(int j = 0, length = a.size(); j < length; j++) {
    		a[j] |= 32;
    	}

    	for(int j = 0, length = b.size(); j < length; j++) {
    		b[j] |= 32;
    	}

    	sort(a.begin(), a.end());
    	sort(b.begin(), b.end());

    	if(a.size() > b.size() && a.find(b) != string::npos) {
    		printf("Case %d: Yes\n", i);
    	} else if(b.find(a) != string::npos) {
    		printf("Case %d: Yes\n", i);
    	} else {
    		printf("Case %d: No\n", i);
    	}
    }

	return 0;
}

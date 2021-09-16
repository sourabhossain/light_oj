#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    string str;

    scanf("%d", &T);

    for(int i = 1; i <= T; i++) {
        cin >> str;

        if(str[4] != 's') {
            str.insert(4, "s");
        }

        printf("Case %d: %s\n", i, str.c_str());
    }

    return 0;
}

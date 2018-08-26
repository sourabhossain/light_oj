#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    scanf("%d", &T);

    for(int k = 1; k <= T; k++) {
        char a[101], b[101], temp;
        int arr[4];

        scanf("%s%s", a, b);
        stringstream ss(a);

        for(int i = 0; i < 4; i++) {
            ss >> arr[i];
            ss >> temp;
        }

        int j = 0, sum = 0;

        for(int i = 0, power = 7; b[i]; i++) {
            if(b[i] == '.') {
                if(sum != arr[j]) {
                    break;
                }

                power = 7, j++, sum = 0;
            }
            else {
                sum = sum + (b[i] - '0') * pow(2, power--);
            }
        }

        if(sum == arr[j]) {
           printf("Case %d: Yes\n", k);
        }
        else {
            printf("Case %d: No\n", k);
        }
    }

    return 0;
}

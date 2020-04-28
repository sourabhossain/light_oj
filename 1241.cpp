/*
 * Author Name: Sourab Hossain
 * Email: cpsourab@gmail.com
 */

#include <bits/stdc++.h>

using namespace std;

#define PI acos(-1)
#define DEGREE(radian) (radian * (180 / PI))
#define RADIAN(degree) ((degree * PI) / 180)

int dr[] = {+0, +0, +1, -1, -1, +1, -1, +1};
int dc[] = {-1, +1, +0, +0, +1, +1, -1, -1};

int main(int argc, char const *argv[])
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int T;

    scanf("%d", &T);

    for(int i = 1; i <= T; i++) {
        int n, result = 0, num, p = 2;

        scanf("%d", &n);

        while(n--) {
            scanf("%d", &num);

            if(num > p) {
                result += ceil((num - p) / 5.0);
                p = num;
            }
        }

        printf("Case %d: %d\n",i , result);
    }

    return 0;
}
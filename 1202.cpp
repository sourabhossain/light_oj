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

    int T, r1, c1, r2, c2;

    scanf("%d", &T);

    for(int i = 1; i <= T; i++) {
        scanf("%d%d%d%d", &r1, &c1, &r2, &c2); 

        r1 = abs(r1 - r2);
        c1 = abs(c1 - c2);

        if(r1 == c1) {
            printf("Case %d: 1\n", i);
        } else if((r1 & 1) == (c1 & 1)) {
            printf("Case %d: 2\n", i);
        } else {
            printf("Case %d: impossible\n", i);
        }
    }

    return 0;
}
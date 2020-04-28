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
        double r1, r2, r3;
        
        scanf("%lf%lf%lf", &r1, &r2, &r3);
        
        double a = r1 + r2;
        double b = r2 + r3;
        double c = r1 + r3;
        double s = (a + b + c) / 2;
        double area = sqrt(s * (s - a) * (s - b) * (s - c));

        area -= (0.5 * r1 * r1 * acos((a*a + c*c - b*b) / (2*a*c)));
        area -= (0.5 * r2 * r2 * acos((a*a + b*b - c*c) / (2*a*b)));
        area -= (0.5 * r3 * r3 * acos((b*b + c*c - a*a) / (2*b*c)));

        printf("Case %d: %lf\n", i, area);
    }

    return 0;
}
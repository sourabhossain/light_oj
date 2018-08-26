#include <stdio.h>
#include <math.h>
#define PI 2 * acos(0.0)

int main()
{
    int T;
    scanf("%d", &T);

    for(int i = 1; i <= T; i++) {
        double r;

        scanf("%lf", &r);
        printf("Case %d: %0.2lf\n", i, pow(2*r, 2) - (PI*r*r));
    }

    return 0;
}

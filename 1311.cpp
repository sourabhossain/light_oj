#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    scanf("%d", &T);
    double v1, v2, v3, a1, a2;

    for(int i = 1; i <= T; i++) {
        scanf("%lf%lf%lf%lf%lf", &v1, &v2, &v3, &a1, &a2);
        
        double t1 = v1 / a1;
        double t2 = v2 / a2;
        double t3 = t1;
        
        if(t1 < t2) {
            t3 = t2;
        }
        
        double bird = v3 * t3;
        double trains = v1 * t1 - 0.5 * a1 * t1 * t1;
        trains += v2 * t2 - 0.5 * a2 * t2 * t2;

        printf("Case %d: %0.10lf %0.10lf\n", i, trains, bird); 
    }
    
    return 0;
}

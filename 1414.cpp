#include <bits/stdc++.h>

using namespace std;

bool isLeapYear(int year) {
    return !(year % 4) && (year % 100) || !(year % 400);
}

int main()
{
    int T;

    scanf("%d", &T);

    for(int i = 1; i <= T; i++) {
        string m1, m2;
        int d1, d2, y1, y2;
        char ch;

        cin >> m1 >> d1 >> ch >> y1 >> m2 >> d2 >> ch >> y2;

        int result = ((y2 / 4) - (y2 / 100) + (y2 / 400)) - ((y1 / 4) - (y1 / 100) + (y1 / 400));

        if(isLeapYear(y1) && (m1 == "January" || m1 == "February")) {
            result++;
        }

        if(isLeapYear(y2) && (m2 == "January" || (m2 == "February" && d2 < 29))) {
            result--;
        }

        printf("Case %d: %d\n", i, result);
    }

    return 0;
}
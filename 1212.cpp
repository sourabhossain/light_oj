#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    scanf("%d", &T);

    for(int i = 1; i <= T; i++) {
        int n, m, temp;

        scanf("%d%d", &n, &m);
        printf("Case %d:\n", i);

        deque<int> d;
        string s;

        while(m--) {
            cin >> s;

            if(s == "pushLeft") {
                scanf("%d", &temp);

                if(n == d.size()) {
                    puts("The queue is full");
                } else {
                    printf("Pushed in left: %d\n", temp);
                    d.push_front(temp);
                }
            } else if(s == "pushRight") {
                scanf("%d", &temp);

                if(n == d.size()) {
                    puts("The queue is full");
                } else {
                    printf("Pushed in right: %d\n", temp);
                    d.push_back(temp);
                }
            } else if(s == "popLeft") {
                if(d.empty()) {
                    puts("The queue is empty");
                } else {
                    printf("Popped from left: %d\n", d.front());
                    d.pop_front();
                }
            } else {
                if(d.empty()) {
                    puts("The queue is empty");
                } else {
                    printf("Popped from right: %d\n", d.back());
                    d.pop_back();
                }
            }
        }
    }

    return 0;
}

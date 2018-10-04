#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    scanf("%d", &T);

    for(int i = 1; i <= T; i++) {
        stack<string> b, f;
        string s;

        printf("Case %d:\n", i);
        b.push("http://www.lightoj.com/");

        while(cin >> s && s != "QUIT") {
            if(s == "VISIT") {
                cin >> s;
                cout << s << endl;
                b.push(s);

                while(!f.empty()) {
                    f.pop();
                }
            } else if(s == "BACK") {
                if(b.size() < 2) {
                    puts("Ignored");
                } else {
                    s = b.top();
                    b.pop();
                    f.push(s);
                    cout << b.top() << endl;
                }
            } else {
                if(f.empty()) {
                    puts("Ignored");
                } else {
                    cout << f.top() << endl;
                    b.push(f.top());
                    f.pop();
                }
            }
        }
    }

    return 0;
}

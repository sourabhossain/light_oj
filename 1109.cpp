#include <bits/stdc++.h>
#define SIZE 1000

using namespace std;

struct Node {
    int first, second;
};

Node node[SIZE];

void nod() {
    int count = 1;

    for(int i = 1; i <= SIZE; i++) {
        for(int j = 2; j < i; j++) {
            if(i % j == 0) {
                count++;
            }
        }

        node[i - 1].first = count;
        node[i - 1].second = i;
        count = 2;
    }
}

bool compare(Node first, Node second) {
    if(first.first == second.first) {
        return first.second > second.second;
    }

    return first.first < second.first;
}

int main()
{
    nod();
    sort(node, node + SIZE, compare);

    int T;

    scanf("%d", &T);

    for(int i = 1, n; i <= T; i++) {
        scanf("%d", &n);
        printf("Case %d: %d\n", i, node[n - 1].second);
    }

    return 0;
}

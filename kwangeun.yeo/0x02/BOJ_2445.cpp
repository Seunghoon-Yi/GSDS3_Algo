#include <bits/stdc++.h>

using namespace std;

int N;

void DrawLine(int L) {
    for (int i = 0; i < L; ++i) {
        cout << "*";
    }
    for (int i = 0; i < 2 * (N - L); ++i) {
        cout << " ";
    }
    for (int i = 0; i < L; ++i) {
        cout << "*";
    }
    cout << "\n";
}

void Draw(int L) {
    if (L >= N) {
        for (int i = 0; i < 2 * N; ++i) {
            cout << "*";
        }
        cout << "\n";
        return;
    }

    DrawLine(L);
    Draw(L + 1);
    DrawLine(L);
}

int main() {
//    freopen("input.txt", "r", stdin);
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> N;
    Draw(1);

    return 0;
}
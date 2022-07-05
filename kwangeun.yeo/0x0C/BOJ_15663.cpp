#include <iostream>
#include <algorithm>

using namespace std;

bool is_used[10];
int nums[10];
int res[10];
int N, M;

void func(int idx) {
    if (idx >= M) {
        for (int i = 0; i < M; ++i) {
            cout << res[i] << ' ';
        }
        cout << '\n';
        return;
    }

    int prev = 0;
    for (int i = 0; i < N; ++i) {
        if (is_used[i]) continue;
        if (nums[i] == prev) continue;
        is_used[i] = true;
        res[idx] = nums[i];
        prev = nums[i];
        func(idx + 1);
        is_used[i] = false;
        // another solution not using prev
        // while (nums[i] == nums[i + 1]) ++i;
    }
}

int main() {
    freopen("input.txt", "r", stdin);
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> N >> M;
    for (int i = 0; i < N; ++i) {
        cin >> nums[i];
    }
    sort(nums, nums + N);
    func(0);

    return 0;
}
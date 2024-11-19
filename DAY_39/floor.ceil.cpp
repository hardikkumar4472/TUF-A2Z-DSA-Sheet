pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
    pair<int, int> ans = { -1, INT_MAX};

    for (int i = 0; i < n; i++) {
        if (a[i] >= x && a[i] < ans.second)
            ans.second = a[i];
        if (a[i] <= x && a[i] > ans.first)
            ans.first = a[i];
    }

    if (ans.second == INT_MAX)
        ans.second = -1;

    return ans;
}

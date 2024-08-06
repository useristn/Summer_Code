#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    // Mảng cộng dồn s[i] = a[0] + a[1] + ... + a[i]
    vector<int> s(n);
    s[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        s[i] = s[i - 1] + a[i]; // s[i] = a[0] + a[1] + ... + a[i]
    }
    for (auto i : s)
    {
        cout << i << " ";
    }
    return 0;
}
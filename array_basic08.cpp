#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<int, int> m;
    for (auto i : a)
    {
        m[i]++;
    }
    for (auto i : a)
    {
        if (m[i] != 0)
        {
            cout << i << " ";
            m[i] = 0;
        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int nmin = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        nmin = min(nmin, a[i]);
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == nmin)
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
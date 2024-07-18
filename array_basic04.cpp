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
    int x;
    cin >> x;
    int less, greater;
    less = greater = 0;
    for (int i = 0; i < n; i++)
    {
        if (x > a[i])
        {
            less++;
        }
        else if (x < a[i])
        {
            greater++;
        }
    }
    cout << less << endl
         << greater;
    return 0;
}
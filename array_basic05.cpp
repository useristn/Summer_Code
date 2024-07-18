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
    bool check = true;
    for (int i = 0; i < n; i += 2)
    {
        if (a[i] % 2 == 0)
        {
            cout << a[i] << " ";
            check = false;
        }
    }
    if (check)
    {
        cout << "NONE";
    }
    return 0;
}
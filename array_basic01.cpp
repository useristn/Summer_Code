#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int cnt_even, cnt_odd, sum_even, sum_odd;
    cnt_even = cnt_odd = sum_even = sum_odd = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
        {
            cnt_even++;
            sum_even += a[i];
        }
        else
        {
            cnt_odd++;
            sum_odd += a[i];
        }
    }
    cout << cnt_even << endl
         << cnt_odd << endl
         << sum_even << endl
         << sum_odd << endl;
    return 0;
}
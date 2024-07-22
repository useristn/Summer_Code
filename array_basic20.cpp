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
    for (int i = 1; i < n - 1; i++) // Hai phần tử đầu và cuối mảng không được coi là thỏa mãn á
    {
        if ((a[i] > a[i - 1] && a[i] > a[i + 1]))
        {
            cout << a[i] << " ";
        }
    }
    return 0;
}
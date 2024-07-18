#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        int left = 0;
        for (int l = 0; l < i; l++)
        {
            left += a[l];
        }
        int right = 0;
        for (int r = i + 1; r < n; r++)
        {
            right += a[r];
        }
        if (isPrime(left) && isPrime(right))
        {
            cout << i << " ";
        }
    }
    return 0;
}
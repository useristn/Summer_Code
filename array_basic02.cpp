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
    long long cnt, sum;
    cnt = sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (isPrime(a[i]))
        {
            cnt++;
            sum += a[i];
        }
    }
    double avg = double(sum) / cnt;
    cout << fixed << setprecision(3) << avg;
    return 0;
}
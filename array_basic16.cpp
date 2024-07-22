#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n) // Hàm kiểm tra số nguyên tố
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
bool isPerfectSquare(int n) // Hàm kiểm tra số chính phương
{
    // Số chính phương là số có căn bậc 2 của nó là số nguyên
    // Ví dụ như 16 = 4 * 4
    int x = sqrt(n);
    if (x * x == n)
    {
        return true;
    }
    return false;
}
int reverseN(int n) // Hàm đảo ngược số n
{
    int r = 0;
    while (n > 0)
    {
        r = r * 10 + n % 10;
        n /= 10;
    }
    return r;
}
int sumN(int n) // Hàm tính tổng các chữ số của n
{
    int s = 0;
    while (n > 0)
    {
        s += n % 10;
        n /= 10;
    }
    return s;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    int countPrime = 0, countReverse = 0, countPerfectSquare = 0, countSum = 0;
    for (auto i : a)
    {
        if (isPrime(i))
        {
            countPrime++;
        }
        if (reverseN(i) == i) // Nếu số đảo ngược của nó bằng chính nó thì nó là số đối xứng
        {
            countReverse++;
        }
        if (isPerfectSquare(i))
        {
            countPerfectSquare++;
        }
        if (isPrime(sumN(i))) // Nếu tổng các chữ số của n là số nguyên tố thì nó là số đặc biệt
        {
            countSum++;
        }
    }
    cout << countPrime << endl
         << countReverse << endl
         << countPerfectSquare << endl
         << countSum;
    return 0;
}
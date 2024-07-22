#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) // Hàm tính ước chung lớn nhất bằng đệ quy theo công thức Euclid
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
int main()
{
    int n;
    cin >> n;
    int x;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        res = gcd(res, x); // Bé tìm ước chung lớn nhất của các phần tử trong mảng a nha
        // Bé cũng có thể dùng hàm __gcd(a, b) có sẵn trong thư viện <algorithm> để tính ước chung lớn nhất nha
    }
    cout << res;
    return 0;
}
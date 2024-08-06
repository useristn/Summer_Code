#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, even, odd;
    even = odd = 0;
    while (cin >> n)
    {
        if (n % 2 == 0)
        {
            even++; // Đếm số lượng số chẵn
        }
        else
        {
            odd++; // Đếm số lượng số lẻ
        }
    }
    if (even > odd) // Nếu số lượng số chẵn lớn hơn số lượng số lẻ thì in ra CHAN
    {
        cout << "CHAN";
    }
    else if (odd > even) // Nếu số lượng số lẻ lớn hơn số lượng số chẵn thì in ra LE
    {
        cout << "LE";
    }
    else // Nếu số lượng số chẵn bằng số lượng số lẻ thì in ra CHANLE
    {
        cout << "CHANLE";
    }
    return 0;
}
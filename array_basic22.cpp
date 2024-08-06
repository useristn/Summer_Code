#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    bool check = true; // Bé tạo biến check để kiểm tra xem x có tồn tại trong mảng a không
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == x && check) // Bé thêm điều kiện check = true trong trường hợp có nhiều giá trị x trong mảng a nha
        {
            a.erase(a.begin() + i); // Xóa x khỏi mảng a
            i--, n--;               // Giảm i đi 1 đơn vị vì sau khi xóa x thì mảng a giảm đi 1 phần tử nên n cũng giảm đi 1
            check = false;          // Nếu x tồn tại trong mảng a thì check = false
        }
    }
    if (check) // Nếu x không tồn tại trong mảng a thì in ra NOT FOUND
    {
        cout << "NOT FOUND";
        return 0;
    }
    for (auto i : a)
    {
        cout << i << " "; // In ra mảng a sau khi xóa x
    }
    return 0;
}
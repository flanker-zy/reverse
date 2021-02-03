#include<iostream>
using namespace std;

int reverse(int x) {
    int ans = 0;
    while (x != 0)
    {
        int temp = x % 10;
        if (ans > 0 && (INT_MAX - temp) / 10 < ans) return 0;
        if (ans<0 && (INT_MIN - temp) / 10>ans) return 0;
        ans = ans * 10 + temp;
        x = (x - temp) / 10;
    }
    return ans;

}

int main()
{
    int test = -123;
    cout << "ԭ���֣�" << test << endl;
    cout << "��ת��" << reverse(test) << endl;
}
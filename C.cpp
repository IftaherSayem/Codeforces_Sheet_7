#include <iostream>
using namespace std;
void rec(int n)
{
    if (n==0)
    {
        return;
    }
    else
    {
        cout << n;
        if (n!=1)
        {
            cout << " ";
        }
        rec(n-1);
    }
}
int main()
{
    int n;
    cin >> n;
    rec(n);
}

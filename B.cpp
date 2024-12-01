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
        rec(n-1);
        cout << n << " " << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    rec(n);
}

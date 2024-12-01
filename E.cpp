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
        rec(n/2);
        cout << n%2;
    }
}
int main()
{
    int n;
    cin >> n;
    for (int i=1;i<=n;i++)
    {
        int g;
        cin >> g;
        rec(g);
        cout << endl;
    }
}


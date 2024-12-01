#include <iostream>
using namespace std;
void rec(int n)
{
    if (n<10)
    {
        cout << n << " ";
        return;
    }
    else
    {
        rec(n/10);
        cout << n%10 <<" ";
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


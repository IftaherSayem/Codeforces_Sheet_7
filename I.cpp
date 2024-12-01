/*
========================================
+          IFTAHER HOSSEN SAYEM        +
+            IIUC,Dept. of CSE         +
========================================
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define el "\n"
#define yes cout << "YES" << el;
#define no cout << "NO" << el;
#define FAST_IN_OUT ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
const int m=1e9 + 7;
void test()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
bool chk(int a)
{
    if(a==2 || a==3 || a==5) return true;
    for(int i=2; i*i<=a; i++)
    {
        if(a%i==0)
        {
            return false;
        }
    }
    return true;
}

ll power(ll x, ll y)
{
    ll val = 1;

    while (y > 0)
    {
        if (y % 2 != 0)
            val = val * x;
        y = y / 2;
        x = x * x;
    }
    return val;
}
int recfun(string c,int i)
{
    char s=tolower(c[i]);
    if(i<0) return 0;
    if(s=='a' || s=='e' || s=='i' || s=='o' || s=='u')
    {
       return 1+recfun(c,i-1);
    }
    else
    {
       return recfun(c,i-1);
    }
}
int main()
{
    //test();
    FAST_IN_OUT
    //ll n;
    //cin >> n;
    //while (n--)
    //{
    string a;
    getline(cin,a);
    int res=recfun(a,a.length()-1);
    cout << res << el;
    //}
}

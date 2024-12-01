/*
========================================
+          IFTAHER HOSSEN SAYEM        +
+            IIUC,Dept. of CSE         +
========================================
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void test()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
int finding(char ch)
{
    return ch-'A'+1;
}
int posi(int h)
{
    return h+'a'-1;
}
bool deco(pair <int,int>&a,pair<int,int>&b)
{
    return a.second>b.second;
}
void rec(int n,int co=1)
{
    //int co=1;
    if(co>n)
    {
        return;
    }
    /*
    *
   ***
  *****
 *******
    */
    for(int i=1;i<=n-co;i++)
    {
        cout << " ";
    }
    for (int i=1;i<=2*co-1;i++)
    {
        cout << "*";
    }
    cout << endl;
    //co++;
    rec(n,co+1);
}
int main()
{
    //test();
    ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
    //ll n;
    //cin >> n;
    //while(n--)
    //{
    ll a;
    cin >> a;
    rec(a);
    //}
}

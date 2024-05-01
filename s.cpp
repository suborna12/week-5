#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define nl cout << endl
#define tc    \
    ll t;     \
    cin >> t; \
    while (t--)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define pb push_back
#define all(x) x.begin(),x.end()
using namespace std;
void s(){
 ll n;
 cin>>n;
 ll m=n*(n-1)/2;
 ll a[m];
 for(ll i=0;i<m;i++) cin>>a[i];
sort(a,a+m);
 for(ll i=0;i<m;i+=--n) {
    cout<<a[i]<<" ";
 }
 cout<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t=1;
     cin>>t;
    while(t--)
    {
        s();
    }
}




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
 vector<ll>a(n);
 for(ll i=0;i<n;i++) cin>>a[i];
 ll r=0;
 for(ll i=0;i<n;i++){
        ll p=r+a[i];
    if(p<0) r=0;
    else r=p;
 }
 cout<<r<<endl;
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




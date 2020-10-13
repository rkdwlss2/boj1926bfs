////
////  baek1654.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/08.
////
//
//#include <iostream>
//#include <algorithm>
//#define ll long long
//using namespace std;
//const ll N=1000001;
//ll n,m;
//ll arr[N];
//bool possible(ll dist){
//    ll count=0;
//    for (ll i =0;i<n;i++){
//        count+=arr[i]/dist;
//    }
//    if (count>=m)
//        return true;
//    return false;
//}
//int main(void){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>m;
//    for (ll i = 0 ;i<n;i++)cin>>arr[i];
//    sort(arr,arr+n);
//    ll low =1;
//    ll high=arr[n-1];
//    while (low<=high){
//        ll mid=(low+high)/2;
//        if (possible(mid)){
//            low=mid+1;
//        }else{
//            high=mid-1;
//        }
//    }
//
//    cout<<low-1;
//    
//}
//

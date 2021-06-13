////
////  boj2166.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/12/08.
////
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n;
//    cin>>n;
//    vector<long long> a(n);
//    vector<long long> b(n);
//    for (int i = 0 ; i < n ; i++){
//        cin>>a[i]>>b[i];
//    }
//    a.push_back(a[0]);
//    b.push_back(b[0]);
//    long long ans=0;
//    for (int i = 0 ; i < n;i++){
//        ans+=a[i]*b[i+1];
//        ans-=a[i+1]*b[i];
//    }
//    if (ans<0)ans=-ans;
//    cout<<ans/2<<'.';
//    if (ans%2==0){
//        cout<<'0'<<'\n';
//    }else{
//        cout<<'5'<<'\n';
//    }
//}

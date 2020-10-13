////
////  soinsu.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/09.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//void solve(int n){
//    for (int i =2;n!=1;i++){
//        while(n%i==0){
//            cout<<i<<'\n';
//            n/=i;
//        }
//    }
//}
//vector<int> divisor(int n){
//    vector<int> ret;
//    for (int i=1;i<=n;i++){
//        if(n%i==0)ret.push_back(i);
//    }
//    for (int i =ret.size()-1;i>=0;i--){
//        if (ret[i]*ret[i]==n)continue;
//        ret.push_back(n/ret[i]);
//    }
//    return ret;
//}
//int gcd(int a,int b){
//    if(a==0) return b;
//    return gcd(b%a,a);
//}
//
//
//
//int main(void){
//    int n;
//    cin >>n;
//    solve(n);
//}

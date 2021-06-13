////
////  findisPrime.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/12/15.
////
//
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//bool isPrime(int n){
//    if (n<=1)return false;
//    if (n==2)return true;
//    if (n%2==0)return false;
//    int sqrtn=int(sqrt(n));
//    for (int div=3;div<=sqrtn;div+=2){
//        if(n%div==0){
//            return false;
//        }
//    }
//    return true;
//}
//
//
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int tc;
//    cin>>tc;
//    while (tc--){
//        int n;
//        cin>>n;
//        if (isPrime(n)){
//            cout<<"True"<<'\n';
//        }else{
//            cout<<"False"<<'\n';
//        }
//    }
//}

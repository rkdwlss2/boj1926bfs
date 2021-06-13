////
////  MathFactorSimple.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/12/15.
////
//
//#include <iostream>
//#include <vector>
//#include <cmath>
//using namespace std;
//
//vector<int> factorSimple(int n){
//    vector<int> ret;
//    int sqrtn=int(sqrt(n));
//    for (int div=2;div<=sqrtn;div++){
//        while(n%div==0){
//            n/=div;
//            ret.push_back(div);
//        }
//    }
//    if (n>1)ret.push_back(n);
//    return ret;
//}
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int tc;
//    cin>>tc;
//    while (tc--){
//        int n;
//        cin>>n;
//        vector<int> ret=factorSimple(n);
//        for (auto i : ret){
//            cout<<i<<' ';
//        }
//        cout<<'\n';
//    }
//}

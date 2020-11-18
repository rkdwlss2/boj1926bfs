////
////  test112.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/11/14.
////
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//#define ll long long int
//ll a[100001];
//ll solution(vector<int> &A) {
//    // write your code in C++14 (g++ 6.2.0)
//    ll ans=-1;
//    sort(A.begin(),A.end());
//    for (ll i = 0; i<A.size();i++){
//        a[i]=A[i];
//    }
//    do{
//        if (a[0]+a[1]>a[2]){
//            if (a[1]+a[2]>a[0]){
//                if (a[2]+a[0]>a[1]){
//                    if (ans<a[0]+a[1]+a[2]){
//                        ans=a[0]+a[1]+a[2];
//                    }
//                }
//            }
//        }
//    }while(next_permutation(a, a+A.size()));
//    ll ans2=ans;
//    return ans2;
//}
//
//int main(){
//    vector<int> A={5,10,18,7,8,3};
//    cout<<solution(A);
//}

////
////  boj2133.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/11/10.
////
//
//#include <iostream>
//using namespace std;
//int n;
//int d[31];
//
//int dp(int depth){
//    if (depth<0)return 0;
//    if (depth%2!=0){
//        return 0;
//    }
//    if (depth==0)return 1;
//    int& ret=d[depth];
//    if (depth==2)return ret=3;
//    if (ret>0)return ret;
//    ret+=3*dp(depth-2);
//    for (int i = depth-4;i>=0;i=i-2){
//        ret+=dp(i)*2;
//    }
//    return ret;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin >> n;
//    cout<<dp(n)<<'\n';
//}

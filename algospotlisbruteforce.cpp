////
////  algospotlisbruteforce.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/20.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int lis(const vector<int>& A){
//    if (A.size()==0)return 0;
//    int ret=0;
//    for (int i = 0 ; i<A.size();++i){
//        vector<int> B;
//        for (int j = i+1;j<A.size();++j){
//            if (A[i]<A[j]){
//                B.push_back(A[j]);
//            }
//        }
//        ret=max(ret,lis(B)+1);
//    }
//    return ret;
//}
//
//int main(){
//    vector<int> A={4,6,4,324,5,4};
//    cout<<lis(A);
//}

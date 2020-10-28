////
////  jongbitmask15puzzle.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/26.
////
//
//#include <iostream>
//using namespace std;
//
//typedef unsigned long long uint64;
//
//int get(uint64 mask,int index){
//    return (mask>>(index<<2))&15;
//}
//
//uint64 set(uint64 mask,int index,uint64 value){
//    return mask&~(15LL<<(index<<2))|(value<<(index<<2));
//}
//
//int main(){
//    uint64 test=17;
//    cout<<get(test,1)<<'\n';
//    uint64 input1=15;
//    test=set(test,0,input1);
//    cout<<test<<'\n';
//}

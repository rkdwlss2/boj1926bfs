////
////  boj9655-2.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/09/11.
////
//
//#include <iostream>
//
//using namespace std;
//int n;
//int cache[1001];
//int go(int index,int cnt){
//    if (index==0)return 1;
//    int& ret=cache[index];
//    if (ret!=-1)return ret;
//    if (index-1>=0){
//        if (go(index-1,cnt+1)==1)return 1;
//    }
//    if (index-3>=0){
//        if (go(index-3,cnt+1)==1)return 1;
//    }
//    return ret=0;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n;
//    if (n%2==0){
//        cout<<"CY"<<'\n';
//    }else{
//        cout<<"SK"<<'\n';
//    }
//}

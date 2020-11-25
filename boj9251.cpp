////
////  boj9251.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/11/22.
////
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//int cache[1001][1001];
//string W,S;
//
//int match(int w,int s){
//    if (w==W.size()||s==S.size()){
//        return 0;
//    }
//    int& ret=cache[w][s];
//    if(ret!=-1)return ret;
//    ret=0;
//    if (W[w]==S[s]){
//        ret=max(ret,match(w+1, s+1)+1);
//    }else{
//        ret=max(ret,match(w+1,s));
//        ret=max(ret,match(w,s+1));
//    }
//    return ret;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>W>>S;
//    for (int i = 0 ; i < 1001;i++){
//        fill(cache[i],cache[i]+1001,-1);
//    }
//    cout<<match(0,0)<<'\n';
//}

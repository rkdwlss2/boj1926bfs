////
////  stringmatch.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/27.
////
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//int match(string s,string p){
//    int n = s.size();int m=p.size();
//    for (int i =0;i<=n-m;i++){
//        bool ok=true;
//        for (int j=0;j<m;j++){
//            if (s[i+j]!=p[j]){
//                ok=false;
//            }
//        }
//        if (ok)return i;
//    }
//    return -1;
//}
//int main(){
//    cout<<match("aaab","ab")<<'\n';
//    cout<<match("Sdfb","cd")<<'\n';
//}

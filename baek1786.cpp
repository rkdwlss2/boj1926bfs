////
////  baek1786.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/09.
////
//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//vector<int> failure(string& S){
//    vector<int> f(S.size());
//    int j=0;
//    for (int i =1;i<S.size();i++){
//        while(j>0&&S[i]!=S[j])j=f[j-1];
//        if(S[i]==S[j])f[i]=++j;
//    }
//    return f;
//}
//int main(void){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    string T,P;
//    getline(cin,T);
//    getline(cin,P);
//    vector<int> f = failure(P);
//    int j=0;
//    vector<int> occur;
//    for (int i=0;i<T.size();i++){
//        while(j>0 and T[i]!=P[j])j=f[j-1];
//        if(T[i]==P[j])j++;
//        if(j==P.size()){
//            occur.push_back(i+2-P.size());
//            j=f[j-1];
//        }
//    }
//    cout<<occur.size()<<'\n';
//    for(auto e :occur)cout<<e<<' ';
//}

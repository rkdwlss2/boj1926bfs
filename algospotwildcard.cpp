////
////  algospotwildcard.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/19.
////
//
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int cache[101][101];
//int n;
//string W,S;
//bool matchMemoized1(int w,int s)
//{
//    int &ret=cache[w][s];
//    if (ret!=-1)return ret;
//    if (s<S.size()&&w<W.size()&&(W[w]=='?'||W[w]==S[s])){
//        return ret=matchMemoized1(w+1, s+1);
//    }
//    if (w==W.size())return ret=(s==S.size());
//    
//    if (W[w]=='*'){
//        if (matchMemoized1(w+1, s)||(s<S.size()&&matchMemoized1(w, s+1))){
//            return ret =1;
//        }
//    }
//    return ret=0;
//}
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int c;
//    cin>>c;
//    while (c--){
//        cin>>W;
//        vector<string> ret;
//        int cc;
//        cin >> cc;
//        while (cc--){
//            cin>>S;
//            for (int i =0 ;i<101;i++){
//                fill(cache[i],cache[i]+101,-1);
//            }
//            if (matchMemoized1(0,0)==true){
//                ret.push_back(S);
//            }
//        }
//        sort(ret.begin(),ret.end());
//        for (auto i : ret){
//            cout<<i<<'\n';
//        }
//    }
//}

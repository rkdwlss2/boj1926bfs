////
////  algospotNaming.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/30.
////
//#include<cstdio>
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//vector<int> getPatial(const string& H){
//    int m=H.size();
//    vector<int> pi(m,0);
//    int begin=1,matched=0;
//    while(begin+matched<m){
//        if (H[begin+matched]==H[matched]){
//            matched++;
//            pi[begin+matched-1]=matched;
//        }else{
//            if (matched==0){
//                begin++;
//            }else{
//                begin+=max(1,matched-pi[matched-1]);
//                matched=pi[matched-1];
//            }
//        }
//    }
//    return pi;
//}
//vector<int> getprefixSufix(const string& H){
//    vector<int> ret,pi=getPatial(H);
//    int k = H.size();
//    while (k>0){
//        ret.push_back(k);
//        k=pi[k-1];
//    }
//    return ret;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    string s;
//    while(cin>>s){
//        vector<int> ans=getprefixSufix(s);
//        reverse(ans.begin(),ans.end());
//        for(int i = 0; i < ans.size(); i++)
//            printf("%s%d", (i ? " " : ""), ans[i]);
//        printf("\n");
//    }
//}

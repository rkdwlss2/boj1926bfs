////
////  algospotkmpnew.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/30.
////
//
//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//vector<int> findfail(const string& H){
//    int m=H.size();
//    vector<int> pi(m,0);
//    int begin=1,matched=0;
//    while (begin+matched<m){
//        if (H[begin+matched]==H[matched]){
//            matched++;
//            pi[begin+matched-1]=matched;
//        }else{
//            if (matched==0){
//                ++begin;
//            }else{
//                begin+=matched-pi[matched-1];
//                matched=pi[matched-1];
//            }
//        }
//    }
//    return pi;
//}
//vector<int> kmpsearch2(const string& N,const string& H){
//    int n=N.size();
//    int m=H.size();
//    vector<int> ret,pi=findfail(H);
//    int matched=0;
//    for (int i = 0 ; i < n;++i){
//        while(matched>0&&N[i]!=H[matched]){
//            matched=pi[matched-1];
//        }
//        if (N[i]==H[matched]){
//            ++matched;
//            if (matched==m){
//                ret.push_back(i-m+1);
//                matched=pi[matched-1];
//            }
//        }
//    }
//    return ret;
//}

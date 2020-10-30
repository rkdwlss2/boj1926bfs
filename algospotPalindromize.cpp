////
////  algospotPalindromize.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/30.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<int> patialprefix(const string& H){
//    int m=H.size();
//    vector<int> pi(m,0);
//    int begin=1,matched=0;
//    while (begin+matched<m){
//        if (H[begin+matched]==H[matched]){
//            matched++;
//            pi[begin+matched-1]=matched;
//        }else{
//            if(matched==0){
//                ++begin;
//            }else{
//                begin+=matched-pi[matched-1];
//                matched=pi[matched-1];
//            }
//        }
//    }
//    return pi;
//}
//int kmpSearch(const string& N,const string& H){
//    int n=N.size(),m=H.size();
//    vector<int> pi=patialprefix(H);
//    int begin=0,matched=0;
//    while (begin<n){
//        if (matched<m&&N[begin+matched]==H[matched]){
//            matched++;
//            if (begin+matched==n){
//                return matched;
//            }
//        }else{
//            if(matched==0){
//                ++begin;
//            }else{
//                begin+=matched-pi[matched-1];
//                matched=pi[matched-1];
//            }
//        }
//    }
//    return 0;
//}
//int main(){
//    string s="anon";
//    string s1=s;
//    reverse(s1.begin(),s1.end());
//    cout<<kmpSearch(s, s1);
//}

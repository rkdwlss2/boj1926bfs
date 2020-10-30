////
////  algospotJaehasafe.cpp
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
//vector<int> failfunction(const string& H){
//    int m=H.size();
//    int begin=1,matched=0;
//    vector<int> pi(m,0);
//    while (begin+matched<m){
//        if (H[begin+matched]==H[matched]){
//            matched++;
//            pi[begin+matched-1]=matched;
//        }else{
//            if (matched==0){
//                begin++;
//            }else{
//                begin+=matched-pi[matched-1];
//                matched=pi[matched-1];
//            }
//        }
//    }
//    return pi;
//}
//
//vector<int> failfunction2(const string& H){
//    int m=H.size();
//    int matched=0;
//    vector<int> pi(m,0);
//    for (int i = 1 ; i < m;i++){
//        while (matched>0&&H[i]!=H[matched]){
//            matched=pi[matched-1];
//        }
//        if (H[i]==H[matched]){
//            pi[i]=matched+1;
//            matched++;
//        }
//    }
//    return pi;
//}
//
//vector<int> kmpsearch(const string& H,const string& N){
//    int m=H.size();
//    int n=N.size();
//    vector<int> ret,pi=failfunction(N);
//    int begin=0,matched=0;
//    while (begin+n<=m){
//        if (matched<n&&H[begin+matched]==N[matched]){
//            matched++;
//            if (matched==n){
//                ret.push_back(begin);
//            }
//        }else{
//            if (matched==0){
//                begin++;
//            }else{
//                begin+=matched-pi[matched-1];
//                matched=pi[matched-1];
//            }
//        }
//    }
//    return ret;
//}
//
//vector<int> kmpsearch2(const string& H,const string& N){
//    int n=H.size();
//    int m=N.size();
//    vector<int> ret,pi=failfunction2(N);
//    int matched=0;
//    for (int i = 0 ; i < n;i++){
//        while (matched>0&&H[i]!=N[matched]){
//            matched=pi[matched-1];
//        }
//        if (H[i]==N[matched]){
//            matched++;
//            if (matched==m){
//                ret.push_back(i-m+1);
//                matched=pi[matched-1];
//            }
//        }
//    }
//    return ret;
//}
//int shifts(const string& original,const string& target){
//    return kmpsearch(original+original, target)[0];
//}
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int cc;
//    cin>>cc;
//    while (cc--)
//    {
//        string s;
//        int c;
//        cin >> c;
//        cin>>s;
//        int ans=0;
//        bool ck=true;
//        while (c--){
//            string s1;
//            cin>>s1;
//            int clockwise;
//            if (ck==true){
//                clockwise=shifts(s1,s);
//                ck=false;
//            }else{
//                clockwise=shifts(s,s1);
//                ck=true;
//            }
//            ans+=clockwise;
//            s=s1;
//        }
//        cout<<ans<<'\n';
//    }
//}

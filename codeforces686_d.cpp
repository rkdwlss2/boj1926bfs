////
////  codeforces686_d.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/11/25.
////
//
//#include <iostream>
//#include <cmath>
//#include <vector>
//using namespace std;
//#define lli long long int
//
////lli N=10000000001;
////lli minFactor[100001];
////
////void eratosthenes2(){
////    minFactor[0]=minFactor[1]=-1;
////    for (lli i = 2;i<=N;++i)
////        minFactor[i]=i;
////    int sqrtn=int(sqrt(N));
////    for (int i = 2 ;i<=sqrtn;++i){
////        if (minFactor[i]==i){
////            for (int j = i*i;j<=N;j+=i){
////                if(minFactor[j]==j)
////                    minFactor[j]=i;
////            }
////        }
////    }
////}
////vector<lli> factor(lli n){
////    vector<lli> ret;
////    while(n>1){
////        ret.push_back(minFactor[n]);
////        n/=minFactor[n];
////    }
////    return ret;
////}
//vector<lli> factorSimple(lli n){
//    vector<lli> ret;
//    int sqrtn=int(sqrt(n));
//    for (int div=2;div<=sqrtn;++div){
//        while(n%div==0){
//            n/=div;
//            ret.push_back(div);
//        }
//    }
//    if (n>1)ret.push_back(n);
//    return ret;
//}
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int tc;
//    cin>>tc;
//    while(tc--){
//        lli n;
//        cin>>n;
//        vector<lli> a=factorSimple(n);
//        lli longestindex=-1;
//        lli max1=-1;
//        for (lli i=0;i<a.size();i++){
//            lli tmpi=0;
//            for (lli j = i ;j<a.size();j++){
//                if (a[i]==a[j]){
//                    tmpi++;
//                }
//            }
//            if (longestindex<tmpi){
//                longestindex=tmpi;
//                max1=a[i];
//            }
//        }
//        if (longestindex==1){
//            cout<<1<<'\n';
//            cout<<n<<'\n';
//        }else{
//            cout<<longestindex<<'\n';
//            for (lli i = 0 ; i <longestindex-1;i++){
//                cout<<max1<<' ';
//            }
//            lli an1=n;
//            for (lli i = 0 ; i <longestindex-1;i++){
//                an1=an1/max1;
//            }
//            cout<<an1<<'\n';
//        }
//    }
//    
//}

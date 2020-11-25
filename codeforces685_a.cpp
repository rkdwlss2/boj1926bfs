////
////  codeforces685_a.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/11/21.
////
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <bitset>
//using namespace std;
//#define lli long long int
//
//const lli MAX_N=1000000;
//
//lli tenConvertTwo(lli num){
//    lli result=0;
//    for (lli i=1;num>0;i*=10){
//        lli binary=num%2;
//        result+=binary*i;
//        num/=2;
//    }
//    return result;
//}
//
//vector<lli> factorSimple(lli n) {
//    vector<lli> ret;
//    int sqrtn = int(sqrt(n));
//    for(int div = 2; div <= sqrtn; ++div)
//        while(n % div == 0) {
//            n /= div;
//            ret.push_back(div);
//        }
//    if(n > 1) ret.push_back(n);
//    return ret;
//}
//lli d[100001];
//
//lli dp(lli n){
//    if (n<=1)return d[1]=0;
//    n=tenConvertTwo(n);
//    if (d[n]>0)return d[n];
//    d[n]=1000000001;
//    vector<lli> test=factorSimple(n);
//    if (test.size()!=1){
//        d[n]=min(d[n],dp(test[0])+1);
//    }
//    d[n]=min(d[n],dp(n-1)+1);
//    return d[n];
//}
//
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int tc;
//    cin>> tc;
//    while (tc--){
//        lli tmp;
//        cin>>tmp;
//        cout<<dp(tmp)<<'\n';
//        
//    }
//    
//     
//    
//}

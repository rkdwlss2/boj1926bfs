////
////  boj2565-2.cpp
////  boj10039
////
////  Created by 강명진 on 2021/03/07.
////
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int N,a,b,dp[100]={};
//    vector<pair<int,int>> v;
//    cin>>N;
//    for (int i = 0 ; i <N;i++){
//        cin>>a>>b;
//        v.push_back({a,b});
//    }
//    sort(v.begin(),v.end());
//    dp[0]=1;
//    for (int i=1;i<N;i++){
//        int m=0;
//        for (int j = 0 ;j<i;j++)
//            if(v[j].second<v[i].second)
//                m=max(m,dp[j]);
//        dp[i]=m+1;
//    }
//    int m=0;
//    for (int i = 0 ; i < N;i++)
//        m=max(dp[i],m);
//    cout<<N-m;
//}

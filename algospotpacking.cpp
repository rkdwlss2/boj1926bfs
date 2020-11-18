////
////  algospotpacking.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/11/17.
////
//
//#include <iostream>
//#include <string>
//#include<cstring>
//#include<cstdio>
//#include <vector>
//using namespace std;
//
//int n,w;
//string name[101];
//int weight[101];
//int cost[101];
//int cache[1001][101];
//vector<string> ans;
//vector<string> tmp;
//int dp(int capacity,int index){
//    if (index==n)return 0;
//    int &ret=cache[capacity][index];
//    if (ret!=-1)return ret;
//    ret=dp(capacity,index+1);
//    if (capacity>=weight[index]){
//        ret=max(ret,dp(capacity-weight[index],index+1)+cost[index]);
//    }
//    return ret;
//}
//void reconstruct(int capacity,int index){
//    if (index==n)return;
//    if (dp(capacity,index)==dp(capacity,index+1)){
//        reconstruct(capacity
//                    , index+1);
//    }else{
//        ans.push_back(name[index]);
//        reconstruct(capacity-weight[index], index+1);
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int tc;
//    cin>>tc;
//    while(tc--){
//        cin>>n>>w;
//        for (int i = 0 ; i <1001;i++){
//            fill(cache[i],cache[i]+101,-1);
//        }
////        memset(cache, -1, sizeof(cache));
//        ans=tmp;
//        for (int i = 0 ; i < n;i++){
//            cin>>name[i]>>weight[i]>>cost[i];
//        }
//        cout<<dp(w,0)<<' ';
//        reconstruct(w, 0);
//        cout<<ans.size()<<'\n';
//        for (auto value : ans){
//            cout<<value<<'\n';
//        }
//    }
//}

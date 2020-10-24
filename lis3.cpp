////
////  lis3.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/20.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int cache[501];
//int arr[501];
//int n;
//int choices[501];
//int dp(int start){
//    int& ret=cache[start+1];
//    if (ret!=-1)return ret;
//    ret=1;
//    int bestNext=-1;
//    for (int i = start+1;i<n;++i){
//        if (ret==-1||arr[start]<arr[i]){
//            int cand=dp(i)+1;
//            if (cand>ret){
//                ret=cand;
//                bestNext=i;
//            }
//        }
//    }
//    choices[start+1]=bestNext;
//    return ret;
//}
//void reconstruct(int start,vector<int>& seq){
//    if (start!=-1)seq.push_back(arr[start]);
//    int next=choices[start+1];
//    if (next!=-1)reconstruct(next, seq);
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int c;
//    cin >> c;
//    while (c--){
//        cin>>n;
//        for (int i = 0 ; i < n ;i++)cin>>arr[i];
//        fill(cache,cache+501,-1);
//        cout<<dp(-1)-1<<'\n';
//        vector<int> seq;
//        reconstruct(-1, seq);
//        for (int i = 0 ;i<seq.size();++i){
//            cout<<seq[i]<<" ";
//        }
//    }
//}
//

//
//  algospotlis.cpp
//  boj1926bfs
//
//  Created by 강명진 on 2020/10/20.
//

//#include <iostream>
//using namespace std;
//
//int arr[501];
//int n;
//int cache[501];
//
//int dp(int start){
//    int& ret=cache[start];
//    if (ret!=-1)return ret;
//    ret=1;
//    for (int i = start+1;i<n;++i){
//        if (arr[start]<arr[i]){
//            ret=max(ret,dp(i)+1);
//        }
//    }
//    return ret;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int c;
//    cin >> c;
//    while (c--){
//        cin >> n;
//        for (int i = 0 ; i < n;i++)cin>>arr[i];
//        fill(cache,cache+501,-1);
//        int max1=0;
//        for (int i = 0;i<n;i++){
//            max1=max(max1,dp(i));
//        }
//        cout<<max1<<'\n';
//    }
//}

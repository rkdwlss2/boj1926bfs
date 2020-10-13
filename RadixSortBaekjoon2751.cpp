////
////  RadixSortBaekjoon2751.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/04.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int a[1000006];
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    int n;
//    cin >> n;
//    for (int i = 0 ; i < n ; i++){
//        cin >> a[i];
//        a[i]+=1000000;
//    }
//    vector<int> bucket[65536];
//    for (int i = 0 ; i < n;i++)
//        bucket[a[i]&65535].push_back(a[i]);
//    int idx=0;
//    for (int i = 0 ; i < 65536;i++){
//        for (auto elem : bucket[i])a[idx++]=elem;
//        bucket[i].clear();
//    }
//    
//    for (int i = 0 ; i < n;i++)
//        bucket[a[i]>>16].push_back(a[i]);
//    idx=0;
//    for (int i = 0 ; i < 65536;i++){
//        for (auto elem:bucket[i])a[idx++]=elem;
//    }
//    for (int i = 0 ; i<n;i++)cout<<a[i]-1000000<<'\n';
//}

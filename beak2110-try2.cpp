////
////  beak2110-try2.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/08.
////
//
//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int MAX = 200000;
//
//int N,C;
//int house[MAX];
//
//bool possible(int dist){
//    int cnt =1;
//    int prev = house[0];
//    for (int i=1;i<N;i++){
//        if (house[i]-prev>=dist){
//            cnt++;
//            prev=house[i];
//        }
//    }
//    if (cnt>=C)
//        return true;
//    return false;
//}
//
//int main(void){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>N>>C;
//    for (int i=0;i<N;i++)
//        cin>>house[i];
//    sort(house,house+N);
//    int low=1,high=house[N-1]-house[0];
//    int result=0;
//    while (low<=high){
//        int mid=(low+high)/2;
//        if (possible(mid)){
//            result=max(result,mid);
//            low=mid+1;
//        }else{
//            high=mid-1;
//        }
//    }
//    cout<<result<<'\n';
//    return 0;
//}

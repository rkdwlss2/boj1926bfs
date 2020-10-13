////
////  baek2110_try3.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/08.
////
//
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//const int m=200000;
//
//int n,c;
//int arr[m];
//bool possible(int dist){
//    int cnt =1;
//    int prev=arr[0];
//    for (int i =1;i<m;i++){
//        if (arr[i]-prev>=dist){
//            cnt++;
//            prev=arr[i];
//        }
//    }
//    if (cnt>=c)
//        return true;
//    return false;
//    
//}
//int main(void){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin >> n>>c;
//    for (int i=0;i<n;i++)cin>>arr[i];
//    
//    sort(arr,arr+n);
//    int low =1;
//    int high=arr[n-1]-arr[0];
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
//}

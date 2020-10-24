////
////  codeforces677_c.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/22.
////
//
//#include <iostream>
//using namespace std;
//int arr[300001];
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int t;
//    cin>>t;
//    while(t--){
//        int n;
//        cin>>n;
//        for (int i =0;i<n;i++)cin>>arr[i];
//        int max1=arr[0];
//        int maxindex=0;
//        int count=1;
//        for (int i=1;i<n-1;i++){
//            if (max1==arr[i]){
//                count++;
//            }
//            if (max1<=arr[i]&&(arr[i]>arr[i-1]||arr[i+1]<arr[i])){
//                maxindex=i;
//                max1=arr[i];
//            }
//        }
//        if (arr[n-1]==max1){
//            count++;
//        }
//        if (arr[n-1]>arr[n-2]&&max1<=arr[n-1]){
//            maxindex=n-1;
//        }
//        if (count==n){
//            cout<<-1<<'\n';
//        }
//        else{
//            cout<<maxindex+1<<'\n';
//        }
//    }
//}

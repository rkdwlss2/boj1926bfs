////
////  cf-690-a.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/12/15.
////
//
//#include <iostream>
//using namespace std;
//int arr[301];
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int tc;
//    cin>>tc;
//    while (tc--){
//        int n;
//        cin>>n;
//        fill(arr,arr+301,0);
//        for (int i = 1 ; i<=n/2;i++){
//            cin>>arr[1+2*(i-1)];
//        }
//        if (n%2==1){
//            cin>>arr[1+2*(n/2)];
//        }
//        for (int i=n/2;i>=1;i--){
//            cin>>arr[2+2*(i-1)];
//        }
//        for (int i = 1;i<=n;i++){
//            cout<<arr[i]<<' ';
//        }
//        cout<<'\n';
//    }
//}

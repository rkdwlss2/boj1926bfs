//
//  lisexample.cpp
//  boj1926bfs
//
//  Created by 강명진 on 2020/10/06.
//
//
//#include <iostream>
//using namespace std;
//
//int main(void){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    int n;
//    cin>>n;
//    int arr[n];
//    for (int i =0;i<n;i++){
//        cin>>arr[i];
//    }
//    int mx=-0x7f7f7f7f;
//    for (int start = 0;start<n;start++){
//        for (int end=start;end<n;end++){
//            int sum=0;
//            for (int i = start;i<=end;i++)sum+=arr[i];
//            mx=max(mx,sum);
//        }
//    }
//    cout<<mx;
//}

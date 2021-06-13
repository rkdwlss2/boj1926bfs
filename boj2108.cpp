////
////  boj2108.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/02/06.
////
//
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int arr[500001];
//int san[8004];
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n;
//    cin>>n;
//    int sum=0;
//    for (int i = 0 ; i<n;i++){
//        cin>>arr[i];
//        san[arr[i]+4000]++;
//        sum+=arr[i];
//    }
//    sort(arr,arr+n);
//    double t=double(sum)/double(n);
//    if (sum>0){
//        t+=0.5;
//    }else{
//        t-=0.5;
//    }
//    cout<<int(t)<<'\n';
//    
//    if (n==1){
//        cout<<arr[0]<<'\n';
//    }
//    else if (n%2==1){
//        cout<<arr[n/2]<<'\n';
//    }else{
//        cout<<arr[n/2-1]<<'\n';
//    }
//    int Bin=-1;
//    int Big=-400000;
//    int BinCount=0;
//    for (int i = 0 ; i<8004;i++){
//        if (san[i]>Big){
//            Big=san[i];
//            Bin=i-4000;
//        }
//    }
//    for (int i = 0 ; i<8004;i++){
//        if (san[i]==Big){
//            BinCount++;
//        }
//        if (BinCount==2){
//            Bin=i-4000;
//            break;
//        }
//    }
//    cout<<Bin<<'\n';
//    cout<<arr[n-1]-arr[0]<<'\n';
//}

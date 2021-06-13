////
////  boj2437.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/01/05.
////
//
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//const int inf=1000000000;
//int arr[1001];
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n;
//    cin>>n;
//    for (int i=0;i<n;i++){
//        cin>>arr[i];
//    }
//    sort(arr,arr+n);
//    for (int i=1;i<inf;i++){
//        bool ok=false;
//        for (int index=0;index<n;index++){
//            bool ok2=false;
//            int k=i;
//            for (int j=index;j<n;j++){
//                k-=arr[j];
//                if (k==0){
//                    ok2=true;
//                    break;
//                }
//                if (k<0){
//                    if (index==n-1&&j==n-1){
//                        ok2=true;
//                        ok=true;
//                    }
//                    break;
//                }
//            }
//            if (ok2==true){
//                break;
//            }
//        }
//        if (ok==true){
//            cout<<i<<'\n';
//            break;
//        }
//    }
//    
//}

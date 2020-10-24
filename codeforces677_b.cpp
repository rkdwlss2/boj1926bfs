////
////  codeforces677_b.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/22.
////
//
//#include <iostream>
//using namespace std;
//
//int arr[51];
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int c;
//    cin>>c;
//    while(c--){
//        int n;
//        cin >>n;
//        for (int i =0;i<n;i++)cin>>arr[i];
//        int first=-1;
//        int last=-1;
//        int count=0;
//        for (int i =0;i<n;i++){
//            if (first==-1&&last==-1&&arr[i]==1){
//                first=i;
//                last=i;
//                count++;
//            }
//            else if (arr[i]==1){
//                last=i;
//                count++;
//            }
//        }
//        cout<<last-first+1-count<<'\n';
//    }
//    
//}

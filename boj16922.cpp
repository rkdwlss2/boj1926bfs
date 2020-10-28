////
////  boj16922.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/27.
////
//
//#include <iostream>
//using namespace std;
//
//int sum1[50*20+1];
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n;
//    cin>>n;
//    for (int i = 0 ;i<=n;i++){
//        for (int j=0;j<=n;j++){
//            for (int k = 0;k<=n;k++){
//                int l=n-i-j-k;
//                if (l>=0){
//                    int sum=i+5*j+10*k+50*l;
//                    sum1[sum]=true;
//                }
//            }
//        }
//    }
//    int ans=0;
//    for (int i = 0 ; i < 50*20+1;i++){
//        if (sum1[i]){
//            ans++;
//        }
//    }
//    cout<<ans<<'\n';
//}

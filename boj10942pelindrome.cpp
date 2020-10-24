////
////  boj10942pelindrome.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/20.
////
//
//#include <iostream>
//using namespace std;
//int n;
//int arr[2001];
//bool dp[2001][2001];
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n;
//    for (int i = 0 ;i<n;i++)cin>>arr[i];
//    int m;
//    cin >>m;
//    for (int i = 0 ; i<n;i++)dp[i][i]=true;
//    for (int i = 0 ;i<n-1;i++){
//        if (arr[i]==arr[i+1]){
//            dp[i][i+1]=true;
//        }
//    }
//    for (int i =3;i<=n;i++){
//        for (int j =0;j<=n-i;j++){
//            if (arr[j]==arr[j+i-1]&&dp[j+1][j+i-2]==true){
//                dp[j][j+i-1]=true;
//            }
//        }
//    }
//    while(m--){
//        int a,b;
//        cin>>a>>b;
//        if (dp[a-1][b-1]){
//            cout<<1<<'\n';
//        }
//        else{
//            cout<<0<<'\n';
//        }
//    }
//
//}

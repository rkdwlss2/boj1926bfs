////
////  boj18353.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/18.
////
//
//#include <iostream>
//
//using namespace std;
//
//int d[2001];
//int n;
//int a[2001];
////int dp(int index){
////    if (index==0)return 1;
////    if (d[index]!=0)return d[index];
////    int m1=1;
////    for (int i =0;i<index;i++){
////        if (a[i]>a[index])m1=max(m1,dp(i)+1);
////    }
////    return d[index]=m1;
////}
//
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin >> n;
//    for (int i =0 ; i <n;i++)cin>>a[i];
//    int answer =n;
//    for (int i = 1;i<n;i++){
//        for (int j = 0;j<i;j++){
//            if (a[j]>a[i])d[i]=max(d[i],d[j]+1);
//        }
//        answer=min(answer,n-d[i]-1);
//    }
//    if (answer==n)cout<<0<<'\n';
//    else cout<<answer<<'\n';
//}

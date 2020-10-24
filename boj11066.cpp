////
////  boj11066.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/21.
////
//
//#include <iostream>
//
//using namespace std;
//
//int d[501][501];
//int n;
//int arr[501];
//
//int dp(int x,int y){
//    if (x==y)return d[x][x]=0;
//    if (y-x==1)return d[x][y]=arr[x]+arr[y];
//    if (d[x][y]>0)return d[x][y];
//    int ans=-1;
//    int sum=0;
//    for (int i=x;i<=y;i++){
//        sum+=arr[i];
//    }
//    for (int i=x;i<y;i++){
//        int now=dp(x,i)+dp(i+1,y)+sum;
//        if (ans==-1||ans>now){
//            ans=now;
//        }
//    }
//    return d[x][y]=ans;
//}
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int c;
//    cin>>c;
//    while(c--){
//        cin>>n;
//        for (int i = 0 ; i<501;i++){
//            fill(d[i],d[i]+501,0);
//        }
//        for (int i =0 ;i<n;i++)cin>>arr[i];
//        cout <<dp(0,n-1)<<'\n';
//    }
//}

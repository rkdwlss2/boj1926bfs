////
////  boj2798.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/01/23.
////
//
//#include <iostream>
//using namespace std;
//int n,m;
//int arr[101];
//int ans=0;
//int sum=0;
//void go(int index,int count){
//    if (index>n)return;
//    if (count==3){
//        if (sum<=m&&sum>ans)ans=sum;
//        return;
//    }
//    count++;
//    sum+=arr[index];
//    go(index+1,count);
//    sum-=arr[index];
//    count--;
//    go(index+1,count);
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>m;
//    for (int i=0;i<n;i++){
//        cin>>arr[i];
//    }
//    go(0,0);
//    cout<<ans<<'\n';
//}

////
////  codeforces677_f.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/22.
////
//
//#include <iostream>
//using namespace std;
//
//int arr[71][71];
//int arr2[71];
//int d[71][38];
//int k;
//int dp(int index,int n,int chooses){
//    if (index==n)return 0;
//    if (n%2==1){
//        if (n/2+1==chooses){
//            return 0;
//        }
//    }
//    else{
//        if (n/2==chooses){
//            return 0;
//        }
//    }
//    if (d[index][chooses]!=-1)return d[index][chooses];
//    int m1=dp(index+1,n,chooses);
//    int m2=dp(index+1,n,chooses+1)+arr2[index];
//    return d[index][chooses]=max(m1,m2);
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n,m;
//    cin >> n>>m>>k;
//    for (int i = 0 ; i <n;i++){
//        for (int j =0;j<m;j++){
//            cin>>arr[i][j];
//        }
//    }
//    int sum=0;
//    for (int i = 0 ; i<m;i++){
//        for (int j = 0 ; j <n;j++){
//            arr2[j]=arr[j][i];
//        }
//        for (int k=0;k<71;k++){
//            fill(d[k],d[k]+38,-1);
//        }
//        dp(0,n,0);
//        int max1=0;
//        for (int k1=0;k1<71;k1++){
//            for (int u=0;u<38;u++){
//                if (d[k1][u]%k==0){
//                    max1=max(max1,d[k1][u]);
//                }
//            }
//        }
//        sum+=max1;
//    }
//    cout<<sum<<'\n';
//}

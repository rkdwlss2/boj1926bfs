////
////  baek12865.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/17.
////
//
//#include <iostream>
//using namespace std;
//int n,m;
//int bag[101];
//int ga[101];
//int d[101][100001];
//int dp(int index,int sum,int kg){
//    if (d[index][kg]>0) return d[index][kg];
//    if (index==n){
//        return 0;
//    }
//    int m1=0;
//    if (kg+bag[index]<=m){
//        m1=dp(index+1,sum+ga[index],kg+bag[index])+ga[index];
//    }
//    int m2=dp(index+1,sum,kg);
//    return d[index][kg]=max(m1,m2);
//}
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin >> n>> m;
//    for (int i = 0;i<n;i++){
//        cin>>bag[i]>>ga[i];
//    }
//    cout<<dp(0,0,0)<<'\n';
////    cout<<ans<<'\n';
//    
//}

////
////  beak11726.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/06.
////
//
//#include <iostream>
//using namespace std;
//
//int d[1001];
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n;
//    cin >>n;
//    d[1]=1;
//    d[2]=2;
//    for (int i = 3;i<=n;i++){
//        d[i]=d[i-2]+d[i-1];
//        d[i]%=10007;
//    }
//    cout<<d[n];
//}

////
////  boj1003.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/12/23.
////
//
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int cache[41][2];
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int tc;
//    cin>>tc;
//    while(tc--){
//        memset(cache,-1,sizeof(cache));
//        int n;
//        cin>>n;
//        cache[0][0]=1;
//        cache[0][1]=0;
//        cache[1][0]=0;
//        cache[1][1]=1;
//        for (int i =2;i<=n;i++){
//            cache[i][0]=cache[i-1][0]+cache[i-2][0];
//            cache[i][1]=cache[i-1][1]+cache[i-2][1];
//        }
//        cout<<cache[n][0]<<' '<<cache[n][1]<<'\n';
//    }
//}

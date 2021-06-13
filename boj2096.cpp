////
////  boj2096.cpp
////  boj10039
////
////  Created by 강명진 on 2021/03/18.
////
//
//#include <iostream>
//using namespace std;
//int n;
//int arr[100001][3];
//int cache[100001][3];
//int pr[3][3]={{1,1,0},{1,1,1},{0,1,1}};
//int go(int index,int prev){
//    if (index==-1)return 0;
//    int& ret=cache[index][prev];
//    if (ret!=-1)return ret;
//    ret=987654321;
//    for (int next = 0 ; next < 3;next++){
//        if (pr[prev][next]==0)continue;
//        ret=min(ret,go(index-1,next)+arr[index][prev]);
//    }
//    return ret;
//}
//int goBig(int index,int prev){
//    if (index==-1)return 0;
//    int& ret=cache[index][prev];
//    if (ret!=-1)return ret;
//    ret=-1;
//    for (int next = 0 ; next < 3;next++){
//        if (pr[prev][next]==0)continue;
//        ret=max(ret,goBig(index-1,next)+arr[index][prev]);
//    }
//    return ret;
//}
//
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n;
//    for (int i = 0 ; i < n ; i++){
//        for (int j = 0 ; j <3;j++){
//            cin>>arr[i][j];
//        }
//    }
//    for (int i = 0 ; i < 100001;i++){
//        fill(cache[i],cache[i]+3,-1);
//    }
//    cout<<max(goBig(n-1,0),max(goBig(n-1,1),goBig(n-1,2)))<<'\n';
//    for (int i = 0 ; i < 100001;i++){
//        fill(cache[i],cache[i]+3,-1);
//    }
//    cout<<min(go(n-1,0),min(go(n-1,1),go(n-1,2)))<<'\n';
//}

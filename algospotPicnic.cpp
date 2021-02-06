////
////  algospotPicnic.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/01/17.
////
//
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int n;
//bool areFriends[10][10];
//
//int countPairings(bool taken[10]){
//    int firstFree=-1;
//    for (int i=0;i<n;++i){
//        if (!taken[i]){
//            firstFree=i;
//            break;
//        }
//    }
//    if (firstFree==-1)return 1;
//    int ret=0;
//    for (int pairWith=firstFree+1;pairWith<n;++pairWith){
//        if (!taken[pairWith]&&areFriends[firstFree][pairWith]){
//            taken[firstFree]=taken[pairWith]=true;
//            ret+=countPairings(taken);
//            taken[firstFree]=taken[pairWith]=false;
//        }
//    }
//    return ret;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int tc;
//    cin>>tc;
//    while (tc--){
//        int m;
//        cin>>n>>m;
//        memset(areFriends,false,sizeof(areFriends));
//        for (int i =0;i<m;i++){
//            int a,b;
//            cin>>a>>b;
//            areFriends[a][b]=true;
//            areFriends[b][a]=true;
//        }
//        bool taken[10];
//        memset(taken,false,sizeof(taken));
//        cout<<countPairings(taken)<<'\n';
//    }
//}

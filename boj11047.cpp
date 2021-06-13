////
////  boj11047.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/01/01.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<int> coin;
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n,k;
//    cin>>n>>k;
//    for (int i=0;i<n;i++){
//        int tmp;
//        cin>>tmp;
//        coin.push_back(tmp);
//    }
//    int answer=0;
//    for (int i=n-1;i>=0;i--){
//        if (k-coin[i]>=0){
//            answer+=(k/coin[i]);
//            k-=coin[i]*(k/coin[i]);
//        }
//        if (k==0)break;
//    }
//    cout<<answer<<'\n';
//}

////
////  boj15652.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/01/19.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//int n,m;
//vector<int> answer;
//void go(int index,int prev){
//    if (index==m){
//        for (auto i:answer){
//            cout<<i<<' ';
//        }
//        cout<<'\n';
//        return;
//    }
//    for (int i = prev ; i <=n;i++){
//        answer.push_back(i);
//        go(index+1,i);
//        answer.pop_back();
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>m;
//    go(0,1);
//}

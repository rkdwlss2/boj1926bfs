////
////  boj10974.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/02/07.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//int n;
//bool check[9];
//vector<int> v;
//void go(int index){
//    if (index==n){
//        for (auto i : v){
//            cout<<i<<' ';
//        }
//        cout<<'\n';
//        return;
//    }
//    for (int i = 1 ; i <=n;i++){
//        if (check[i]==true)continue;
//        check[i]=true;
//        v.push_back(i);
//        go(index+1);
//        v.pop_back();
//        check[i]=false;
//    }
//}
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n;
//    go(0);
//}

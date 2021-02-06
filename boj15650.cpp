////
////  boj15650.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/01/16.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//void printPicked(vector<int>& picked){
//    for (int i=0;i<picked.size();i++){
//        cout<<picked[i]<<' ';
//    }
//    cout<<'\n';
//}
//
//void pick(int n,vector<int>& picked,int toPick){
//    if (toPick==0){
//        printPicked(picked);
//        return;
//    }
//    int smallest=picked.empty()?1:picked.back()+1;
//    for (int next=smallest;next<=n;++next){
//        picked.push_back(next);
//        pick(n,picked,toPick-1);
//        picked.pop_back();
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n,m;
//    cin>>n>>m;
//    vector<int> answer;
//    pick(n,answer,m);
//}

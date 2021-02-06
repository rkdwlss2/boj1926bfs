////
////  boj2309.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/01/23.
////
//
//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int nine[9];
//vector<int> ans;
//
//void select(int index,int count){
//    if(index>9)return;
//    if (index==9&&count==7){
//        int sum=0;
//        for (auto i : ans){
//            sum+=i;
//        }
//        if (sum==100){
//            sort(ans.begin(),ans.end());
//            for (auto i : ans){
//                cout<<i<<'\n';
//            }
//        }
//        return;
//    }
//    ans.push_back(nine[index]);
//    count++;
//    select(index+1,count);
//    count--;
//    ans.pop_back();
//    select(index+1,count);
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    for (int i =0;i<9;i++){
//        cin>>nine[i];
//    }
//    select(0,0);
//}

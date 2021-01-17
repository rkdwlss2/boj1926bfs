////
////  boj6603.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/01/13.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//int n;
//int arr[14];
//
//vector<int> ans;
//
//void pick(int index,int picked){
//    if (index==n+1)return;
//    if (picked==6){
//        for (auto i : ans){
//            cout<<i<<' ';
//        }
//        cout<<'\n';
//        return;
//    }
//    ans.push_back(arr[index]);
//    pick(index+1,picked+1);
//    ans.pop_back();
//    pick(index+1,picked);
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    
//    while (cin>>n){
//        if (n==0)break;
//        for (int i = 0 ; i <n;i++){
//            cin>>arr[i];
//        }
//        pick(0, 0);
//        cout<<'\n';
//    }
//}

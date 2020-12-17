////
////  cf-690-c.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/12/16.
////
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//vector<int> arr;
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int tc;
//    cin>>tc;
//    while (tc--){
//        int n;
//        cin>>n;
//        arr.clear();
//        if (n>45){
//            cout<<-1<<'\n';
//            continue;
//        }
//        for (int i = 9 ; i>=1;i--){
//            if (n>=i){
//                n=n-i;
//                arr.push_back(i);
//            }
//        }
//        reverse(arr.begin(), arr.end());
//        for (auto i : arr){
//            cout<<i;
//        }
//        cout<<'\n';
//    }
//}

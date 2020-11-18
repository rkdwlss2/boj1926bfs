////
////  boj1931.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/11/16.
////
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <queue>
//using namespace std;
//int n;
//vector<pair<int,int>> a;
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin >> n;
//    for (int i = 0 ; i < n;i++){
//        int x,y;
//        cin>>x>>y;
//        a.push_back({y,x});
//    }
//    sort(a.begin(),a.end());
//    reverse(a.begin(), a.end());
//    int cursor=-1;
//    int ans=0;
//    while (!a.empty()){
//        auto now = a.back();
//        a.pop_back();
//        int nowcur=now.second;
//        if (cursor<=nowcur){
//            cursor=now.first;
//            ans++;
//        }else{
//            continue;
//        }
//    }
//    cout<<ans<<'\n';
//}

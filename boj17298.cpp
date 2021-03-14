////
////  boj17298.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/03/10.
////
//
//#include <iostream>
//#include <stack>
//using namespace std;
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n;
//    cin>>n;
//    stack<int> s;
//    for (int i = 0 ; i<n;i++){
//        int tmp;
//        cin>>tmp;
//        s.push(tmp);
//    }
//    int big=-1;
//    int small=1000001;
//    int count=0;
//    while (!s.empty()){
//        auto now=s.top();s.pop();
//        if (now>big){
//            big=now;
//            while(count--){
//                cout<<big<<'\n';
//            }
//        }
//        if (now<small){
//            small=now;
//            
//        }
//    }
//}

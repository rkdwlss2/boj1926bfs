////
////  boj2493.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/01/12.
////
//
//#include <iostream>
//#include <stack>
//#include <vector>
//using namespace std;
//
//int arr[500001];
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n;
//    cin>>n;
//    stack<pair<int,int>> s;
//    for (int i=0;i<n;i++){
//        int tmp;
//        cin>>tmp;
//        s.push({i,tmp});
//    }
//    stack<pair<int,int>> s2;
//    vector<int> answer;
//    while(!s.empty()){
//        auto now=s.top();
//        s.pop();
//        int index=now.first;
//        int height=now.second;
//        while (!s2.empty()){
//            auto pre=s2.top();
//            int preIndex=pre.first;
//            int preHeight=pre.second;
//            s2.pop();
//            if (preHeight<=height){
//                arr[preIndex]=index+1;
//            }else{
//                s2.push(pre);
//                break;
//            }
//        }
//        s2.push({index,height});
//    }
//    for (int i=0;i<n;i++){
//        cout<<arr[i]<<' ';
//    }
//    cout<<'\n';
//}

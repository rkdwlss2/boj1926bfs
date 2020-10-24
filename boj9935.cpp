////
////  boj9935.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/22.
////
//
//#include <iostream>
//#include <stack>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    string s;
//    string p;
//    cin >> s;
//    cin>> p;
//    stack<pair<char,int>> stack1;
//    int n=s.size();
//    int psize=p.size();
//    int stacknum=0;
//    for (int i = 0 ; i < n;i++){
//        if (s[i]==p[stacknum]){
//            stacknum++;
//        }
//        else{
//            stacknum=0;
//            if (s[i]==p[stacknum]){
//                stacknum++;
//            }
//        }
//        stack1.push({s[i],stacknum});
//        if (stacknum==p.size()){
//            int tmp=p.size();
//            while(tmp--){
//                stack1.pop();
//            }
//            if (!stack1.empty()){
//                stacknum=stack1.top().second;
//            }
//            else{
//                stacknum=0;
//            }
//        }
//        
//    }
//    vector<char> v;
//    while(!stack1.empty()){
//        v.push_back(stack1.top().first);
//        stack1.pop();
//    }
//    reverse(v.begin(),v.end());
//    for (int i =0 ;i <v.size();i++){
//        cout<<v[i];
//    }
//    if (v.empty()){
//        cout<<"FRULA"<<'\n';
//    }
//}

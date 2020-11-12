////
////  uatest2.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/11/07.
////
//
//#include <string>
//#include <iostream>
//#include <vector>
//
//using namespace std;
//long long ten1(int n){
//    if (n==0)return 1;
//    return 10*ten1(n-1);
//}
//vector<long long> solution(string s, string op) {
//    vector<long long> answer;
//    int n=s.size();
//    int left=0;
//    int right=0;
//    for (auto i:s){
//        right+=i-'0';
//        right*=10;
//    }
//    right/=10;
//   
//    int m=n;
//    for (int i=0;i<n-1;i++){
//        left+=s[i]-'0';
//        right-=(s[i]-'0')*ten1(--m);
//        if (op=="+"){
//            answer.push_back(left+right);
//        }
//        else if(op=="-"){
//            answer.push_back(left-right);
//        }
//        else{
//            answer.push_back(left*right);
//        }
//        left*=10;
//    }
//    return answer;
//}
//int main(){
//    vector<long long> a=solution("1234","+");
//    for (auto i : a){
//        cout<<i<<' ';
//    }
//}

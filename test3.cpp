////
////  test3.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/24.
////
//
//#include <iostream>
//#include <stack>
//#include <string>
//using namespace std;
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n;
//    cin>>n;
//    while (n--){
//        stack<char> stack1;
//        stack<pair<int,int>> stack2;
//        string s;
//        cin>>s;
//        int num=0;
//        for (int i = 0 ;i<s.size();i++){
//            if (s[i]=='('){
//                stack2.push({i,0});
//            }
//            if (s[i]==')'){
//                if ('1'<=s[stack2.top().first-1]&&s[stack2.top().first-1]<='9'){
//                    int count=0;
//                    for (int i1 =stack2.top().first;i1<i;i1++ ){
//                        if ('1'<=s[i1]&&s[i1]<='9'){
//
//                        }
//                    }
//                }
//            }
//            stack1.push(s[i]);
//
//        }
//    }
//}

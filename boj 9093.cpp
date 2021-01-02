////
////  boj 9093.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/12/22.
////
//
//#include <iostream>
//#include <stack>
//using namespace std;
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int tc;
//    cin>>tc;
//    string str;
//    getline(cin,str);
//    while (tc--){
//        getline(cin,str);
//        stack<char> stack1;
//        string answer;
//        for (int i =0;i<str.size();i++){
//            if (str[i]!=' '){
//                stack1.push(str[i]);
//            }else{
//                while (!stack1.empty()){
//                    cout<<stack1.top();
//                    stack1.pop();
//                }
//                cout<<' ';
//            }
//        }
//        while (!stack1.empty()){
//            cout<<stack1.top();
//            stack1.pop();
//        }
//        cout<<'\n';
//    }
//}

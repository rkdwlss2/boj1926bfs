////
////  backjoonclose.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/09/29.
////
//
//#include <iostream>
//#include <stack>
//using namespace std;
//
//int main(void){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    while (true){
//        string s;
//        getline(cin,s);
//        if (s==".") break;
//        stack<char> Q;
//        bool ok = true;
//        for (char x : s){
//            if (x=='[' || x==']' || x=='(' || x==')'){
//                if (!Q.empty()){
//                    if ((Q.top()=='[' && x==']')||(Q.top()=='('&&x==')')){
//                        Q.pop();
//                    }
//                    else if ((Q.top()=='(' && x==']')||(Q.top()=='[' && x==')')){
//                        ok=false;
//                        cout<<"no"<<'\n';
//                        break;
//                    }
//                    else{
//                        Q.push(x);
//                    }
//                }
//                else{
//                    Q.push(x);
//                }
//            }
//        }
//        if (!Q.empty()&&ok==true){
//            cout<<"no"<<'\n';
//        }
//        else if (Q.empty()&&ok==true){
//            cout <<"yes"<<'\n';
//        }
//    }
//}

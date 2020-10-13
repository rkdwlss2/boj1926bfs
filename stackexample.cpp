////
////  stackexample.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/09/29.
////
//
//#include <iostream>
//#include <stack>
//#include <string>
//
//using namespace std;
//
//int main(void){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n;
//    cin >> n;
//    stack<int> S;
//    while (n--){
//        string s;
//        cin >> s;
//        if (s=="push"){
//            int tmp;
//            cin >> tmp;
//            S.push(tmp);
//        }
//        else if(s=="top"){
//            if (!S.empty()){
//                cout<<S.top()<<'\n';
//            }
//            else{
//                cout<<-1<<'\n';
//            }
//        }
//        else if (s=="size"){
//            cout<<S.size()<<'\n';
//        }
//        else if (s=="empty"){
//            cout<<S.empty()<<'\n';
//        }
//        else if (s=="pop"){
//            if (!S.empty()){
//                cout<<S.top()<<'\n';
//                S.pop();
//            }
//            else{
//                cout<<-1<<'\n';
//            }
//        }
//    }
//    
//}

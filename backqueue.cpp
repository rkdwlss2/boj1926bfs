////
////  backqueue.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/09/29.
////
//
//#include <iostream>
//#include <queue>
//#include <string>
//using namespace std;
//
//int main(void){
//    int n;
//    cin >> n;
//    queue<int> Q;
//    while (n--){
//        string s;
//        cin >> s;
//        if (s=="push"){
//            int tmp;
//            cin >> tmp;
//            Q.push(tmp);
//        }
//        else if (s=="front"){
//            if (!Q.empty()){
//                cout << Q.front()<<'\n';
//            }
//            else{
//                cout << -1 <<'\n';
//            }
//        }
//        else if (s=="back"){
//            if (!Q.empty()){
//                cout << Q.back()<<'\n';
//            }
//            else{
//                cout << -1 <<'\n';
//            }
//        }
//        else if (s=="size"){
//            cout << Q.size()<<'\n';
//        }
//        else if (s=="empty"){
//            cout << Q.empty()<<'\n';
//        }
//        else if (s=="pop"){
//            if (Q.empty()){
//                cout << -1 <<'\n';
//            }
//            else{
//                cout << Q.front()<<'\n';
//                Q.pop();
//            }
//        }
//        
//    }
//}

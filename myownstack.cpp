////
////  myownstack.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/09/29.
////
//
//#include <iostream>
//#include <string>
//using namespace std;
//const int mx=10009;
//int dat[mx];
//int POS=0;
//
//void push(int x){
//    dat[POS++]=x;
//}
//void pop(){
//    POS--;
//}
//int top(){
//    return dat[POS-1];
//}
//int main(void){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n =0;
//    cin >> n;
//    while (n--){
//        string s;
//        cin >> s;
//        if (s=="push"){
//            int tmp;
//            cin >> tmp;
//            push(tmp);
//        }
//        else if (s=="pop"){
//            if (POS==0){
//                cout<<-1<<'\n';
//            }
//            else{
//                cout<<top()<<'\n';
//                pop();
//            }
//        }
//        else if (s=="size"){
//            cout << POS<<'\n';
//        }
//        else if (s=="top"){
//            if (POS==0){
//                cout<<-1<<'\n';
//            }
//            else cout<<top()<<'\n';
//        }
//        else if (s=="empty"){
//            if (POS==0){
//                cout << 1<<'\n';
//            }
//            else cout<<0<<'\n';
//        }
//    }
//}

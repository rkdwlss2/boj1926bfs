////
////  boj10845-2.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/01/06.
////
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//int q[1000001];
//int first=0;
//int last=0;
//string a1[6]={"push","pop","size","empty","front","back"};
//
//void push(int a){
//    q[last++]=a;
//}
//bool empty(){
//    return first==last;
//}
//int pop(){
//    if (empty()==true)return -1;
//    return q[first++];
//}
//int front(){
//    if (empty()==true)return -1;
//    return q[first];
//}
//int size(){
//    return last-first-1;
//}
//int back(){
//    if (empty()==true)return -1;
//    return q[last-1];
//}
//
//
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int tc;
//    cin>>tc;
//    while (tc--){
//        string tmp;
//        cin>>tmp;
//        for (int i = 0 ;i<6;i++){
//            if (tmp==a1[i]){
//                if (i==0){
//                    int t;
//                    cin>>t;
//                    push(t);
//                }
//                if (i==1){
//                    cout<<pop()<<'\n';
//                }
//                if (i==2){
//                    cout<<size()<<'\n';
//                }
//                if (i==3){
//                    cout<<empty()<<'\n';
//                }
//                if (i==4){
//                    cout<<front()<<'\n';
//                }
//                if (i==5){
//                    cout<<back()<<'\n';
//                }
//            }
//        }
//    }
//}

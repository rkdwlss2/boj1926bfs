////
////  myowndequeue.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/09/29.
////
//
//#include <iostream>
//using namespace std;
//
//const int mx=100009;
//int arr[2*mx+1];
//int head=mx,tail=mx;
//
//void push_front(int x){
//    arr[--head]=x;
//}
//void push_back(int x){
//    arr[tail++]=x;
//}
//void pop_front(){
//    head++;
//}
//void pop_back(){
//    tail--;
//}
//int front(){
//    return arr[head];
//}
//int back(){
//    return arr[tail-1];
//}
//void test(){
//    push_back(30); // 30
//    cout << front() << '\n'; // 30
//    cout << back() << '\n'; // 30
//    push_front(25); // 25 30
//    push_back(12); // 25 30 12
//    cout << back() << '\n'; // 12
//    push_back(62); // 25 30 12 62
//    pop_front(); // 30 12 62
//    cout << front() << '\n'; // 30
//    pop_front(); // 12 62
//    cout << back() << '\n'; // 62
//}
//int main(void){
//    test();
//}

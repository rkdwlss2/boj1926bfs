////
////  queuetest.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/09/29.
////
//
//#include <iostream>
//
//using namespace std;
//
//const int mx=100009;
//int arr[mx];
//int head=0,tail=0;
//void push(int x){
//    arr[tail++]=x;
//}
//void pop(){
//    head++;
//}
//int front(){
//    return arr[head];
//}
//int back(){
//    return arr[tail-1];
//}
//void test(){
//    push(10); push(20); push(30);
//      cout << front() << '\n'; // 10
//      cout << back() << '\n'; // 30
//      pop(); pop();
//      push(15); push(25);
//      cout << front() << '\n'; // 30
//      cout << back() << '\n'; // 25
//}
//int main(void){
//    test();
//}

////
////  boj10866.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/12/26.
////
//
//#include <iostream>
//
//using namespace std;
//
//int arr[20006];
//int start=10002;
//int last=10002;
//
//void push_front(int input){
//    start--;
//    arr[start]=input;
//}
//
//void push_back(int input){
//    arr[last++]=input;
//}
//void pop_front(){
//    if (start==last){
//        cout<<-1<<'\n';
//    }else{
//        cout<<arr[start++]<<'\n';
//    }
//}
//void pop_back(){
//    if (start==last){
//        cout<<-1<<'\n';
//    }else{
//        cout<<arr[--last]<<'\n';
//    }
//}
//void size(){
//    cout<<last-start<<'\n';
//}
//void empty(){
//    if (last==start){
//        cout<<1<<'\n';
//    }else{
//        cout<<0<<'\n';
//    }
//}
//void front(){
//    if (last==start){
//        cout<<-1<<'\n';
//    }else{
//        cout<<arr[start]<<'\n';
//    }
//}
//void back(){
//    if(last==start){
//        cout<<-1<<'\n';
//    }else{
//        cout<<arr[last-1]<<'\n';
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n;
//    cin>>n;
//    while(n--){
//        string tmp;
//        cin>>tmp;
//        if (tmp=="push_back"){
//            int num;
//            cin>>num;
//            push_back(num);
//        }
//        else if (tmp=="push_front"){
//            int num;
//            cin>>num;
//            push_front(num);
//        }
//        else if (tmp=="front"){
//            front();
//        }else if(tmp=="back"){
//            back();
//        }else if(tmp=="size"){
//            size();
//        }else if (tmp=="empty"){
//            empty();
//        }else if (tmp=="pop_back"){
//            pop_back();
//        }else if (tmp=="pop_front"){
//            pop_front();
//        }
//    }
//}

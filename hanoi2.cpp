////
////  hanoi2.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/01.
////
//
//#include <iostream>
//using namespace std;
//
//void func(int a,int b, int n){
//    if (n==1){
//        cout << a<<' ' <<b<<'\n';
//        return;
//    }
//    func(a,6-a-b,n-1);
//    cout<<a<<' '<<b<<'\n';
//    func(6-a-b,b,n-1);
//}
//int main(void){
//    int k;
//    cin>>k;
//    cout<<(1<<k)-1<<'\n';
//    func(1,3,k);
//}

////
////  cmpSort.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/04.
////
//
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//bool cmp(int a, int b){
//    if (a%5!=b%5)return a%5 < b%5;
//    return a<b;
//}
//
//int main(){
//    int a[10]={0,1,2,3,4,5,6,7,8,9};
//    sort(a,a+10,cmp);
//    for (int i = 0 ; i<10;i++)
//        cout<<a[i]<<' ';
//    
//    sort(a,a+10,[](int a, int b){
//        if(a%5!=b%5) return a%5 < b%5;
//        return a<b;
//    });
//}

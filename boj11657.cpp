////
////  boj11657.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/11/01.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int number=4;
//int INF=100000000;
//int a[4][4]={
//    {0,5,INF,8},
//    {7,0,9,INF},
//    {2,INF,0,4},
//    {INF,INF,3,0}
//};
//void FloydWarshall(){
//    int graph[number][number];
//    for (int i = 0 ; i <number;i++){
//        for (int j = 0 ; j<number;j++){
//            graph[i][j]=a[i][j];
//        }
//    }
//    for (int k = 0 ; k<number;k++){
//        for (int i = 0 ; i <number;i++){
//            for (int j = 0 ; j <number;j++){
//                if (graph[i][j]>graph[i][k]+graph[k][j]){
//                    graph[i][j]=graph[i][k]+graph[k][j];
//                }
//            }
//        }
//    }
//    for (int i = 0 ; i < number;i++){
//        for (int j = 0 ; j <number;j++){
//            cout<<graph[i][j]<<' ';
//        }
//        cout<<'\n';
//    }
//}
//
//
//int main(){
//    FloydWarshall();
//}

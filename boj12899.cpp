////
////  boj12899.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/09/20.
////
//
//#include <iostream>
//using namespace std;
//
//int arr[2000001];
//int tree[4*2000001];
//int tree2[4*2000001];
//int init(int node,int left,int right){
//    if (left==right) return tree[node]=arr[left];
//    return tree[node]=init(2*node,left,(left+right)/2)+init(2*node,(left+right)/2+1,right);
//}
//
//void init2(int node,int left,int right){
//    if (left==right)return tree2[node]=1;
//    return tree2[node]=init2(2*node,left,(left+right)/2)+init2(2*node,(left+right)/2+1,right);
//}
//
//int getKth(int node,int left,int right,int begin,int end,int k,int Sum){
//    if (left==right)return tree[node];
//    
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n;
//    cin>>n;
//    for (int i =0 ; i <n;i++){
//        int a,b;
//        cin>>a>>b;
//        if (a==1){
//            
//        }else{
//            
//        }
//    }
//}

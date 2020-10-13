////
////  mergesort11728.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/04.
////
//
//#include <iostream>
//using namespace std;
//int n,m;
//int ar1[1000001];
//int ar2[1000001];
//void merge(int* arr1,int len1,int* arr2,int len2){
//    int arr[len1+len2];
//    int ind0=0;
//    int ind1=0;
//    int ind2=0;
//    while (ind1<len1&&ind2<len2){
//        if (ar1[ind1]<ar2[ind2]){
//            arr[ind0++]=ar1[ind1++];
//        }
//        else{
//            arr[ind0++]=ar2[ind2++];
//        }
//    }
//    while(ind1<len1){
//        arr[ind0++]=ar1[ind1++];
//    }
//    while(ind2<len2){
//        arr[ind0++]=ar2[ind2++];
//    }
//    for (int i = 0 ; i < len1+len2;i++){
//        cout<<arr[i]<<' ';
//    }
//}
//int main(void){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin >> n >> m;
//    for (int i = 0 ; i < n;i++){
//        cin>> ar1[i];
//    }
//    for (int i = 0 ; i < m ; i ++){
//        cin>>ar2[i];
//    }
//    merge(0,n,0,m);
//}

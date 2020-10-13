////
////  baek6549.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/12.
////
//
//#include <iostream>
//using namespace std;
//int n =10;
//int arr[10]={324,43,25,3,13,5,34,34,2,432};
//
//void quick_sort(int st,int en){
//    if (en-st<=1)return;
//    int l=st+1;
//    int r=en-1;
//    int pivot=arr[st];
//    while (1){
//        while(l<=r&&arr[l]<=pivot)l++;
//        while(l<=r&&arr[r]>=pivot)r--;
//        if (r<l)break;
//        swap(arr[l],arr[r]);
//    }
//    swap(arr[st],arr[r]);
//    quick_sort(st,r);
//    quick_sort(r+1,en);
//}
//int main(void){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    quick_sort(0,n);
//    for (int i=0;i<n;i++)cout<<arr[i]<<' ';
//}

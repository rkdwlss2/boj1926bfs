////
////  sadfsd.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/25.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//
//int check1(vector<int> arr,int x){
//    int sum=x;
//    int min=x;
//    for (int i= 0;i<arr.size();i++){
//        sum+=arr[i];
//        if (min>sum)min=sum;
//    }
//    
//    return min;
//}
//
//int minX(vector<int> arr) {
//    int s=0;
//    int e=10000;
//    int m;
//    while (s<=e){
//        m=(s+e)/2;
//        if (check1(arr,m)>1)e=m-1;
//        else if (check1(arr,m)==1)return m;
//        else s=m+1;
//    }
//    return m;
//}
//
//int main(){
//    vector<int> a={-2,3,1-5};
//    cout<<minX(a);
//}

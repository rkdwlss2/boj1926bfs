////
////  penametic.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/08.
////
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int n,m;
//int arr[200001];
//int main(void){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>m;
//    for (int i =0 ;i<n;i++){
//        cin>>arr[i];
//    }
//    sort(arr,arr+n);
//
//    int start;
//    int end;
//    int mid;
//    for (int i=0;i<(1<<n);i++){
//        vector<int> arr2;
//        for (int j =0 ;j<n;j++){
//            if ((i&(1<j))==1){
//                arr2.push_back(arr[j]);
//            }
//        }
//        if (arr2.size()!=m)continue;
//        n=arr2.size();
//        start=0;
//        end=n-1;
//        mid=(n-1)/2;
//        while (start<end){
//                int tmp=arr[mid+1]-arr[mid];
//                if (tmp>=m){
//                    end=mid-1;
//                }
//                else{
//                    start=mid+1;
//                }
//            mid=(start+end)/2;
//        }
//    }
//    
//    if (arr[start+1]-arr[start]>=m){
//        cout<<arr[start+1]-arr[start]-1;
//    }
//    else{
//        cout<<arr[start+2]-arr[start+1]-1;
//    }
//}

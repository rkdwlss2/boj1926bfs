////
////  boj10819.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/01/27.
////
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n;
//    cin>>n;
//    vector<int> arr;
//    for (int i = 0 ; i <n;i++){
//        int tmp;
//        cin>>tmp;
//        arr.push_back(tmp);
//    }
//    sort(arr.begin(),arr.end());
////    reverse(arr.begin(),arr.end());
//    int ans=0;
//    do{
//        int sum=0;
//        for (int i = 1 ; i<n;i++){
//            int left=arr[i]-arr[i-1];
//            int right=arr[i-1]-arr[i];
//            if (left<right)sum+=right;
//            else sum+=left;
//        }
//        if (ans<sum)ans=sum;
//    }while (next_permutation(arr.begin(), arr.end()));
//    cout<<ans<<'\n';
//    
//}

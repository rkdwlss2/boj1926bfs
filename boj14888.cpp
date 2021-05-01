////
////  boj14888.cpp
////  boj10039
////
////  Created by 강명진 on 2021/03/02.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//int n;
//int arr[12];
//int op[4];
//vector<int> a;
//int big=-123456789;
//int small=123456789;
//void go(int index){
//    if (index==n-1){
//        int sum=arr[0];
//        for (int i=1;i<n;i++){
//            if (a[i-1]==0){
//                sum+=arr[i];
//            }else if (a[i-1]==1){
//                sum-=arr[i];
//            }else if (a[i-1]==2){
//                sum*=arr[i];
//            }else{
//                sum/=arr[i];
//            }
//        }
//        if (big<sum)big=sum;
//        if (small>sum)small=sum;
//        return;
//    }
//    for (int i = 0 ; i<4;i++){
//        if (op[i]==0)continue;
//        a.push_back(i);
//        op[i]--;
//        go(index+1);
//        a.pop_back();
//        op[i]++;
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n;
//    for (int i = 0 ; i < n; i ++){
//        cin>>arr[i];
//    }
//    for (int i = 0 ; i<4;i++){
//        cin>>op[i];
//    }
//    go(0);
//    cout<<big<<'\n';
//    cout<<small<<'\n';
//}

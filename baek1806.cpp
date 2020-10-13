////
////  baek1806.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/08.
////
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int n,s;
//int main(){
//    cin>>n>>s;
//    vector<int> a(n);
//    for (int i = 0 ; i<n;i++)cin>>a[i];
//    int start=0;
//    int end=0;
//    int sum=a[0];
//    int ans=n+1;
//    while (start<=end&&end<n){
//        if (sum<s){
//            end++;
//            sum+=a[end];
//        }
//        else if (sum==s){
//            if (ans>end-start+1)ans=end-start+1;
//            end++;
//            sum+=a[end];
//        }
//        else if (sum>s){
//            if (ans>end-start+1)ans=end-start+1;
//            sum-=a[start];
//            start++;
//            if (start>end&&start<n){
//                end=start;
//                sum=a[start];
//            }
//        }
//    }
//    if (ans>n)ans=0;
//    cout<<ans;
//}

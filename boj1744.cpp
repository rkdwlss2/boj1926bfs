////
////  boj1744.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/11/20.
////
//
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int a[10001];
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n;
//    cin>>n;
//    int ans=-1;
//    bool zero=false;
//    bool one=false;
//    for (int i = 0 ; i < n;i++){
//        cin>>a[i];
//        if (ans<0&&a[i]>=0){
//            if (a[i]==0){
//                zero=true;
//            }
//            ans=i;
//        }
//        if (a[i]==1){
//            one=true;
//        }
//    }
//    sort(a,a+n);
//    int plussum=0;
//    if (zero==true){
//        for (int i = n-1;i>=(ans+2);i-=2){
//            plussum+=a[i]*a[i-1];
//        }
//        if ((n-1-ans)%2==1){
//            plussum+=a[ans+1];
//        }
//    }else{
//        for (int i = n-1;i>=ans+1;i-=2){
//            plussum+=a[i]*a[i-1];
//        }
//        if ((n-1-ans)%2==0){
//            plussum+=a[ans];
//        }
//    }
//    if (zero==true){
//        for (int i = 1 ; i<ans-1;i+=2){
//            plussum+=a[i]*a[i+1];
//        }
//        if ((ans)%2==1){
//            plussum+=a[ans-1];
//        }
//    }else{
//        for (int i = 0 ; i<ans-1;i+=2){
//            plussum+=a[i]*a[i+1];
//        }
//        if ((ans%2)==1){
//            plussum+=a[ans-1];
//        }
//    }
//    if (one==true){
//        if (zero==true){
//            if (n-1>(ans+1)){
//                plussum-=a[ans+1]*a[ans+2];
//                plussum+=a[ans+1]+a[ans+2];
//            }
//        }else{
//            if(n-1>ans){
//                plussum-=a[ans]*a[ans+1];
//                plussum+=a[ans]+a[ans+1];
//            }
//        }
//    }
//    cout<<plussum<<'\n';
//}

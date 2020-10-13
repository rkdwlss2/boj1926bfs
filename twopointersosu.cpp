////
////  twopointersosu.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/08.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//int main(){
//    int n;
//    cin >>n;
//    vector<bool> d(n+1);
//    vector<int> a;
//    for (int i=2;i<=n/2+1;i++){
//        if (d[i]==false){
//            int k=2*i;
//            while(k<=n){
//                d[k]=true;
//                k+=i;
//            }
//        }
//    }
//    for (int i =2; i<=n;i++){
//        if (d[i]==false){
//            a.push_back(i);
//        }
//    }
//    int m=a.size();
//    int start=0;
//    int end=0;
//    int sum=a.empty()?0:a[0];
//    int ans=0;
//    while (start<=end&&end<m){
//        if (sum<n){
//            end++;
//            sum+=a[end];
//        }
//        else if (sum==n){
//            ans++;
//            end++;
//            sum+=a[end];
//        }
//        else if (sum>n){
//            sum-=a[start];
//            start++;
//            if (start>end&&start<m){
//                end=start;
//                sum=a[start];
//            }
//        }
//    }
////    for (int i : a){
////        cout<<i<<' ';
////    }
//    cout<<ans;
//}

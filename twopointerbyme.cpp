////
////  twopointerbyme.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/08.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main(void){
//    int n,s;
//    cin >>n>>s;
//    vector<int> a(n);
//    for (int i=0;i<n;i++){
//        cin>>a[i];
//    }
//    int left=0;
//    int right=0;
//    int sum=a[0];
//    int ans=0;
//    while (left<=right&&right<n){
//        if (sum<s){
//            right+=1;
//            sum+=a[right];
//        }
//        else if (sum==s){
//            right+=1;
//            ans+=1;
//            sum+=a[right];
//        }
//        else if (sum >s){
//            sum-=a[left];
//            left+=1;
//            if (left>right&&left<n){
//                right=left;
//                sum=a[left];
//            }
//        }
//    }
//    cout<<ans<<'\n';
//}

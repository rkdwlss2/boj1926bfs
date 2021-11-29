////
////  boj2473.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/11/28.
////
//
//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <cmath>
//using namespace std;
//#define lli long long int
//
//lli n;
//lli arr[5001];
//lli sum=3000000001;
//lli answerArr[3];
//void twoPointer(){
//
//    for (lli i = 0 ; i<n-2;i++){
//        lli start=i+1;
//        lli last=n-1;
//        while(start<last){
//            lli tmpSum=(arr[start]+arr[last]+arr[i]);
//            if (abs(sum)>abs(tmpSum)){
//                sum=tmpSum;
//                answerArr[0]=arr[i];
//                answerArr[1]=arr[start];
//                answerArr[2]=arr[last];
//            }
//            if (tmpSum>=0)last--;
//            else start++;
//        }
//    }
//    sort(answerArr,answerArr+3);
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n;
//    for (int i = 0 ; i<n;i++)cin>>arr[i];
//    sort(arr,arr+n);
//    twoPointer();
//    cout<<answerArr[0]<<' '<<answerArr[1]<<' '<<answerArr[2]<<'\n';
//}

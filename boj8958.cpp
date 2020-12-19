////
////  boj8958.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/12/17.
////
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//int arr[81];
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int tc;
//    cin>>tc;
//    while (tc--){
//        string s;
//        cin>>s;
//        fill(arr,arr+81,0);
//        int now=0;
//        int n=s.size();
//        for (int i = 0 ; i <n;i++){
//            if (s[i]=='O'){
//                now++;
//                arr[i]=now;
//            }else{
//                now=0;
//            }
//        }
//        int sum=0;
//        for (int i = 0 ; i < n;i++){
//            sum+=arr[i];
//        }
//        cout<<sum<<'\n';
//    }
//}

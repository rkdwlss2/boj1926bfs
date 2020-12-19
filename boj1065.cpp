////
////  boj1065.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/12/19.
////
//
//#include <iostream>
//using namespace std;
//int arr[1001];
//bool check(int n){
//    if (n<10){
//        return true;
//    }
//    fill(arr,arr+1001,0);
//    int index=0;
//    while (n>0){
//        arr[index]=n%10;
//        n/=10;
//        index++;
//    }
//    int gap=arr[index-1]-arr[index-2];
//    for (int i = index-1 ; i >0;i--){
//        int j=i-1;
//        if (arr[i]-arr[j]!=gap){
//            return false;
//        }
//    }
//    return true;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n;
//    cin>>n;
//    int ans=0;
//    for (int i = 1 ; i <=n;i++){
//        if (check(i)==true){
//            ans++;
//        }
//    }
//    cout<<ans<<'\n';
//}

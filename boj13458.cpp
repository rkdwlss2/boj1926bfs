////
////  boj13458.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/03/17.
////
//
//#include <iostream>
//
//using namespace std;
//
//#define lli long long int
//lli n;
//lli arr[1000001];
//lli b,c;
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n;
//    for (lli i = 0 ; i < n ; i++){
//        cin>>arr[i];
//    }
//    cin>>b>>c;
//    lli answer=0;
//    for (lli i = 0 ; i < n ; i++){
//        if (arr[i]>b){
//            answer++;
//            arr[i]-=b;
//            if (arr[i]%c==0)answer+=(arr[i]/c);
//            else {
//                answer+=(arr[i]/c+1);
//            }
//        }else{
//            answer++;
//        }
//    }
//    cout<<answer<<'\n';
//}

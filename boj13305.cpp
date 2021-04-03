////
////  boj13305.cpp
////  boj10039
////
////  Created by 강명진 on 2021/03/28.
////
//
//#include <iostream>
//
//using namespace std;
//#define lli long long int
//lli dist[100001];
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    lli n;
//    cin>>n;
//    for (lli i =0 ; i <n-1;i++){
//        cin>>dist[i];
//    }
//    lli min;
//    cin>>min;
//    lli sum=min*dist[0];
//    for (int i = 0 ; i <n-2;i++){
//        lli tmp;
//        cin>>tmp;
//        if (min>tmp)min=tmp;
//        sum+=min*dist[i+1];
//    }
//    cout<<sum<<'\n';
//}
//

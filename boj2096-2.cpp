////
////  boj2096-2.cpp
////  boj10039
////
////  Created by 강명진 on 2021/03/18.
////
//
//#include <iostream>
//
//using namespace std;
//int cache[3];
//int cache2[3];
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n;
//    cin>>n;
//    int a,b,c;
//    cin>>a>>b>>c;
//    cache[0]=a;cache[1]=b;cache[2]=c;
//    cache2[0]=a;cache2[1]=b;cache2[2]=c;
//    for (int i = 0 ; i< n-1;i++){
//        cin>>a>>b>>c;
//        int a1=min(cache[0],cache[1])+a;
//        int a2=min(cache[0],min(cache[1],cache[2]))+b;
//        int a3=min(cache[1],cache[2])+c;
//        cache[0]=a1;cache[1]=a2;cache[2]=a3;
//        a1=max(cache2[0],cache2[1])+a;
//        a2=max(cache2[0],max(cache2[1],cache2[2]))+b;
//        a3=max(cache2[1],cache2[2])+c;
//        cache2[0]=a1;cache2[1]=a2;cache2[2]=a3;
//    }
//    cout<<max(cache2[0],max(cache2[1],cache2[2]))<<'\n';
//    cout<<min(cache[0],min(cache[1],cache[2]))<<'\n';
//}

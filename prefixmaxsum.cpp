//
//  prefixmaxsum.cpp
//  boj1926bfs
//
//  Created by 강명진 on 2020/10/06.
//

//#include <iostream>
//using namespace std;
//int d[100001];
//int a[100001];
//int main(void){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n;
//    cin >> n;
//    d[0]=0;
//    for (int i = 1 ; i<= n;i++){
//        cin>>a[i];
//        d[i]=d[i-1]+a[i];
//    }
//    int mx=-0x7f7f7f7f;
//    for (int start =1; start<=n;start++){
//        for (int end=start;end<=n;end++){
//            mx=max(mx,d[end]-d[start-1]);
//        }
//    }
//    cout<<mx;
//
//}

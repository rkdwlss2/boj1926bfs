////
////  codeforce686_a.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/11/24.
////
//
//#include <iostream>
//using namespace std;
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int tc;
//    cin>>tc;
//    while(tc--){
//        int n;
//        cin>>n;
//        if (n==2){
//            cout<<2<<' '<<1<<'\n';
//        }else if (n==3){
//            cout<<2<<' '<<3<<' '<<1<<'\n';
//        }else if (n==4){
//            cout<<2<<' '<<1<<' '<<4<<' '<<3<<'\n';
//        }
//        else{
//            int mid;
//            if (n%2==0){
//                mid=n/2-1;
//            }else{
//                mid=n/2;
//            }
//            for (int i = 2 ; i >= 1;i--){
//                cout<<i<<' ';
//            }
//            cout<<n<<' ';
//            for (int i=3;i<n;i++){
//                cout<<i<<' ';
//            }
//            cout<<'\n';
//        }
//    }
//}

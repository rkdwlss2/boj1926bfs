////
////  boj1193.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/01/26.
////
//
//#include <iostream>
//using namespace std;
//
//#define lli long long int
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    lli n;
//    cin>>n;
//    lli start=0;
//    lli end=1;
//    lli index=1;
//    while(true){
//        if (start<n&&n<=end){
//            if (index%2==0){
//            cout<<n-start<<'/'<<index+1-n+start<<'\n';
//            }
//            else{
//                cout<<index+1-n+start<<'/'<<n-start<<'\n';
//            }
//            break;
//        }
//        start=end;
//        index++;
//        end+=index;
//    }
//}

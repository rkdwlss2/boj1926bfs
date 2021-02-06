////
////  boj1436.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/02/05.
////
//
//#include <iostream>
//
//using namespace std;
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n;
//    cin>>n;
//    int num = 0 ;
//    int count=0;
//    int answer=-1;
//    while (true){
//        num++;
//        int six=0;
//        int tmp=num;
//        while (tmp>0){
//            int tmpNum=tmp%10;
//            tmp/=10;
//            if (tmpNum==6){
//                six++;
//            }else{
//                six=0;
//            }
//            if (six==3){
//                count++;
//            }
//        }
//        if (count==n){
//            answer=num;
//            break;
//        }
//    }
//    cout<<num<<'\n';
//}

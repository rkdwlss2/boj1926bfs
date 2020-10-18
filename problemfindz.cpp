////
////  problemfindz.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/18.
////
//
//#include <iostream>
//
//using namespace std;
//
//int n1,r,c;
//int N;
//int findz(int x,int y,int n){
//    int answer=0;
//    if (n==2){
//        if (x==1&&y==1){
//            return 3;
//        }
//        else if (x==1&&y==0){
//            return 2;
//        }
//        else if (x==0&&y==1){
//            return 1;
//        }
//        else {
//            return 0;
//        }
//    }
//    if (x>=n/2&&y>=n/2){
//        answer=3*(n/2)*(n/2)+findz(x-n/2,y-n/2,n/2);
//    }
//    else if(x>=n/2){
//        answer=2*(n/2)*(n/2)+findz(x-n/2,y,n/2);
//    }
//    else if (y>=n/2){
//        answer=(n/2)*(n/2)+findz(x,y-n/2,n/2);
//    }
//    else{
//        answer=findz(x,y,n/2);
//    }
//    return answer;
//}
//int main(void){
//    
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n1>>r>>c;
//    N=1;
//    for (int i=0;i<n1;i++){
//        N*=2;
//    }
//    cout<<findz(r, c, N);
//}

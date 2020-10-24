////
////  baek1347.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/20.
////
//
//#include <iostream>
//using namespace std;
//
//int arr[101][101];
//int n;
//int dx[4]={1,0,-1,0};
//int dy[4]={0,-1,0,1};
//int dir;
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n;
//    dir=0;
//    int minx=51;
//    int maxx=51;
//    int miny=51;
//    int maxy=51;
//    int x=51;
//    int y=51;
//    arr[x][y]=1;
//    while(n--){
//        char a;
//        int now;
//        cin>>a;
//        now =a-'A';
//        if (now==17){
//            dir=(dir+1)%4;
//        }
//        else if (now==11){
//            dir=(4+dir-1)%4;
//        }
//        else{
//            x=x+dx[dir];
//            y=y+dy[dir];
//            arr[x][y]=1;
//            minx=min(minx,x);
//            miny=min(miny,y);
//            maxx=max(maxx,x);
//            maxy=max(maxy,y);
//        }
//    }
//    for (int i=minx;i<=maxx;i++){
//        for (int j = miny;j<=maxy;j++){
//            if (arr[i][j]!=1){
//                cout<<'#';
//            }
//            else{
//                cout<<'.';
//            }
//        }
//        cout<<'\n';
//    }
//}

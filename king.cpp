////
////  king.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/13.
////
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//int chess[9][9];
//
//int kingx,kingy;
//int dolx,doly;
//int dx[8]={0,0,1,-1,-1,-1,1,1};
//int dy[8]={1,-1,0,0,1,-1,1,-1};
//int n;
//bool check(int x,int y){
//    if (x<0||x>=8||y<0||y>=8)return false;
//    return true;
//}
//void move(int num){
//    int nx=kingx+dx[num];
//    int ny=kingy+dy[num];
//    if (check(nx,ny)){
//        if (chess[nx][ny]==1){
//            int dox=dolx+dx[num];
//            int doy=doly+dy[num];
//            if (check(dox,doy)){
//                chess[dolx][doly]=0;
//                chess[dox][doy]=1;
//                chess[nx][ny]=2;
//                chess[kingx][kingy]=0;
//                kingx=nx;
//                kingy=ny;
//                dolx=dox;
//                doly=doy;
//            }
//        }
//        else{
//            chess[nx][ny]=2;
//            chess[kingx][kingy]=0;
//            kingx=nx;
//            kingy=ny;
//        }
//    }
//}
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    string king,dol;
//    cin>>king>>dol>>n;
//    kingy=king[0]-'A';
//    kingx=7-king[1]+'1';
//    doly=dol[0]-'A';
//    dolx=7-dol[1]+'1';
//    chess[kingx][kingy]=2;
//    chess[dolx][doly]=1;
//    while (n--){
//        string now;
//        cin>>now;
//        if (now=="R"){
//            move(0);
//        }
//        else if (now=="L"){
//            move(1);
//        }
//        else if (now=="B"){
//            move(2);
//        }
//        else if (now=="T"){
//            move(3);
//        }
//        else if (now=="RT"){
//            move(4);
//        }
//        else if (now=="LT"){
//            move(5);
//        }
//        else if (now=="RB"){
//            move(6);
//        }
//        else if (now=="LB"){
//            move(7);
//        }
//        
//    }
//    char kingansy='A'+kingy;
//    char kingansx='8'-kingx;
//    char dolansy='A'+doly;
//    char dolansx='8'-dolx;
//    cout<<kingansy<<kingansx<<'\n';
//    cout<<dolansy<<dolansx<<'\n';
//}

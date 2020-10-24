////
////  boj1331.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/20.
////
//
//#include <iostream>
//using namespace std;
//
//bool check[7][7];
//int dx[8]={2,1,-1,-2,-2,-1,1,2};
//int dy[8]={1,2,2,1,-1,-2,-2,-1};
//int startx;
//int starty;
//int main(){
//    int n = 36;
//    int x=-1,y=-1;
//    bool answer=true;
//    while (n--){
//        int nowx,nowy;
//        char a,b;
//        cin >>a>>b;
//        nowy=5-(a-'A');
//        nowx=5-(b-'1');
//        if (x==-1){
//            x=nowx;
//            y=nowy;
//            startx=x;
//            starty=y;
//            check[x][y]=true;
//        }
//        else{
//            int difx=nowx-x;
//            int dify=nowy-y;
//            bool ok = false;
//            for (int dir =0 ; dir<8;dir++){
//                if (difx==dx[dir]&&dify==dy[dir]){
//                    ok=true;
//                    break;
//                }
//            }
//            if (ok==true){
//                x=nowx;
//                y=nowy;
//                check[x][y]=true;
//            }
//            else{
//                answer=false;
//                break;
//            }
//        }
//    }
//    for (int i = 0 ; i < 6;i++){
//        for (int j = 0 ; j < 6;j++){
//            if (check[i][j]==false){
//                answer=false;
//            }
//        }
//    }
//    bool ck=false;
//    for (int dir = 0 ; dir<8;dir++){
//        if (startx==x+dx[dir]&&starty==y+dy[dir]){
//            ck=true;
//        }
//    }
//    if (ck==false){
//        answer=false;
//    }
//    if (answer==false){
//        cout<<"Invalid"<<'\n';
//    }
//    else{
//        cout<<"Valid"<<'\n';
//    }
//}

////
////  beakjoongam.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/03.
////
//
//#include <iostream>
//using namespace std;
//int n,m;
//int a[9][9];
//int cctv[9][3];
//int dx[4]={0,1,0,-1};
//int dy[4]={1,0,-1,0};
//int ty[5][4]={{0},{0,2},{0,1},{0,1,2},{0,1,2,3}};
//int typesize[5]={1,2,2,3,4};
//int an=-1;
//void rotate1(int x,int y,int t,int rotatenum,int reverse){
//    int arrowsize=typesize[t];
//    for (int i =0; i <arrowsize;i++){
//        int direction=(rotatenum+ty[t][i])%4;
//        int nx=x+dx[direction];
//        int ny=y+dy[direction];
//        while (true){
//            if (nx>=0&&nx<n&&ny>=0&&ny<m){
//                if (a[nx][ny]!=6){
//                    if (reverse==1){
//                        if (a[nx][ny]<=0)
//                            a[nx][ny]+=-1;
//                    }
//                    else{
//                        if (a[nx][ny]<0)
//                            a[nx][ny]+=1;
//                    }
//                }
//                else{
//                    break;
//                }
//                nx+=dx[direction];
//                ny+=dy[direction];
//            }
//            else{
//                break;
//            }
//        }
//    }
//}
//int count_array(){
//    int ans=0;
//    for (int i = 0 ; i < n ; i++){
//        for (int j = 0 ; j < m ;j++){
//            if (a[i][j]==0){
//                ans++;
//            }
//        }
//    }
//    return ans;
//}
//void go (int j){
//    if (j==8||cctv[j][2]<=0){
//        int tmp=count_array();
//        if (an==-1||an>tmp){
//            an=tmp;
//        }
//        return;
//    }
//    for (int i = 0 ; i < 4; i++){
//        rotate1(cctv[j][0],cctv[j][1],cctv[j][2]-1,i,1);
//        go(j+1);
//        rotate1(cctv[j][0],cctv[j][1],cctv[j][2]-1,i,-1);
//    }
//}
//
//
//int main(void){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin >> n >> m;
//    int cnt=0;
//    for (int i = 0 ; i < n ; i++){
//        for (int j = 0 ; j < m ; j++){
//            cin >>a[i][j];
//            if (a[i][j]>=1&&a[i][j]<=5){
//                cctv[cnt][0]=i;
//                cctv[cnt][1]=j;
//                cctv[cnt][2]=a[i][j];
//                cnt++;
//            }
//        }
//    }
//    go(0);
//    cout<<an;
//}

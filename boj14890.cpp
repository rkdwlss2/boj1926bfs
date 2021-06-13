////
////  boj14890.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/03/17.
////
//
//#include <iostream>
//
//using namespace std;
//
//int board[101][101];
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n,l;
//    cin>>n>>l;
//    for (int i = 0 ; i < n ; i ++){
//        for (int j = 0 ; j < n;j++){
//            cin>>board[i][j];
//        }
//    }
//    int answer=0;
//    for (int i = 0 ; i < n;i++){
//        bool ch=false;
//        int tmp=0;
//        bool visited[101];
//        bool num2=false;
//        for (int j = 0 ; j < n-1;j++){
//            int front=board[i][j];
//            int back=board[i][j+1];
//            if (front-back==1){
//                if (ch==true){
//                    num2=true;
//                    break;
//                }
//                ch=true;
//                tmp=l-1;
//            }else if (front-back==0){
//                if (ch==true){
//                    tmp--;
//                    if (tmp==0){
//                        ch=false;
//                    }
//                }
//            }else if (front-back>1){
//                num2=true;
//                break;
//            }
//            if (ch==true){
//                visited[j+1]=true;
//            }
//        }
//        if (num2)continue;
//        ch=false;
//        tmp=0;
//        for (int j = n-1 ; j >=1;j--){
//            int front=board[i][j];
//            int back=board[i][j-1];
//            if (front-back==1){
//                if (ch==true)break;
//                if (visited[j-1])break;
//                ch=true;
//                tmp=l-1;
//            }else if (front-back==0){
//                if (ch==true){
//                    if (visited[j-1])break;
//                    tmp--;
//                    if (tmp==0){
//                        ch=false;
//                    }
//                }
//            }else if (front-back>1){
//                break;
//            }
//            if (j==1&&tmp==0){
//                answer++;
//            }
//        }
//    }
//    
//    int newBoard[101][101];
//    for (int i = 0 ; i < n ; i++){
//        for (int j = 0 ; j<n;j++){
//            newBoard[j][n-i-1]=board[i][j];
//        }
//    }
//    for (int i = 0 ; i < n ; i++){
//        for (int j = 0 ; j < n;j++){
//            board[i][j]=newBoard[i][j];
//        }
//    }
//    
//    
//    for (int i = 0 ; i < n;i++){
//        bool ch=false;
//        int tmp=0;
//        bool visited[101];
//        bool num2=false;
//        for (int j = 0 ; j < n-1;j++){
//            int front=board[i][j];
//            int back=board[i][j+1];
//            if (front-back==1){
//                if (ch==true){
//                    num2=true;
//                    break;
//                }
//                ch=true;
//                tmp=l-1;
//            }else if (front-back==0){
//                if (ch==true){
//                    tmp--;
//                    if (tmp==0){
//                        ch=false;
//                    }
//                }
//            }else if (front-back>1){
//                num2=true;
//                break;
//            }
//            if (ch==true){
//                visited[j+1]=true;
//            }
//        }
//        if (num2)continue;
//        ch=false;
//        tmp=0;
//        for (int j = n-1 ; j >=1;j--){
//            int front=board[i][j];
//            int back=board[i][j-1];
//            if (front-back==1){
//                if (ch==true)break;
//                if (visited[j-1])break;
//                ch=true;
//                tmp=l-1;
//            }else if (front-back==0){
//                if (ch==true){
//                    if (visited[j-1])break;
//                    tmp--;
//                    if (tmp==0){
//                        ch=false;
//                    }
//                }
//            }else if (front-back>1){
//                
//                break;
//            }
//            if (j==1&&tmp==0){
//                answer++;
//            }
//        }
//    }
//    cout<<answer<<'\n';
//}

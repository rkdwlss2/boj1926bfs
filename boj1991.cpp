////
////  boj1991.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/01/06.
////
//
//#include <iostream>
//
//using namespace std;
//
//int tree[27][27];
//bool visited[27];
//void dfs1(int a){
//    int left=tree[a][0];
//    int right=tree[a][1];
//    visited[a]=true;
//    char a1=a+'A';
//    cout<<a1;
//    if (visited[left]==false){
//        dfs1(left);
//    }
//    if (visited[right]==false){
//        dfs1(right);
//    }
//    
//}
//void dfs2(int a){
//    int left=tree[a][0];
//    int right=tree[a][1];
//    visited[a]=true;
//    
//    if (visited[left]==false){
//        dfs2(left);
//    }
//    char a1=a+'A';
//    cout<<a1;
//    if (visited[right]==false){
//        dfs2(right);
//    }
//    
//}
//void dfs(int a){
//    int left=tree[a][0];
//    int right=tree[a][1];
//    visited[a]=true;
//    if (visited[left]==false){
//        dfs(left);
//    }
//    if (visited[right]==false){
//        dfs(right);
//    }
//    char a1=a+'A';
//    cout<<a1;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int tc;
//    cin>>tc;
//    while (tc--){
//        char a,b,c;
//        int a1,b1,c1;
//        cin>>a>>b>>c;
//        a1=a-'A';
//        b1=b-'A';
//        c1=c-'A';
//        if (b!='.'){
//        tree[a1][0]=b1;
//        }
//        if (c!='.'){
//        tree[a1][1]=c1;
//        }
//    }
//    dfs1(0);
//    fill(visited,visited+27,false);
//    cout<<'\n';
//    dfs2(0);
//    fill(visited,visited+27,false);
//    cout<<'\n';
//    dfs(0);
//    fill(visited,visited+27,false);
//    cout<<'\n';
//}

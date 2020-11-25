////
////  boj2150.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/11/24.
////
//
//#include <iostream>
//#include <stack>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//vector<vector<int>> adj;
//vector<int> sccId;
//vector<int> discovered;
//
//
//stack<int> st;
//int sccCounter,vertexCounter;
//
//int scc(int here){
//    int ret=discovered[here]=vertexCounter++;
//    st.push(here);
//    for (int i = 0 ;i<adj[here].size();i++){
//        int there = adj[here][i];
//        if (discovered[there]==-1)
//            ret=min(ret,scc(there));
//        else if (sccId[there]==-1)
//            ret=min(ret,discovered[there]);
//    }
//    if (ret==discovered[here]){
//        while(true){
//            int t=st.top();
//            st.pop();
//            sccId[t]=sccCounter;
//            if(t==here)break;
//        }
//        ++sccCounter;
//    }
//    return ret;
//}
//
//vector<int> tarjanSCC(){
//    sccId=discovered=vector<int>(adj.size(),-1);
//    sccCounter=vertexCounter=0;
//    for(int i = 0 ;i<adj.size();i++){
//        if (discovered[i]==-1)scc(i);
//    }
//    return sccId;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int v,e;
//    cin>>v>>e;
//    vector<vector<int>> a1(v+1,vector<int>(0,0));
//    adj=a1;
//    for (int i = 0 ; i < e;i++){
//        int a,b;
//        cin>>a>>b;
//        adj[a].push_back(b);
//    }
//    vector<int> ans=tarjanSCC();
//    int maxnum=0;
//    for (int i = 1 ; i < ans.size();i++){
//        int tmp=ans[i];
//        if (tmp!=0){
//            for (int j = 1 ; j < ans.size();j++){
//                if (ans[j]==tmp){
//                    a1[maxnum].push_back(j);
//                    ans[j]=0;
//                }
//            }
//            maxnum++;
//        }
//    }
//    cout<<maxnum<<'\n';
//    for (int i=0;i<maxnum;i++){
//        for (int j = 0 ; j<a1[i].size();j++){
//            cout<<a1[i][j]<<' ';
//        }
//        cout<<-1<<'\n';
//    }
//}

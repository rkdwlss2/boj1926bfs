////
////  algospotMeetingRoom.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/12/17.
////
//
//#include<algorithm>
//#include<stack>
//#include<cstdio>
//#include<iostream>ㅁ
//#include<string>
//#include<vector>
//using namespace std;
//
//vector<vector<int>> adj;
//
//bool disjoint(const pair<int,int>& a, const pair<int,int>& b){
//    return a.second<=b.first||b.second<=a.first;
//}
//
//void getGraph(const vector<pair<int,int>>& meetings){
//    int vars=meetings.size();
//    adj.clear(); adj.resize(vars*2);
//    for (int i=0;i<vars;i+=2){
//        int j=i+1;
//        adj[i*2+1].push_back(j*2);
//        adj[j*2+1].push_back(i*2);ㄴ
//        adj[i*2].push_back(j*2+1);
//        adj[j*2].push_back(i*2+1);
//    }
//    for (int i=0;i<vars;i++){
//        for (int j=0;j<i;j++){
//            if (!disjoint(meetings[i],meetings[j])){
//            
//                adj[i*2].push_back(j*2+1);
//                adj[j*2].push_back(i*2+1);
//                
//            }
//        }
//    }
//}
//
//vector<int> sccId,discovered,finished;
//
//stack<int> st;
//
//int sccCounter,vertexCounter;
//
//int scc(int here){
//    int ret=discovered[here]=vertexCounter++;
//    
//    st.push(here);
//    for (int i=0;i<adj[here].size();++i){
//        int there = adj[here][i];
//        if (discovered[there]==-1)
//            ret=min(ret,scc(there));
//        else if (discovered[there]<discovered[here]&&finished[there]!=1)
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
//    finished[here]=1;
//    return ret;
//}
//vector<int> tarjanSCC(){
//    sccId=discovered=finished=vector<int>(adj.size(),-1);
//    sccCounter=vertexCounter=0;
//    for (int i=0;i<adj.size();i++){
//        if (discovered[i]==-1)
//            scc(i);
//    }
//    return sccId;
//}
//
//vector<int> solve(const vector<pair<int,int>>& meetings){
//    int n=meetings.size();
//    getGraph(meetings);
//    vector<int> label=tarjanSCC();
//    
//    for (int i=0;i<2*n;i+=2)
//        if(label[i]==label[i+1])
//            return vector<int>();
//    vector<int> value(2*n,-1);
//    
//    vector<pair<int,int>> order;
//    for (int i=0;i<2*n;i++)
//        order.push_back(make_pair(-label[i],i));
//    sort(order.begin(),order.end());
//    
//    for (int i = 0 ; i<2*n;++i){
//        int vertex=order[i].second;
//        int variable=vertex/2,isTrue=(vertex%2==0);
//        if (value[variable]!=-1)continue;
//        value[variable]=!isTrue;
//    }
//    return value;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int cases;
//    cin>>cases;
//    for (int cc=0;cc<cases;++cc){
//        int n;
//        cin>>n;
//        vector<pair<int,int>> meetings(2*n);
//        for (int i=0;i<2*n;i++)
//            cin>>meetings[i].first>>meetings[i].second;
//        vector<int> value=solve(meetings);
//        if (value.empty()){
//            cout<<"IMPOSSIBLE"<<endl;
//        }else{
//            cout<<"POSSIBLE"<<endl;
//            for (int i =0;i<2*n;i+=2)
//                if(value[i]==1)
//                    cout<<meetings[i].first<<" "<<meetings[i].second<<endl;
//                else
//                    cout<<meetings[i+1].first<<" "<<meetings[i+1].second<<endl;
//        }
//    }
//    
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//#define lli long long int
//lli e;
//vector<vector<lli>> graph;
//vector<pair<lli,lli>> p;
//vector<pair<lli,lli>> ptmp;
//vector<bool> visited;
//void go(lli choice,lli now,lli pre){
//    if (choice==2){
//        p.push_back({pre,now});
//        return;
//    }
//    for (lli next=now+1;next<=e;next++){
//        go(choice+1,next,now);
//    }
//}
//int shortestNum(lli now,lli begin,lli end){
//    if (now==end)return 1;
//    int ret=0;
//    for (lli next=0;next<graph[now].size();next++){
//        if (visited[graph[now][next]]==true)continue;
//        visited[graph[now][next]]=true;
//        ret+=shortestNum(graph[now][next], begin, end);
//        visited[graph[now][next]]=false;
//    }
//    return ret;
//}
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    lli tc;
//    cin>> tc;
//    while(tc--){
//        cin>>e;
//        graph.clear();
//        for (lli i = 0 ; i<e+1;i++){
//            vector<lli> elem;
//            graph.push_back(elem);
//        }
//        for (lli i = 0 ; i < e;i++){
//            lli t1,t2;
//            cin>>t1>>t2;
//            graph[t1].push_back(t2);
//            graph[t2].push_back(t1);
//        }
//        p=ptmp;
//        for (lli i =1;i<e;i++){
//            go(1,i,-1);
//        }
//        visited.clear();
//        visited.resize(e+1,false);
//        lli ans=0;
//        for (auto i : p){
//            visited[i.first]=true;
//            ans+=shortestNum(i.first, i.first, i.second);
//            visited[i.first]=false;
//        }
//        cout<<ans<<'\n';
//    }
//}

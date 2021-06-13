//#include <iostream>
//#include <vector>
//using namespace std;
//
//const int inf = 1e9+7;
//vector<int> g[10010]; //그래프
//vector<int> tree[10010]; //dfs 트리
//int table[10010][2]; //dp테이블
//int chk[10010]; //포함 여부
//int maxi = -inf;
//int cost[10010]; //노드 가중치
//vector<int> ansarr; //정답
//
//void dfs(int now, int prv){
//    for(int i=0; i<g[now].size(); i++){
//        int nxt = g[now][i];
//        if(nxt != prv){
//            tree[now].push_back(nxt);
//            dfs(nxt, now);
//        }
//    }
//}
//
//int dp(int now, bool include){
//    int &res = table[now][include];
//    if(res != -1) return res;
//
//    if(include){ //포함하면
//        int ans = 0;
//        for(int i=0; i<tree[now].size(); i++){
//            int nxt = tree[now][i];
//            ans += dp(nxt, 0); //다음 노드 포함 안함
//        }
//        return res = ans + cost[now];
//    }else{
//        int ans = 0;
//        for(int i=0; i<tree[now].size(); i++){
//            int nxt = tree[now][i];
//            int t1 = dp(nxt, 0);
//            int t2 = dp(nxt, 1);
//            if(t1 < t2){ //포함한게 더 크면
//                chk[nxt] = 1;
//            }
//            else{
//                chk[nxt] = 0;
//            }
//            ans += max(t1, t2);
//        }
//        return res = ans;
//    }
//}
//
//void track(int now, int include){
//    if(include){
//        ansarr.push_back(now);
//        for(int i=0; i<tree[now].size(); i++){
//            int nxt = tree[now][i];
//            track(nxt, 0);
//        }
//    }
//    else{
//        for(int i=0; i<tree[now].size(); i++){
//            int nxt = tree[now][i];
//            track(nxt, chk[nxt]);
//        }
//    }
//}
//
//int main(){
//    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    int n; cin>>n;
//    for(int i=1; i<=n; i++){
//        cin>>cost[i];
//        table[i][0] = table[i][1] = -1;
//    }
//    for(int i=0; i<n-1; i++){
//        int a, b; cin>>a>>b;
//        g[a].push_back(b);
//        g[b].push_back(a);
//    }
//    dfs(1, 1);
//
//    int t1 = dp(1, 0);
//    int t2 = dp(1, 1);
//    if(t1 < t2) chk[1] = 1;
//    else chk[1] = 0;
//    int maxi = max(t1, t2);
//    cout << maxi << "\n";
//    track(1, chk[1]);
//    sort(ansarr.begin(), ansarr.end());
//    for(int i=0; i<ansarr.size(); i++) cout << ansarr[i] << " ";
//}

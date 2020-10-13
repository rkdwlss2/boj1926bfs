////
////  baek16909.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/13.
////
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <stack>
//
//using namespace std;
//long long calc(long long n){
//    return n*(n+1)/2;
//}
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(nullptr);
//    int n;
//    cin >> n;
//    vector<int> a(n+1);
//    vector<int> lg(n+1,0);
//    vector<int> ls(n+1,0);
//    vector<int> rg(n+1,n+1);
//    vector<int> rs(n+1,n+1);
//    
//    for (int i = 1;i<=n;i++){
//        cin>>a[i];
//    }
//    {
//        stack<pair<int,int>> sg,ss;
//        sg.push(make_pair(1,a[1]));
//        ss.push(make_pair(1,a[1]));
//        for (int i=2;i<=n;i++){
//            while (!sg.empty()&&a[i]>=sg.top().second){
//                rg[sg.top().first]=i;
//                sg.pop();
//            }
//            sg.push(make_pair(i,a[i]));
//            while (!ss.empty()&&a[i]<=ss.top().second){
//                rs[ss.top().first]=i;
//                ss.pop();
//            }
//            ss.push(make_pair(i,a[i]));
//        }
//    }
//    
//    {
//        stack<pair<int,int>> sg,ss;
//        sg.push(make_pair(n,a[n]));
//        ss.push(make_pair(n,a[n]));
//        for (int i=n-1;i>=1;i--){
//            while (!sg.empty()&&a[i]>sg.top().second){
//                lg[sg.top().first]=i;
//                sg.pop();
//            }
//            sg.push(make_pair(i,a[i]));
//            while (!ss.empty()&&a[i]<ss.top().second){
//                ls[ss.top().first]=i;
//                ss.pop();
//            }
//            ss.push(make_pair(i,a[i]));
//        }
//    }
//    
//    long long ans=0;
//    for (int i =1;i<=n;i++){
//        int l=min(i,lg[i]+1);
//        int r=max(i,rg[i]-1);
//        long long len=r-l+1;
//        ans+=(calc(len)-calc(i-l)-calc(r-i))*a[i];
//    }
//    for (int i=1;i<=n;i++){
//        int l=min(i,ls[i]+1);
//        int r=max(i,rs[i]-1);
//        long long len=r-l+1;
//        ans-=(calc(len)-calc(i-l)-calc(r-i))*a[i];
//    }
//    cout<<ans<<'\n';
//    
//}

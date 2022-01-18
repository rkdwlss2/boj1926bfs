//#include<cstdio>
//#include<algorithm>
//#include<queue>
//using namespace std;
//
//#define mxn 200000
//pair<int,int> a[mxn];
//
//int main(){
//    int n, ans=0;
//    priority_queue<int> q;
//    scanf("%d",&n);
//    for( int i=0; i<n; i++ ) scanf("%d%d",&a[i].first,&a[i].second);
//    sort(a,a+n);
//    for( int i=n, j=n-1; i; i-- ){
//        while( j>=0 && a[j].first >= i ) q.push(a[j--].second);
//        if( !q.empty() ){
//            ans += q.top();
//            q.pop();
//        }
//    }
//    printf("%d",ans);
//    return 0;
//}

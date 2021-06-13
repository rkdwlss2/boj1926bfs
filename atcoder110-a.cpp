//#include <iostream>
//#include <vector>
//#include <cstring>
//#include <cmath>
//using namespace std;
//#define lli long long int
//int d[31];
//int ansd[31];
//vector<lli> factorSimple(lli n){
//    vector<lli> ret;
//    int sqrtn=int(sqrt(n));
//    for (int div=2;div<=sqrtn;++div){
//        while(n%div==0){
//            n/=div;
//            ret.push_back(div);
//        }
//    }
//    if (n>1)ret.push_back(n);
//    return ret;
//}
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    lli n;
//    cin>>n;
//    lli answer=1;
//    for (lli i=2;i<=n;i++){
//        vector<lli> a = factorSimple(i);
//        for (auto j:a){
//            d[j]++;
//        }
//        for (int i1=0;i1<31;i1++){
//            if (ansd[i1]<d[i1]){
//                ansd[i1]=d[i1];
//            }
//        }
//        memset(d,0,sizeof(d));
//    }
//    for (int i=0;i<31;i++){
//        if (ansd[i]>=1){
//            while (ansd[i]--){
//                answer*=i;
//            }
//        }
//    }
//    cout<<answer+1<<'\n';
//}

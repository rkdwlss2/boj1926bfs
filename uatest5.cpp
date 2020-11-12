//#include <iostream>
//#include <string>
//#include <vector>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//vector<int> getPartialMatchNaive(const string& N){
//    int m=N.size();
//    vector<int> pi(m,0);
//    for (int begin=1;begin<m;begin++){
//        for (int i = 0 ;i+begin<m;i++){
//            if (N[begin+i]!=N[i])break;
//            pi[begin+i]=max(pi[begin+i],i+1);
//        }
//    }
//    return pi;
//}
//
//vector<int> getPartialMatch(const string& N){
//    int m=N.size();
//    vector<int> pi(m,0);
//    int begin=1,matched=0;
//    while(begin+matched<m){
//        if (N[begin+matched]==N[matched]){
//            ++matched;
//            pi[begin+matched-1]=matched;
//        }else{
//            if (matched==0){
//                begin++;
//            }
//            else{
//                begin+=matched-pi[matched-1];
//                matched=pi[matched-1];
//            }
//        }
//    }
//    return pi;
//}
//
//vector<int> kmpSearch(const string& H,const string& N){
//    int n=H.size();int m=N.size();
//    vector<int> ret;
//    vector<int> pi =getPartialMatch(N);
//    int begin=0,matched=0;
//    while(begin<=n-m){
//        if (matched<m && H[begin+matched]==N[matched]){
//            ++matched;
//            if (matched==m)ret.push_back(begin);
//        }
//        else{
//            if (matched==0)
//                ++begin;
//            else{
//                begin+=matched-pi[matched-1];
//                matched =pi[matched-1];
//            }
//        }
//    }
//    return ret;
//}
//string solution(string penter, string pexit, string pescape, string data) {
//    string answer = "";
//    int n=penter.size();
//    vector<int> real;
//    vector<int> a1=kmpSearch(data, penter);
//    for (auto i : a1){
//        if (i%n==0){
//            real.push_back(i);
//        }
//    }
//    vector<int> a2=kmpSearch(data, pexit);
//    for (auto i : a2){
//        if (i%n==0){
//            real.push_back(i);
//        }
//    }
//    vector<int> a3=kmpSearch(data, pescape);
//    for (auto i : a3){
//        if (i%n==0){
//            real.push_back(i);
//        }
//    }
//    sort(real.begin(),real.end());
//    reverse(real.begin(), real.end());
//    answer+=penter;
//    for (int i = 0 ; i <data.size();i++){
//        if (real.back()==i){
//            answer+=pescape;
//            real.pop_back();
//        }
//        answer+=data[i];
//    }
//    answer+=pexit;
//    return answer;
//}
//
//int main(){
//    string penter="10";
//    string pexit="11";
//    string pescape="00";
//    string data="00011011";
//    cout<<solution(penter, pexit, pescape,data);
//}

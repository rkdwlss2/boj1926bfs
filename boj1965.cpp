//
//#include <stdio.h>
//int a[1001],lis[1001];
//int main(){
//    int N, max=0;
//    scanf("%d",&N);
//    for(int i=0;i<N;i++)
//        scanf("%d",&a[i]);
//    
//    for(int i=0; i<N; i++){
//        lis[i] = 1;
//        for(int j=0; j<i; j++){
//            if(a[j] < a[i] && lis[i] < lis[j]+1){
//                lis[i]=lis[j]+1;
//            }
//        }
//        if(max < lis[i]) max=lis[i];
//    }
//    printf("%d\n",max);
//}

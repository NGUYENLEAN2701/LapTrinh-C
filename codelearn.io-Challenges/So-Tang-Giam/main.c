#include <stdio.h>


int findNumber(int n);
int main()
{
    int n=12000901;
    int N=findNumber(n);
    printf("%d",N);
    return 0;
}
int findNumber(int n)
{
        int N[10];
        int i=9;
        while(n>0){
            N[i]=n%10;
            n/=10;
            i--;
        }
        int k=0;
        int sumg=0;
        int sum=N[i+1];
        for (int j = i+2;j<10;j++){
            if(k==0){
                if(N[j]>N[j-1]) k=j;
                else if (N[j]<N[j-1]){
                    k=-j;
                    sumg=sum;
                }
                sum=sum*10+N[j];
            }else if (k<0){
                if (N[j]<=N[j-1]){
                       if(N[j]<N[j-1]){
                            k=-j;
                            sumg=sum;
                        }
                        sum = sum*10+N[j];
                       if(i==9) return sum;
                }
                else if (N[j]>N[j-1]){
                    N[-k]=N[-k]+1;
                    sumg=sumg*10+N[-k];
                    for(int i = (-k)+1;i<10;i++){
                        N[i]=0;
                        sumg=sumg*10+N[i];
                    }
                    return sumg;
                }
            }else{
                    if (N[j]<N[j-1]){
                    for(int i = j;i<10;i++){
                       N[i]=N[j-1];
                       sum=sum*10+N[i];
                    }
                    return sum;
                }
                sum=sum*10+N[j];
                if(i==9) return sum;
            }
            if(i==9) return sum;
        }
        return sum;
}

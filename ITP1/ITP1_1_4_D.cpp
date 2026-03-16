#include<stdio.h>

int main(){
  int n;

  long long min=10000000000LL;
  long long max=-10000000000LL;
  long long sum=0;  
  
  scanf("%d",&n);

  while(n>0){

    long long a;

    scanf("%lld",&a);
    
    sum=a+sum;

    if(max<a){
      max=a;
    }

    if(min>a){
      min=a;
    }
    
    n=n-1;    
  }

  printf("%lld %lld %lld\n",min,max,sum);

  return 0;
    
}

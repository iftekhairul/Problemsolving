#include<stdio.h>

long long H(int n){
long long i, res = 0,l;
l=sqrt(n);
if(res>=0){
for(  i = 1; i <= l; i=i+1 ){
res = (res + n/i);
}
}

return ((2*res)-(l*l));

}


int main()
{
  long long n,j,m;
  scanf("%lld",&m);
  for(j=0;j<m;j++){
  scanf("%lld",&n);
 long long z= H(n);
  printf("%lld\n",z);
  }
return 0;
}

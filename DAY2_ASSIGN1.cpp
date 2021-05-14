#include <iostream>
//SUM OF PRIMES
using namespace std;
long long int N=1000001;
long long int sieve[1000001];
long long int prefix[1000001];
void gen_sieve(){
	for(int i=0;i<N;i++) sieve[i]=1;
	sieve[0]=sieve[1]=0;prefix[0]=prefix[1]=0;
	for(int i=2;i*i<N;i++){
		if(sieve[i]==1){
			for(int j=i*i;j<=N;j+=i){
				sieve[j]=0;
			}
			}
		}
	for(int i=0;i<N;i++) prefix[i]=0;
	for(int i=2;i<N;i++){
		if(sieve[i]==1)
		   prefix[i]=i;
	}
	for(int i=0;i<N;i++){
		prefix[i]=prefix[i-1]+prefix[i];
	//	cout<<prefix[i]<<" ";
	}
	
}
int main()
{
   	gen_sieve();
     int Q,L,R;
	 cin>>Q;
	 while(Q--)
	 {
	 	cin>>L;
	 	cin>>R;
	 	cout<<prefix[R]-prefix[L-1];
			 }		

    return 0;
}


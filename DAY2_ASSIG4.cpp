#include <iostream>
//Ashu and Prime Factors
using namespace std;
long long int N=1000001;
long long int seive[1000001];
long long int seive_count[1000001];
void gen_modifiedsieve()
{
    seive[0]=seive[1]=1;
    for(int i=2;i<=N;i++)seive[i]=i;
    for(int i=2;i*i<=N;i++)
    {
        if(seive[i]==i)
        {
            for(int j=i*i;j<=N;j+=i)
            {
                if(seive[j]==j)
                {
                    seive[j]=i;
                    seive_count[i]=seive_count[i]+1;
                }
            }
        }
    }
    
}

int main() {
	gen_modifiedsieve();
	int Q,n;
	cin>>Q;
	while(Q--){
		cin>>n;
	cout<<seive_count[n]+1<<"\n";	
	}
    
	return 0;
}

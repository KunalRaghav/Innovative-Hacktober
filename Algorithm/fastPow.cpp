#include <iostream>
using namespace std;
#define ll long long
 
ll fastPow(ll a,ll b)
{
	int result = 1;
	while(b>0){
 
		if(b&1)
			result=result*a;
 
			a=a*a;
			b=b>>1;
 
	}	
return result;	
}
 
int main(){
 
	cout<<fastPow(3,4);
}

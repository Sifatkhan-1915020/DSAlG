#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int Prime[30000000],nPrime; // raw data for prime array;;

int mark[1000002];

int sieve(int n)
 {
 	int i,j,limit=sqrt(n)+2;
 	
 	mark[1]=1; //1 is not a prime so...
 	
 	for(int i=4;i<=n;i+=2)
 	mark[i]=1;  //ignoring all the even number 
 	
 	Prime[nPrime++]=2; //as 2 is the first prime
 	
 	for(i=3;i<=n;i+=2)
 	   {
 	   	 if(!mark[i])
 	   	  {
 	   	  	Prime[nPrime++]=i;
 	   	  	
 	   	  	if(i<=limit)
 	   	  	   {
 	   	  	   	 for(j=i*i;j<=n;j+=i*2)
 	   	  	   	   mark[j]=i;
					 }
				  			  }
		}
		
	for(int i=0;i<limit;i++)
	 {
	    cout<<Prime[i]<<"  ";
	 }
 }
 
 int main()
  {
  	sieve(12);
  }
#include<iostream>
using namespace std;

int main (){
// check whether a number is prime of not.

int n;
cin>>n;
int count=1;
int i = 2;
while(i<n){
	
	if(n%i==0){
		cout<<" The number is not prime "<<endl;
		count--;
		break;
		
	}
	
	i++;
}

    if(count){
       cout<<" The number is prime "<<endl;
    }


    return 0;
}

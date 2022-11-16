#include<iostream>
using namespace std;

int main (){
	int n;
	cin>>n;
	
 int a = 0,b=1;
 int i = 0;
 cout<<a<<" "<<b<<" ";
 while(i<=n){
 	
	int fibNumber = a+b;
	cout<<fibNumber<<" ";
	a=b;
	b= fibNumber;
	
	i++;
 }

    return 0;
}

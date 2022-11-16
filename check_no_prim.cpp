#include<iostream>
using namespace std;

// program to check whether number is prim or not

 int main (){
 	
 int n;
 cin >> n;
 int i = 2;
 
 while( i < n ){
 	if(n%i==0){
 		cout<<"Number is not prim"<<" ";
 		break;
	 }
	 else{
	 cout<<"Number is prim"<<" ";
	 break;
	 }
	 i+=1;
 }
 

    return 0;
}

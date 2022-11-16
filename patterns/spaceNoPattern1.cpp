#include<iostream>
using namespace std;

int main (){

int n;
cin>>n;
int rows=1;
while(rows<=n){

int spaces = rows - 1;
while(spaces){

	cout<<" ";
	spaces--;
}

int star = n-rows+1;
while(star){
	cout<<rows;
	star--;
}
cout<<endl;


	rows++;
}

    return 0;
}



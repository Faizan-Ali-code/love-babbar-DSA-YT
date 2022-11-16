#include<iostream>
using namespace std;

int main (){

int n;
cin>>n;
int rows=1;
while(rows<=n){

	int spaces = n-rows;
	while(spaces){

		cout<< " ";
		spaces--;
	
	}

int star = 1;

while(star<=rows){
	cout<<"*";
	star++;
}cout<<endl;

	rows++;
}

    return 0;
}



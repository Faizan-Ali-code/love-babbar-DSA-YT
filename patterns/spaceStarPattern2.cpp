#include<iostream>
using namespace std;

int main (){

int n;
cin>>n;
int rows=1;
while(rows<=n){

	int value = n - rows + 1;
while(value){

	cout<<"*";
	value--;
}
cout<<endl;


	rows++;
}

    return 0;
}



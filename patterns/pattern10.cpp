#include<iostream>
using namespace std;

int main (){

int n;
cin>>n;
int rows=1;
while(rows<=n){

	int col = 1;
	while(col<=n){
		char ch = 'A'+ col -1;
		cout<< ch <<" ";

		col++;
	}cout<<endl;

	rows++;
}

    return 0;
}



#include<iostream>
using namespace std;

int main (){

int n;
cin>>n;
int rows=1;


while(rows<=n){

	int col = 1;
	while(col<=rows){
	char ch = 'A' + rows + col - 2 ;
	
		cout<< ch <<" ";

		col++;
	}cout<<endl;

	rows++;
}

    return 0;
}



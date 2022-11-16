#include<iostream>
using namespace std;

int main (){

int n;
cin>>n;
int rows=1;


while(rows<=n){

	int col = 1;
	char ch = 'A' + rows - 1 ;
	while(col<=n){
	

		cout<< ch <<" ";
		ch++;
		col++;
	}cout<<endl;

	rows++;
}

    return 0;
}



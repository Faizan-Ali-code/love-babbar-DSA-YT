#include<iostream>
using namespace std;

int main (){

int n;
cin>>n;
int rows=1;
while(rows<=n){

int value = rows;
	int col = 1;
	while(col<=rows){
		cout<< value<<" ";
		value++;
		col++;
	}cout<<endl;

	rows++;
}

    return 0;
}



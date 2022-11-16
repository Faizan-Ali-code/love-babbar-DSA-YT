#include<iostream>
using namespace std;

int main (){

int n;
cin>>n;
int rows=0;
while(rows<=n){

	int col = 1;
	int value = rows;
	while(col<=rows){
		cout<< value <<" ";
		value--;
		col++;
	}cout<<endl;

	rows++;
}

    return 0;
}



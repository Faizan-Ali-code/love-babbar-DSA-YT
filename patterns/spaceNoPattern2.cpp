#include<iostream>
using namespace std;

int main (){

int n;
cin>>n;
int rows=1;
while(rows<=n){

int spaces = n - rows;
while(spaces){

	cout<<" ";
	spaces--;
}

int col = 1;
int Number = col + rows - 1;
while(col<=rows){
	
	cout<<Number;
	col++;
}
cout<<endl;


	rows++;
}

    return 0;
}



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
int Number = 1 + rows - 1;
col = 1+col+rows-2;
while(Number){

	cout<<col;
	Number--;
	col++;
}
cout<<endl;


	rows++;
}

    return 0;
}



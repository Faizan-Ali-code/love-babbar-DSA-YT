#include<iostream>
using namespace std;

int main (){

int n;
cin>>n;
int rows=1;
while(rows<=n){
	int value = n;
	int col = 1;
	while(col<=n){
		cout<<value<<" ";
		value--;
		col++;
	}cout<<endl;

	rows++;
}

    return 0;
}

// another way to replace the "value" is to print "n-j+1"

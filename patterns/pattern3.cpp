#include<iostream>
using namespace std;

int main (){

int n;
cin>>n;
int rows=1;
int count = 1;
while(rows<=n){
	
	int col = 1;
	while(col<=n){
		cout<<count<<" ";
		count++;
		col++;
	}cout<<endl;
	
	rows++;
}

    return 0;
}



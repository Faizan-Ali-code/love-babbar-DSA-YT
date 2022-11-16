#include<iostream>
using namespace std;

int main (){

int n;
cin>>n;
int rows=1;
      

while(rows<=n){

	int col = 1;
	while(col<=n){
		char ch = rows+col+'A'-2;
		
		cout<< ch <<" ";
	
		col++;
	}cout<<endl;

	rows++;
}

    return 0;
}



#include<iostream>
using namespace std;

int main (){
 
    int n;
    cin>>n;
    int sum;
    int i = 1;
    while (i<=n)
    {
    	cout<<i<<" ";
    	sum+=i;
        i+=1;
    }cout<<endl;
    cout<<sum<<" ";
    return 0;
}

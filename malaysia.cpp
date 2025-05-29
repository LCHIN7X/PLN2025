#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
	int n;
	char a;
	long long sum=0;
	cin>>n;
	for (int i=0;i<n;n--){
		cin>>a;
		if (a=='W'){
			sum+=pow(2,n-1);
		}
	}
	cout<<sum;
	return 0;
}
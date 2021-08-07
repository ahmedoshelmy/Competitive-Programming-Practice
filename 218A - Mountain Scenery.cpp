#include <iostream>
using namespace std;
 
int main() {
	int n,k;
	cin>>n>>k;
	int a[2*n+1];
	for(int i=0;i<2*n+1;i++)cin>>a[i];
	for(int i=0;i<2*n+1;i++){
		if(i%2==1&&k&&a[i]>a[i-1]+1&&a[i]>a[i+1]+1){
			k--;
			cout<<a[i]-1<<" ";
		}
		else{
			cout<<a[i]<<" ";
		}
	}
	return 0;
}

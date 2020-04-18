#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	
	while(t--)
	{
	    long int n;
	    cin >> n;
	    long int a[n];
	    for(long int i=0; i<n; i++) cin >> a[i];
	    
	    sort(a,a+n);
	    
        long int max1=(a[0]*a[1]*a[n-1]);
        long int max2=(a[n-1]*a[n-2]*a[n-3]);
	   
	    (max1>max2)?cout << max1 : cout<< max2;
	    cout << endl;
	}
	return 0;
}
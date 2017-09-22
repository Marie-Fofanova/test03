#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector <int> a;
    a.push_back(1);
    for (int i=0; i<n; i++){
	for (int j=0; j<=i; j++) cout<<a[j]<<" ";
	cout<<endl;
	a.insert(a.begin(), 1);
	for (int j=1; j<a.size(); j++) a[j]=a[j]+a[j+1];
    }
    return 0;
}


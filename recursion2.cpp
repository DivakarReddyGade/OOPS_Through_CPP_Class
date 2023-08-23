#include<iostream>
using namespace std;
void func(int n)
{
	if(n>10) return;
	func(n+1);	
	cout<<n<<" ";
}
int main()
{
	int n;
	func(1);
}

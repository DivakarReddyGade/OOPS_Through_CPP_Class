#include<iostream>
using namespace std;
void func(int n)
{
	if(n>10) return;
	cout<<n<<" ";
	func(n+1);	
}
int main()
{
	int n;
	func(1);
}

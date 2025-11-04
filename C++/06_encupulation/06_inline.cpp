#include<iostream>
using namespace std;

class Data{
	public:
		inline int square(int x){
			return x*x*x;
		}
};

int main()
{
	Data d;
	
	int n;
	cout<<"Enter your Number : ";
	cin>>n;
	cout<<"\n no of : "<<n<<" cube : "<<d.square(n);
	
	
	return 0;
}

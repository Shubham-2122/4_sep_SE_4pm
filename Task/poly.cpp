 #include<iostream>
 using namespace std;
 
 class A {
 	public :
 	void sum(int x,int y){
 		cout<<"Integer Sum : "<<x+y;
	 }
	void sum(double x,double y){
		cout<<"Float Sum : "<<x+y;
		
	}
 	
 };
 
 int main(){
 	
 	A obj;
 	obj.sum(10,20);
 	obj.sum(2.4,5.8);
 	
 	return 0;
 }

#include<iostream>
using namespace std;

int multiplywith(int num){
	int result=(num<<3)-num;
	return result;
}

int main(){
	cout<<multiplywith(3);
	return 0;
}
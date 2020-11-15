#include <iostream>

using namespace std;

int sum(int a, int b, int c, int d, int e){

int x = a+b+c+d+e;
return x;
}


int main() {

    int a = 3;
    int b = 4;
    int c = 5;
    int d= 6 ;
    int e = 7;
	int x = sum(a,b,c,d,e);
	cout<<x;
}
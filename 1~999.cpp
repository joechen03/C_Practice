# include<stdio.h>
# include<iostream>
using namespace std ;

int main() {
	
	int sum = 0 ;
	
	for ( int i = 1 ; i < 1000 ; i += 2 ) {
		sum += i ;
		cout << i << " " ;
	} // for
	
	cout << endl << sum ;
	
} // main()

# include<stdio.h>
# include<string.h>
# include<iostream>
using namespace std ;

void reverse( char *str ) {
	
	int left, right ;
	char temp ;
	right = strlen(str) - 1 ;
	
	for( left = 0 ; left < right ; ++left ; --right ) {
		
		temp = str[left] ;
		str[left] = str[right] ;
		str[right] = temp ;
		
	} // for()
	
	
} // reverse()

int main() {
	
	char str[] = {} ;
 	cin >> str ;
 	reverse( str ) ;
 	
 	cout << str ;
	 
	return 0 ;	
	
} // main()

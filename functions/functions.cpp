#include<iostream>
using namespace std;



int max_of_four(int a, int b, int c, int d) {


	if ( a>=b && a>=c && a>=d ) {

		return a;

	}

	else {

		if ( b>=c && b>=d ) {
			return b;
		}
		else {
			
			if ( c >= d )
				return c;
			else
				return d;

		}

	}





/*
	if ( a >= b ) {
	
		if ( a >= c ) {

			if ( a >= d) {

				return a;
			}
			
			else {
				return d;

			}
		}

		else {

			if ( d >= c )
				return d;
			else 
				return c;
		}
	
	}
	
	else {


		if ( b >= c ) {

			if ( b >= d ) {
				
				return b;
			}
			else
				return d;

		}

		else {

			if ( d>= c )
				return d;
			else
				return c;
		}
	}

*/
}


int main()
{

	int a,b,c,d;

	cin >> a >> b >> c >> d;

	cout << max_of_four(a,b,c,d) << endl;



}


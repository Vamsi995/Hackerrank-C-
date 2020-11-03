#include<iostream>
#include<sstream>
using namespace std;

class Box {

	int l;
	int b;
	int h;
	
	public:	
	Box() {
		
		l = 0;
		b = 0;
		h = 0;
	}

	Box(int len, int bre, int hei) {
	
		l = len;
		b = bre;
		h = hei;
	}

	Box(const Box& c) {
		l = c.l;
		b = c.b;
		h = c.h;
	}

	public:
		int getLength() {
			return this->l;
		}

		int getBreadth() {
			return this->b;
		}
		int getHeight() {
			return this->h;
		}
		long CalculateVolume() {
			return (this->l)*this->b*this->h;
		}


		bool operator<(const Box& a) {
			
			if( this->l < a.l) {
				
				return true;

			}
			else if(this->b < a.b && this->l == a.l) return true;
			else if(this->h < a.h && this->b == a.b && this->l == a.l) return true;
			else return false;
		}

		friend ostream& operator<< (ostream& output, const Box& a) {
			
			output << a.l << " " << a.b << " " << a.h;
			return output;	
		}
};




int main()
{
	

Box b1; // Should set b1.l = b1.b = b1.h = 0;
Box b2(2, 3, 4); // Should set b1.l = 2, b1.b = 3, b1.h = 4;
b2.getLength();	// Should return 2
b2.getBreadth(); // Should return 3
b2.getHeight();	// Should return 4
b2.CalculateVolume(); // Should return 24
bool x = (b1 < b2);	// Should return true based on the conditions given
cout<<b2;


}

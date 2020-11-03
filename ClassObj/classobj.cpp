#include<iostream>
#include<vector>
using namespace std;

class Student {
	
	int scores[5];


	public:
		void input() {
			for(int i =0;i<5;i++)
				cin >> scores[i];	
			return;
		}


		int calculateTotalScore() {
		
			int sum = 0;

			for(int i=0;i<5;i++) {
				sum+=scores[i];
			}

			return sum;
		
		}
};




int main()
{

	int a;

	cin >> a;

	Student *s = new Student[a];

	for(int i=0;i<a;i++) {

		s[i].input();
	}

	int kristen = s[0].calculateTotalScore();

	int count = 0;
	for(int i=1;i<a;i++) {

		 int score = s[i].calculateTotalScore();

		 if(score > kristen) {
			count++;
		 }
	}

	cout << count << endl;

	return 0;


}

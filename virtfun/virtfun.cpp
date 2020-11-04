#include<iostream>
#include<vector>
#include<sstream>
using namespace std;

class Person {

	public:
	string name;
	int age;
	
	public:
	virtual void getdata() {
		return;
        //        cin >> name >> age;
          //      for(int i=0;i<6;i++)
            //            cin >> marks[i];
        }


        virtual void putdata() {
		return;
                //cout << name << age << getTotal() << cur_id << endl;
        }



};

class Student : public Person {

	static int pid;

	int marks[6];
	int cur_id;


	public:
	Student() {
		pid++;
		cur_id = pid;
	}

	public:
	void getdata() {
		cin >> name >> age;
		for(int i=0;i<6;i++)
			cin >> marks[i];
	}

	int getTotal() {
		int sum = 0;

		for(int i=0;i<6;i++)
			sum+=marks[i];
		return sum;
	}

	void putdata() {
		cout << name << " " << age << " " << getTotal() << " " << cur_id << endl;
	}
};


class Professor : public Person {

	static int pidx;
	int publications;
	int cur_id;

	public:
	Professor() {
		pidx++;
		cur_id = pidx;
	
	}

	public:
	void getdata() {
		cin >> name >> age >> publications;
	}

	void putdata() {
		cout << name << " " << age << " " << publications << " " << cur_id << endl;
	}
};

int Student::pid = 0;
int Professor::pidx = 0;

int main()
{
int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;
	

}

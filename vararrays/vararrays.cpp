#include<iostream>
#include<vector>
using namespace std;

int main()
{



	/*
	 *
	 * Method 1
	int a,b,size,ind,jnd,val;

	cin >> a >> b;

	vector<vector<int>> vec;


	for(int i = 0; i < a; i++){

		cin >> size;

		vector<int> temp;

		for(int k=0;k<size;k++){

			cin >> val;
			temp.push_back(val);
		}
		
		vec.push_back(temp);

	}

	for(int i=0;i<b;i++) {
	
		cin >> ind >> jnd;

		cout << vec[ind][jnd] << endl;

	}
	*/

	int a,b,out1,out2;

	cin >> a >> b;

	int **tarr = new int* [a];

	for( int i = 0;i < a; i++) {
	
		int x;

		cin >> x;

		int *arr = new int[x];

		for(int j=0;j < x;j++){
			cin >> arr[j];
		}

		tarr[i] = arr;

	}	


	for(int k =0;k < b;k++){
		
		cin >> out1 >> out2;

		cout << tarr[out1][out2] << endl;

	}





}

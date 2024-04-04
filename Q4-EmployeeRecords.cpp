#include<iostream>
#include<string>
#include<cstddef>

using namespace std;

class Employee
{
private:
	int empCode;
	string empName;

public:

	//Constructor
	Employee()
	{
		empCode = 0;
		empName = "";
	}

	void getData()
	{
		cout << "\t Enter Employee Code : ";
		cin >> empCode;
		while (empCode < 0)
		{
			cout << "\t Invalid Code...!!" << endl;
			cout << "\t Enter Employee Code [not in -ve] : ";
			cin >> empCode;

		}
		cin.ignore();
		cout << "\t Enter Employee Name : ";
		getline(cin, empName);
		cout << endl;
		
	}

	void display()
	{
		cout << "\t Employee Code : " << empCode;
		cout << "\t Employee Name : " << empName;
		cout << endl;


	}

};

const size_t SIZE{ 6 };

int main()
{
	cout << endl << endl;
	Employee empArray[SIZE];

	cout << "\t\tEmployee' Details " << endl << endl;

	for (size_t i{0}; i < SIZE; i++)
	{
		cout << "\t\t *Employee " << i + 1 <<"*" << endl;
		empArray[i].getData();
	}
	cout << endl;

	cout << "\t\t Employee' Records " << endl << endl;

	for (size_t i{ 0 }; i < SIZE; i++)
	{
		cout<<"\t" << i + 1 << ")   ";
		empArray[i].display();
		cout << endl;
	}

	cout << endl << endl;
	return(0);
}
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include "Student.h"
using namespace std;


class Database {
public:
	studentManagment myStudent;
	int a;
};

//void student::getData()
//{
//	cout << "\nEnter the Id number of the student ";
//	cin >> id;
//	cout
//}

int main() 
{
	int option;
	string dob;//date of birth
	int student_id;
	int staff_id;
	string NamesInFile;//names stored in the .txt file for the students
	string fName;//first name
	string lName;//last name
	string address;//stores address
	string department;
	string storeNames;//stores name into text file
	string email;

	//Reading and writing into files
	ifstream studentNames;//kinda like a structure to open and close the .txt file
	ofstream Namestorage(storeNames, ios::app);


	while (1) {
		cout << "Welcome to Student Registration System! " << endl << endl
			<< "Select an option!" << endl
			<< "[1] Add Student" << endl
			<< "[2] View Student information" << endl
			<< "[3] View all Students" << endl
			<< "[4] Staff information" << endl
			<< "[5] to exit" << endl << endl
			<< "> ";
		cin >> option;

		switch (option)
		{
			case 1:

				system("CLS");//clear screen
				//Prompt USER FOR INFO
				cout << "~~~~~~~ ADD NEW STUDENT INFORMATION~~~~~~" << endl;
				cout << "Please Enter Your First Name: ";
				cin >> fName;

				cout << "Enter Last Name: ";
				cin >> lName;

				cout << "Enter your Date of Birth [month/day/year] for example: 112399: ";
				cin >> dob;

				cout << "Enter Student ID: ";
				cin >> student_id;

				cout << "Enter Address: ";
				cin >> address;

				cout << "Enter Department: ";
				cin >> department;

				cout << "Enter Email address: ";
				cin >> email;

				system("CLS");//clear screen
				//PRINT OUT USER INFO
				cout << "~~~~~~~ STUDENT INFORMATION~~~~~~" << endl;
				cout << "\nName: ";
				cout << fName << " " << lName;

				Namestorage.open("StudentNames.txt");//opens .txt file
				Namestorage << fName << "\n" << lName;
	

				Namestorage.close();//closes opened .txt file

				cout << "\nDate of Birth [month day year: 00 00 00]: ";
				cout << dob;

				cout << "\nStudent ID: ";
				cout << student_id;

				cout << "\nAddress: ";
				cout << address;

				cout << "\nDepartment: ";
				cout << department;

				cout << "\nEmail address: ";
				cout << email;
			break;

			case 2:
				cout << "Enter student ID: " << endl;
				cin >> student_id;

				break;
			case 3:
				{
				studentNames.open("StudentNames.txt");//opens .txt file
					system("cls");
						
					//Prints out student names from the text file
					studentNames >> NamesInFile;
					while (studentNames.good())
					{
						cout << NamesInFile << "\n";
						studentNames >> NamesInFile;
					}

					system("pause");
					system("cls");//clear screen

					//Backup File Reader Code
					{
						//string student1, student2, student3, student4, student5;
						//if (studentNames.fail())//if file does not exist or is corrupted and will not open for some reason, this will exit the console without crashing the program
						//	{
						//		cout << "Sorry the list does not exisit or cannot be opened at the moment";
						//		cout << "\nPlease try again later!";
						//		exit(1);//exits console without crashing
						//	}

						//studentNames >> student1 >> student2 >> student3 >> student4 >> student5;
						//cout << "\nStudent 1: " << student1;
						//cout << "\nStudent 2: " << student2;
						//cout << "\nStudent 3: " << student3;
						//cout << "\nStudent 4: " << student4;
						//cout << "\nStudent 5: " << student5;
						//cout << "\n";
					}

					studentNames.close();//closes opened .txt file
				}
			break;

		case 4:
			cout << "~~~~~~~ ADD NEW STAFF INFORMATION~~~~~~" << endl;

			cout << "Please Enter Your First Name: ";
			cin >> fName;

			cout << "Enter Last Name: ";
			cin >> lName;

			cout << "Enter your Date of Birth [month/day/year]: ";
			cin >> dob;

			cout << "Enter Staff ID: ";
			cin >> staff_id;

			cout << "Enter Address: ";
			cin >> address;

			cout << "Enter Email address: ";
			cin >> email;
			break;
		case 5:
			cout << "Have a good day!" << endl;
			system("pause");
			while (option != 5);
			return 0;

		}
		break;


	}


	system("pause");
	return 0;
}
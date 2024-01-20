//using namespace std;
//#include <iostream>
//
//struct person 
//{
//	string first_name;
//	string last_name;
//};
//
//
//
//int main()
//{
//	struct person p1, p2, p3;
//
//	for (int i = 0; i < 3; i++)
//	{
//		string temp_firstname;
//		string temp_lastname;
//		int k = i + 1;
//
//		cout << "Please write first name of the person number " << k << ":";
//		cin >> temp_firstname;
//
//		cout << "Please write last name of the person number " << k << ":";
//		cin >> temp_lastname;
//
//		if (i == 0)
//		{
//			p1.first_name = temp_firstname;
//			p1.last_name = temp_lastname;
//		}
//		else if (i == 1)
//		{
//			p2.first_name = temp_firstname;
//			p2.last_name = temp_lastname;
//		}
//		else if (i == 2)
//		{
//			p3.first_name = temp_firstname;
//			p3.last_name = temp_lastname;
//		}
//	}
//
//	string people[3][2] = { p1.first_name, p1.last_name, p2.first_name, p2.last_name, p3.first_name, p3.last_name };
//
//	
//	for (int j = 0; j < 3; j++)
//	{
//		int v = j + 1;
//		cout << "Person " << v << ": ";
//
//		for (int h = 0; h < 2; h++)
//		{
//			
//			cout << people[j][h] << "    ";
//		}
//		cout << endl;
//	}
//
//
//}
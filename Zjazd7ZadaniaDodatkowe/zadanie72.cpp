//using namespace std;
//#include <iostream>
//
//
//int recurse(int user_int) 
//{
//	int result;
//
//	if (user_int == 1) {
//		return 1;
//	}
//	else
//	{
//	result = recurse(user_int - 1) * user_int;
//	return result;
//	}
//	
//}
//
//
//int main()
//{
//	int user_int;
//	cout << "Please input int: ";
//	cin >> user_int;
//
//	cout << endl;
//
//	int outcome = recurse(user_int);
//
//	cout << outcome << endl;;
//
//	if (outcome % 2 == 0) {
//		cout << "Can be divided by 2." << endl;
//	}
//	if (outcome % 3 == 0) {
//		cout << "Can be divided by 3." << endl;
//	}
//	if (outcome % 5 == 0) {
//		cout << "Can be divided by 5." << endl;
//	}
//	if (outcome % 11 == 0) {
//		cout << "Can be divided by 11." << endl;
//	}
//}
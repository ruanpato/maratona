#include <iostream>
//Age in days
using namespace std;

int main(){
	int days;
	cin >> days;
	cout << days/365 << " ano(s)\n" << (days%365)/30 << " mes(es)\n" << (days%365)%30 << " dia(s)" << endl;

	return 0;
}

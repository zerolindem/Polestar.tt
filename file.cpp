#include<iostream>
#include<fstream>
#include<string>
using namespace std;
/*ostream& operator<<(ostream& out, const string& x) {
out << "string" << x << endl;
return out;
}
istream& operator>>(istream& in, string& x) {
//cout<<"Enter your name and age."<<endl;
in >> x;
return in;
}*/
int main() {
	ifstream in("in.txt");
	ofstream out("out.txt");
	string str;
	/*cin>>class1;
	cout<<class1;*/
	if (!in.is_open() || !out.is_open()) {
		cout << "Error";
		exit(1);
	}
	while (!in.eof()) {
		in >> str;
		out << str << endl;
	}
	in.close();
	out.close();
}
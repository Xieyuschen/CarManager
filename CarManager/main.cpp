#include<fstream>
#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include"CsvReader.h"
#include"Info.h"
#include<Windows.h>
#include<regex>
#include<fstream>
using namespace std;
#include"Time.h"

int main(){
	
	CsvReader kinds("../����������Ϣ��.csv",'\t');
	CsvReader basic("../����������Ϣ��.csv");
	CsvReader rent("../�⳵������Ϣ��.csv");
	string s;
	cout << "Please Chose the Info you want to : ";
	cin >> s;
	if (s == "1") {
		vector<string> titles(kinds.GetTitle());
		cout << "Input the index of the project you want to :"<< endl;
		auto beg = titles.begin();
		for(auto it = beg; it != titles.end(); it++) {
			cout << it - beg << ". " << *it << endl;
		}
	}
	while (cin >> s) {

	}
	

}
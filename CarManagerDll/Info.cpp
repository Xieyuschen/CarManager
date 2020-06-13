#include"Info.h"
#include<string>
#include<vector>
#include<list>
#include<iostream>
#include"Time.h"

using namespace std;
using namespace CarManagerTypes;
namespace CarManagerCommon {
	Info::Info(const piece& _t, const list<piece>& _d) {
		title = _t;
		data = _d;
	}
	Info::~Info() {}
	void Info::Add(piece a) {
		if (a.size() == title.size()) {
			data.push_back(a);
		}
		else {
			throw new exception();
		}
	}

	list<Info::piece> Info::Search(int index, const string& key, bool cryptic = true)
	{

		list<vector<string>> temp;
		bool condition;
		for (vector<string> piece : data)
		{
			condition = cryptic
				? (piece[index].find(key) != string::npos)
				: (piece[index] == key);
			if (condition)temp.push_back(piece);
		}
		return temp;
	}

	list<Info::piece> Info::Search(CarManagerTypes::Time start, CarManagerTypes::Time endtime) {
		list<piece> temp;
		if (title[5] == "ȡ��ʱ��") {
			for (auto item : data) {
				if (item[5] > start.Show() & item[5] < endtime.Show()) {
					temp.push_back(item);
				}
			}
			return temp;
		}
		else {
			throw new exception();
		}

	}
	void Info::Delete() {};
	void Info::Create() {};
}


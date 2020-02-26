#ifndef DATACONVERT_H
#define DATACONVERT_H

#include<string>
#include<vector>
#include<list>
#include<iostream>
using namespace std;
//===========================================
//�������ڴ���.csv�ļ�
//����string�ļ�������csv�ļ������ݴ���Ϊһ������
//�����д洢�˴�csv���е��б��Լ�ÿ�е�����
class DataConvert
{
public:
	DataConvert(string);
	DataConvert() :title(NULL), data(NULL),column(0){};
	~DataConvert();
	DataConvert(DataConvert&& d) noexcept{
		title = std::move(d.title);
		data = std::move(d.data);
		column = std::move(d.column);
	}
	DataConvert(const DataConvert& d) {
		title = d.title;
		column = d.column;
		data = d.data;
	}
	size_t GetColumnnum();
	//����vector<string> ���б���
	vector<string> GetTitle();	
	//�������ݱ�����
	list<vector<string>> GetData();
	void UpdateFile();

	vector<string> title;
	list<vector<string>> data;
private:

	size_t column;
	string filename;
};

#endif // DATACONVERT_H


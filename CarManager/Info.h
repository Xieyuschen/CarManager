
#ifndef INFO_H
#define INFO_H

#include<string>
#include<vector>
#include<list>
#include<iostream>
#include"CsvReader.h"

class Info
{
public:
	Info(vector<string>&,list<vector<string>>&);
	~Info();
	void Add(vector<string> t);
	list<vector<string>>  Search(int,const string&);
	list<vector<string>>  Search(int ,const string&, bool);
	//��ѯ������ʱ�䷶Χ�ڵļ�¼
	list<vector<string>> Search(const string& starttime,const string& endtime);
	void Delete(); 
	void Create();
private:
	vector<string> title;
	list<vector<string>> data;
};


#endif // INFO_H

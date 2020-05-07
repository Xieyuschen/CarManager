
#ifndef INFO_H
#define INFO_H

#include<string>
#include<vector>
#include<list>
#include<iostream>
#include"CsvReader.h"
#include<fstream>
#include"Time.h"
class Info
{
public:
	using piece = std::vector<string>;
public:
	Info(piece&,list<piece>&);
	~Info();
	void Add(piece t);
	//list<piece>  Search(int,const string&);
	list<piece>  Search(int ,const string&, bool);
	//��ѯ������ʱ�䷶Χ�ڵļ�¼
	list<Info::piece>  Search(CarManagerTypes::Time start, CarManagerTypes::Time endtime) ;
	void Delete();
	void Create();
private:
	piece title;
	list<piece> data;
};


#endif // INFO_H

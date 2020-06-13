#pragma once
#ifdef CSVREADERDLL_EXPORT
#define CsvReader_API __declspec(dllexport)
#else
#define CsvReader_API __declspec(dllimport)
#endif // CSVREADERDLL_EXPORT

#include<string>
#include<vector>
#include<list>
#include<iostream>
using namespace std;
//===========================================
//�������ڴ���.csv�ļ�
//����string�ļ�������csv�ļ������ݴ���Ϊһ������
//�����д洢�˴�csv���е��б��Լ�ÿ�е�����
namespace CarManagerCommon 
{
	class CsvReader
	{
	public:
		CsvReader(string, char);
		CsvReader(string);
		CsvReader() :title(NULL), data(NULL), column(0) {};
		~CsvReader();
		CsvReader(CsvReader&& d) noexcept {
			title = std::move(d.title);
			data = std::move(d.data);
			column = std::move(d.column);
		}
		CsvReader(const CsvReader& d) {
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
		void ShowData();
		vector<string> title;
		list<vector<string>> data;

		static void TestFunction();
	private:

		size_t column;
		string filename;
	};

}



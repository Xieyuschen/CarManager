#pragma once
#ifdef CSVREADERDLL_EXPORTS
#define CsvReader_API __declspec(dllexport)
#else
#define CsvReader_API __declspec(dllimport)
#endif // CSVREADERDLL_EXPORT

#include<string>
#include<vector>
#include<list>
#include<iostream>
using namespace std;
namespace CarManagerCommon
{
	class ICsvReader
	{
	public:
		//virtual size_t GetColumnnum()=0;
		////����vector<string> ���б���
		//virtual vector<string> GetTitle()=0;
		////�������ݱ�����
		//virtual list<vector<string>> GetData()=0;
		//virtual void UpdateFile()=0;
		//virtual void ShowData()=0;
		virtual void TestFunction()=0;
	};

}



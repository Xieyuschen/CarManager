#include<stdio.h>
#pragma warning(disable:4996)

#include <string.h>
#include <stdlib.h>
#include"Structs.h"
#include"CsvReader.h"
#include"Data.h"
int main() {
	CarDetail c;
	const char* str = "../����������Ϣ��.csv";
	const char* str1 = "../�⳵������Ϣ��.csv";
	const char* str2 = "../����������Ϣ��.csv";
	unsigned row = 2;
	auto strs=CsvReader(str2,row);
	auto re = DeSerilizeCarDeail(strs[1]);
	
}
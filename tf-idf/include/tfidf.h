#ifndef TFIDF_H
#define TFIDF_H

#include <iostream>
#include <string>
#include <cstdio>
#include "../cppjieba/dict/idf.utf8"

using namespace std;

const int sonunm = 1920, base = 0x80;


struct TF
{
	char data;
	double grade;
	bool terminal;
	struct TF *son[sonnum];
	TF()
	{
		data ='\0', grade = 0;
		terminal = false; 
		memset(son, NULL, sizeof(son));
	}
}

class grade
{
public:
	
private:
	TF* NewTF();
	void Insert(TF *root, char *s, double tmp);
	void DeleteAll(TF *root);
	bool DeleteWord(TF *root, char *word);
}
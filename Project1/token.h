#pragma once
#ifndef TOKEN_H
#define TOKEN_H

#include <string>
#include <vector>
#include <stdio.h>
#include <iostream>
using namespace std;


// Enums, not variables
enum tokenID { ID_tk, NUM_tk, KW_tk, OP_tk, EOF_tk };
enum states { INIT, OPER, IDEN, INTG, COMM, EQEQ, ENDC, ERRO, FINL };

// Declaration of variables (with extern keyword) , not definition (without extern
extern vector < string > tokenNames;
extern vector < string > keywords;
extern states table[7][22];
struct Token
{
	tokenID token;
	string instance;
	int lineNum;
};

extern vector<Token> tokenList;
#endif

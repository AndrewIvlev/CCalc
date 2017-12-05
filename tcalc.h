#pragma once
class TCalc{
	string infix;
	string postfix;
	TStack<char> stc;
	TStack<double> stdub;
public:
	TCalc(){}
	~TCalc(){}
	int priority(char op);
	double factorial(int n);
	void Setinfix(const string _inf);
	string Getinfix(){return infix;}
	string Getpostfix(){return postfix;}
	bool Check();
	void topostfix();
	double Calc();
};
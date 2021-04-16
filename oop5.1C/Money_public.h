#pragma once
#include "Money.h"
class Money_public : public Money
{
public:
	Money_public();
	Money_public(const char*);
	Money_public(double, double, double, double, double, double, double, double, double, double, double, double);
	Money_public(const Money_public&);
	~Money_public();

	virtual double get_sum();
	virtual double Divide(double sum1, double sum2);
	Money_public& operator = (const Money_public&);
	operator string() const;
	friend ostream& operator << (ostream&, const Money_public&);
	friend istream& operator >> (istream&, Money_public&);
	friend double operator / (Money_public&, Money_public&);
	friend bool operator > (Money_public& a, Money_public& b);
	friend bool operator < (Money_public& a, Money_public& b);
	friend bool operator == (Money_public& a, Money_public& b);

};


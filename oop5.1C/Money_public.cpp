#include "Money_public.h"
Money_public::Money_public() : Money(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1) { }
Money_public::Money_public(const char* s) : Money(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1)
{
	if (s != "sum")
		throw MyException(" Such SUM does not exist ");
}
Money_public::Money_public(double gg1000, double gg500, double gg200, double gg100, double gg50, double gg20,
						   double gg10, double gg5, double gg2, double gg1, double cc50, double cc10)
	: Money(gg1000, gg500, gg200, gg100, gg50, gg20, gg10, gg5, gg2, gg1, cc50, cc10) { }

Money_public::Money_public(const Money_public& r)
: Money(r.GetG1000(), r.GetG500(), r.GetG200(), r.GetG100(), r.GetG50(), r.GetG20(), r.GetG10(), r.GetG5(), r.GetG2(), r.GetG1(), r.GetC50(), r.GetC10()) { }
Money_public::~Money_public() {}

Money_public& Money_public::operator = (const Money_public& r)
{
	Money_public t(r.GetG1000(), r.GetG500(), r.GetG200(), r.GetG100(), r.GetG50(), r.GetG20(), r.GetG10(), r.GetG5(), r.GetG2(), r.GetG1(), r.GetC50(), r.GetC10());
	return *this;
}

istream& operator >> (istream& in, Money_public& a)
{
	double gg1000, gg500, gg200, gg100, gg50, gg20, gg10, gg5, gg2, gg1, cc50, cc10;
	do {
		cout << " 1000 - ? "; in >> gg1000;
		cout << " 500 - ? "; in >> gg500;
		cout << " 200 - ? "; in >> gg200;
		cout << " 100 - ? "; in >> gg100;
		cout << " 50 - ? "; in >> gg50;
		cout << " 20 - ? "; in >> gg20;
		cout << " 10 - ? "; in >> gg10;
		cout << " 5 - ? "; in >> gg5;
		cout << " 2 - ? "; in >> gg2;
		cout << " 1 - ? "; in >> gg1;
		cout << " 0.50 - ? "; in >> cc50;
		cout << " 0.10 - ? "; in >> cc10;
		if (!a.Init(gg1000, gg500, gg200, gg100, gg50, gg20, gg10, gg5, gg2, gg1, cc50, cc10))
		{
			cout << endl << " Error! Enter right number. " << endl;
		}
		cout << endl;
	} while (!a.Init(gg1000, gg500, gg200, gg100, gg50, gg20, gg10, gg5, gg2, gg1, cc50, cc10));
	a.SetG1000(gg1000); a.SetG500(gg500); a.SetG200(gg200); a.SetG100(gg100); a.SetG50(gg50);
	a.SetG20(gg20); a.SetG10(gg10); a.SetG5(gg5); a.SetG2(gg2); a.SetG1(gg1); a.SetC50(cc50); a.SetC10(cc10);
	cout << endl;
	return in;
}

Money_public::operator string () const
{
	stringstream sstr;
	sstr << " 1000 - " << GetG1000() * 1000. << endl;
	sstr << " 500 - " << GetG500() * 500. << endl;
	sstr << " 200 - " << GetG200() * 200. << endl;
	sstr << " 100 - " << GetG100() * 100. << endl;
	sstr << " 50 - " << GetG50() * 50. << endl;
	sstr << " 20 - " << GetG20() * 20. << endl;
	sstr << " 10 - " << GetG10() * 10. << endl;
	sstr << " 5 - " << GetG5() * 5. << endl;
	sstr << " 2 - " << GetG2() * 2. << endl;
	sstr << " 1 - " << GetG1() * 1. << endl;
	sstr << " 0.50 - " << GetC50() * 0.5 << endl;
	sstr << " 0.10 - " << GetC10() * 0.1 << endl;
	return sstr.str();
}

ostream& operator << (ostream& out, const Money_public& r)
{
	out << string(r);
	return out;
}

double Money_public::get_sum()
{
	return (GetG1000() * 1000. + GetG500() * 500. + GetG200() * 200. + GetG100() * 100. + GetG50() * 50. +
		GetG20() * 20. + GetG10() * 10. + GetG5() * 5. + GetG2() * 2. + GetG1() * 1. + GetC50() * 0.50 + GetC10() * 0.1);
}

double operator / (Money_public& a, Money_public& b)
{
	if (a > b)
		return a.get_sum() / b.get_sum();
	else
		if (a < b)
			return  b.get_sum() / a.get_sum();
}

double Money_public::Divide(double sum1, double sum2)
{
	if (sum2 == 0)
		throw bad_exception();
	if (sum1 < 0)
		throw MyException(" Error [0]  MyException ");
	bad_exception* t = new bad_exception;
	if (sum2 < 0)
		throw t;
	return sum1 / sum2;
}

bool operator > (Money_public& a, Money_public& b)
{
	if (a.get_sum() > b.get_sum())
		return true;
	else
		return false;
}

bool operator < (Money_public& a, Money_public& b)
{
	if (a.get_sum() < b.get_sum())
		return true;
	else
		return false;
}

bool operator == (Money_public& a, Money_public& b)
{
	if (a.get_sum() == b.get_sum())
		return true;
	else
		return false;
}
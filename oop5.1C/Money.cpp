#include "Money.h"
#include "MyException.h"
Money::Money()
{
	g1000 = 0;
	g500 = 0;
	g200 = 0;
	g100 = 0;
	g50 = 0;
	g20 = 0;
	g10 = 0;
	g5 = 0;
	g2 = 0;
	g1 = 0;
	c50 = 0;
	c10 = 0;
}
Money::Money(const char* s)
{
	if (s != "sum")
		throw MyException(" Such SUM does not exist ");
	g1000 = 0;
	g500 = 0;
	g200 = 0;
	g100 = 0;
	g50 = 0;
	g20 = 0;
	g10 = 0;
	g5 = 0;
	g2 = 0;
	g1 = 0;
	c50 = 0;
	c10 = 0;

}
Money::Money(double gg1000, double gg500, double gg200, double gg100, double gg50, double gg20, double gg10, double gg5, double gg2, double gg1, double cc50, double cc10)
{
	g1000 = gg1000;
	g500 = gg500;
	g200 = gg200;
	g100 = gg100;
	g50 = gg50;
	g20 = gg20;
	g10 = gg10;
	g5 = gg5;
	g2 = gg2;
	g1 = gg1;
	c50 = cc50;
	c10 = cc10;
}
Money::Money(const Money& r)
{
	g1000 = r.g1000;
	g500 = r.g500;
	g200 = r.g200;
	g100 = r.g100;
	g50 = r.g50;
	g20 = r.g20;
	g10 = r.g10;
	g5 = r.g5;
	g2 = r.g2;
	g1 = r.g1;
	c50 = r.c50;
	c10 = r.c10;
}
Money::~Money() {}


bool Money::Init(double gg1000, double gg500, double gg200, double gg100, double gg50, double gg20, double gg10, double gg5, double gg2, double gg1, double cc50, double cc10)
{
	if (gg1000 > 0)
	{
		SetG1000(gg1000);
		return true;
	}
	else
		return false;
	if (gg500 > 0)
	{
		SetG500(gg500);
		return true;
	}
	else
		return false;
	if (gg200 > 0)
	{
		SetG200(gg200);
		return true;
	}
	else
		return false;
	if (gg100 > 0)
	{
		SetG100(gg100);
		return true;
	}
	else
		return false;
	if (gg50 > 0)
	{
		SetG50(gg50);
		return true;
	}
	else
		return false;
	if (gg20 > 0)
	{
		SetG20(gg20);
		return true;
	}
	else
		return false;
	if (gg10 > 0)
	{
		SetG10(gg10);
		return true;
	}
	else
		return false;
	if (gg5 > 0)
	{
		SetG5(gg5);
		return true;
	}
	else
		return false;
	if (gg2 > 0)
	{
		SetG2(gg2);
		return true;
	}
	else
		return false;
	if (gg1 > 0)
	{
		SetG1(gg1);
		return true;
	}
	else
		return false;
	if (cc50 > 0)
	{
		SetC50(cc50);
		return true;
	}
	else
		return false;
	if (cc10 > 0)
	{
		SetC10(cc10);
		return true;
	}
	else
		return false;
}
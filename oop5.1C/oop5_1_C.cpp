#include "Money_public.h"
#include "Money_private.h"

double Divide(Money_public& sum1, Money_public& sum2)
{
	if (sum1 == sum2)
		throw "sum1 = sum2 ARE_EQUAL";
	return sum1 / sum2;
}

double Divide1(Money_private& sum1, Money_private& sum2)
{
	if (sum1 == sum2)
		throw "sum1 = sum2 ARE_EQUAL";
	return sum1 / sum2;
}

int main()
{
	////////////////////// Money_public ////////////////////////
	try
	{
		Money_public sum1("sum"), sum2("sum");
		cout << endl << " /////// Money_public /////// " << endl;
		cout << " -------- FIRST SUMM -------- " << endl;
		cin >> sum1;
		cout << " -------- SECOND SUMM -------- " << endl;
		cin >> sum2;

		cout << " -------- FIRST SUMM -------- " << endl;
		cout << sum1;
		cout << " TOTAL - " << sum1.get_sum() << endl << endl;

		cout << " -------- SECOND SUMM -------- " << endl;
		cout << sum2;
		cout << " TOTAL - " << sum2.get_sum() << endl << endl;

		if (sum1 > sum2)
			cout << " SUMM1 > SUMM2 " << endl;
		else
			if (sum1 < sum2)
				cout << " SUMM1 < SUMM2 " << endl;
			else
				if (sum1 == sum2)
					cout << " SUMM1 == SUMM2 " << endl;
		try
		{
			cout << " DIVIDE = " << setprecision(3) << Divide(sum1, sum2) << endl;
		}
		catch (const char* div)
		{
			cout << div << endl;
		}

	}
	catch (MyException e)
	{
		cout << e.What() << endl;
	}
	Money_public x;
	try
	{
		x.Divide(-2, 20);
	}
	catch (MyException e)
	{
		cout << e.What() << endl;
	}

	try
	{
		x.Divide(20, 0);
	}
	catch (bad_exception& e)
	{
		cout << " Error [1] & " << e.what() << endl;
	}

	try
	{
		x.Divide(20, -2);
	}
	catch (bad_exception* e)
	{
		cout << " Error [2] * " << e->what() << endl;
	}


	////////////////////// Money_private ////////////////////////
	try
	{
		Money_private s1("sum"), s2("sum");
		cout << endl << " /////// Money_private /////// " << endl;
		cout << " -------- FIRST SUMM -------- " << endl;
		cin >> s1;
		cout << " -------- SECOND SUMM -------- " << endl;
		cin >> s2;

		cout << " -------- FIRST SUMM -------- " << endl;
		cout << s1;
		cout << " TOTAL - " << s1.get_sum() << endl << endl;

		cout << " -------- SECOND SUMM -------- " << endl;
		cout << s2;
		cout << " TOTAL - " << s2.get_sum() << endl << endl;

		if (s1 > s2)
			cout << " SUMM1 > SUMM2 " << endl;
		else
			if (s1 < s2)
				cout << " SUMM1 < SUMM2 " << endl;
			else
				if (s1 == s2)
					cout << " SUMM1 == SUMM2 " << endl;
		try
		{
			cout << " DIVIDE = " << setprecision(3) << Divide1(s1, s2) << endl;
		}
		catch (const char* div)
		{
			cout << div << endl;
		}

	}
	catch (MyException e)
	{
		cout << e.What() << endl;
	}

	Money_private y;
	try
	{
		y.Divide(-2, 20);
	}
	catch (MyException e)
	{
		cout << e.What() << endl;
	}

	try
	{
		y.Divide(20, 0);
	}
	catch (bad_exception& e)
	{
		cout << " Error [1] & " << e.what() << endl;
	}

	try
	{
		y.Divide(20, -2);
	}
	catch (bad_exception* e)
	{
		cout << " Error [2] * " << e->what() << endl;
	}
	return 0;
}
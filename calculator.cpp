#include "calculator.h"

int Calculator::Add (double a, double b)
{
<<<<<<< HEAD
    return a + b;
=======
	return a + b + 0.5;
>>>>>>> 46b73a6... fix truncation error
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

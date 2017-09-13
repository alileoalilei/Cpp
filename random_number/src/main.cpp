#include <stdio.h>      /* printf, NULL */
#include <random_number.hpp>

using namespace Random_Number;

int main()
{
	random_forcing random;
	random.Random_Seed(100.,100.);
  return 0;
};

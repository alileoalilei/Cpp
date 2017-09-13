/* srand example */
#include <stdio.h>      /* printf, NULL */
#include <random_number.hpp>

namespace Random_Number
{
void random_forcing::Random_Seed(float k, float l)
{
	random_forcing rf;


	srand (time(NULL));
	rf.run1=rand()%83;
	printf ("First number: %d\n", rf.run1);
	rf.ran1=rf.run1/k;

	srand (time(NULL)-13);
	rf.run2=rand()%97;
	printf ("Second number: %d\n", rf.run2);
	rf.ran2=rf.run2/l;

	printf ("ran1 number: %4.2f\n", rf.ran1);
	printf ("ran2 number: %4.2f\n", rf.ran2);

};
void random_forcing::Loop_Seed(int m)
{
	random_forcing rf;
	rf.Random_Seed(100.,100.);
	arr=0

	for ( int i = 0 ; i < m ; ++i )
	{
	float arr[i] = i * rf.ran1;
	printf ("ith number: %4.2f\n", arr[i]);
	}


};
}

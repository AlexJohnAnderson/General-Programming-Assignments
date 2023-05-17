#include "Executive.h"
#include <iostream>

int main(int argc, char** argv)
{ // ./prog filename.txt
	if(argc !=2)
	{
		std::cout << "\nUser should pass exectly two arguments";
	}
	else 
	{
		Executive exec(argv[1]);
			if(exec.validFile)
			{
				exec.execute();
			}
			else
			{
				std::cout << "\nInvalid file";
			
			}
	}
	return(0);
}
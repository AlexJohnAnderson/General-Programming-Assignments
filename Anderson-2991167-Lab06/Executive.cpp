/** -----------------------------------------------------------------------------
 *
 * @file  Executive.cpp
 * @author Alex Anderson 
 * Assignment:   EECS-268 Lab 6
 * @brief This program will time a few of our data structures.
 * @date 07/21/2021
 *
 ---------------------------------------------------------------------------- **/
#include "Executive.h"
#include "Stack.h"
#include "Queue.h"
#include "List.h"
#include <iostream>
#include <time.h>
#include <stdexcept>
Executive::Executive()
{
	
}

Executive::~Executive()
{
	
}
void Executive::timeOps(int op)
{
	if(op == 1)
	{
		int start = 1;
		int limit = 1000;
		Stack* stack = new Stack();
		std::cout << "\nSTACK'S POP DATA:\n";
		while(limit <= 100000)
		{
			for(int i=start; i<=limit; i++)
			{
				stack->push(i);
			}
			start = limit+1;
			limit = limit+1000;
		
			clock_t before, after;
			before = clock();
			stack->pop();
			after = clock();
			clock_t diff = after - before;
			std::cout << std::fixed;
			std::cout << "\nPop took " << (int)diff << " tick(s) and " << ((float)diff/CLOCKS_PER_SEC) << " seconds\n";
		}
	}
	else if(op == 2)
	{
		int start = 1;
		int limit = 1000;
		Stack* stack;
		std::cout << "\nSTACK'S DESTRUCTOR DATA:\n";
		while(limit <= 100000)
		{
			stack = new Stack();
			for(int i=start; i<=limit; i++)
			{
				stack->push(i);
			}
			start = limit+1;
			limit = limit+1000;
			clock_t before, after;
			before = clock();
			delete stack;
			after = clock();
			clock_t diff = after - before;
			std::cout << std::fixed;
			std::cout << "\nDestructor took " << (int)diff << " tick(s) and " << ((float)diff/CLOCKS_PER_SEC) << " seconds\n";
		}
	}
	
	else if(op == 3)
	{
		int start = 1;
		int limit = 1000;
		
		Queue* queue = new Queue();
		std::cout << "\nQUEUE'S ENQUEUE DATA:\n";
		while(limit <= 100000)
		{
			clock_t before, after;
			before = clock();
			
			for(int i=start; i<=limit; i++)
			{
				queue->enqueue(i);
			}
			start = limit+1;
			limit = limit+1000;
		
			after = clock();
			clock_t diff = after - before;
			std::cout << std::fixed;
			std::cout << "\nEnqueue took " << (int)diff << " tick(s) and " << ((float)diff/CLOCKS_PER_SEC) << " seconds\n";
		}
	}
	else if(op == 4)
	{
		int start = 1;
		int limit = 1000;
		int count = 0;
		List* list= new List();
		std::cout << "\nLIST'S GET ENTRY AT INDEX ONE DATA:\n";
		while(limit <= 100000)
		{
			for(int i=start; i<=limit; i++)
			{
				list->insert(count, i);
				count = count+1;
			}
				
			start = limit+1;
			limit = limit+1000;
			
			clock_t before, after;
			before = clock();
			list->getEntry(1);
			after = clock();
			clock_t diff = after - before;
			std::cout << std::fixed;
			std::cout << "\ngetEntry at index 1 took " << (int)diff << " tick(s) and " << ((float)diff/CLOCKS_PER_SEC) << " seconds\n";
		
		}
	}
	else if(op == 5)
	{
		int start = 1;
		int limit = 1000;
		int count = 0;
		List* list = new List();
		std::cout << "\nLIST'S GET ENTRY AT LAST INDEX DATA:\n";
		while(limit <= 100000)
		{
			for(int i=start; i<=limit; i++)
			{
				list->insert(count, i);
				count++;
			}

			start = limit+1;
			limit = limit+1000;
			
			clock_t before, after;
			before = clock();
			list->getEntry(list->getSize()-1);
			after = clock();
			clock_t diff = after - before;
			std::cout << std::fixed;
			std::cout << "\ngetEntry at last index took " << (int)diff << " tick(s) and " << ((float)diff/CLOCKS_PER_SEC) << " seconds\n";
		}
	}
	
	else if(op == 6)
	{
		int start = 1;
		int limit = 1000;
		int count = 0;
		List* list= new List();
		std::cout << "\nPRINTING A LIST'S DATA:\n";
		while(limit <= 100000)
		{
			for(int i=start; i<=limit; i++)
			{
				list->insert(count, i);
				count = count+1;
			}
				
			start = limit+1;
			limit = limit+1000;
			
			clock_t before, after;
			before = clock();
			for(int j=1; j<list->getSize(); j++)
			{
				list->getEntry(j);
			}
			after = clock();
			clock_t diff = after - before;
			std::cout << std::fixed;
			std::cout << "\nPrinting a list's data took " << (int)diff << " tick(s) and " << ((float)diff/CLOCKS_PER_SEC) << " seconds\n";
		
		}
	}
	else
	{
		std::cout << "\nTiming data complete\n";
	}
}

void Executive::run()
{
	for(int i = 1; i<7; i++)
	{
		timeOps(i);
	}
}
/*                                                                    
 * File name:  main.cpp                                                         
 * Author: Alex Anderson                                                       
 * Assignment:   EECS-268 Lab 2                                           
 * Description:  This program will allow the user to input four commands to determine information about an elevator system. 
 * Date:06/23/2021                                                              
 ---------------------------------------------------------------------------- */
#include "Queue.cpp"
#include "Stack.cpp"
#include <fstream>
#include <sstream>

int main() 
{
    std::ifstream fileName;
    fileName.open("input.txt");
    Queue<std::string> q;
    Stack<std::string> s;
    while (fileName)
    {
        std::string line = "";
        getline(fileName, line);
		
        if(line == "") 
		{
            break;
        }

        if (line == "INSPECTION")
        {
            std::cout<<"Elevator status: \n";

            if (s.count() == 0)
            {
                std::cout<<"The elevator is empty.\n";
                std::cout<<"No one is in the elevator.\n";
				
                try
                {
                     std::cout << q.peekFront() << " will be the next person to get on the elevator.\n";
                }
				
                catch(const std::exception& e)
                {
                    std::cout << e.what() << '\n';
                }
            } 
			
			else 
			{
                std::cout<<"The elevator is not empty.\n";

                try
                {
                    std::cout<<s.peek()<<" will be the next person to leave the elevator.\n";
                    std::cout<<q.peekFront()<< " will be the next person to get on the elevator.\n";
                }

                catch(const std::exception& e)
                {
                    std::cerr << e.what() << '\n';
                }
            }
        } 
		
		else if(line == "PICK_UP")
		{ 
            for (int i = 0; i < 7; i++)
            {
                try
                {
                    std::string front = q.peekFront();
                    s.push(front);
                }
                catch(const std::exception& e)
                {
                    std::cout<< e.what() << '\n';
                    break;
                }
                q.dequeue();
            }
        } 
		
		else 
		{
            std::string comand = line.substr(0, line.find(" "));
            std::string argument = line.substr(line.find(" ")+1);
            if (comand == "WAIT") 
			{ 

                q.enqueue(argument);

            }
			else if (comand =="DROP_OFF") 
			{ 
                std::stringstream ss;
                ss<<argument;
                int num;
                ss>>num;
				
                try
                {
                    for (int i=0; i<num; i++)
					{
                        s.pop();
                    }
                }
                catch(const std::exception& e)
                {
                    std::cout << e.what() << '\n';
                }
            }
        }
    }
}
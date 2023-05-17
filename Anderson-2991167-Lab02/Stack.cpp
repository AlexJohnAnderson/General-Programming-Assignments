/*                                                                    
 * File name:  Stack.cpp                                                         
 * Author: Alex Anderson                                                       
 * Assignment:   EECS-268 Lab 2                                           
 * Description:  This program will allow the user to input four commands to determine information about an elevator system. 
 * Date:06/23/2021                                                              
 ---------------------------------------------------------------------------- */
#include <iostream>
#include <stdexcept>
template <typename T>

class StackInterface 
{
	public:
		virtual ~StackInterface(){};
		virtual bool isEmpty() const = 0;
		virtual void push (const T value) = 0;
		virtual void pop() = 0;
		virtual T peek() const = 0;
};

template<typename T>

class Stack : public StackInterface<T> 
{

	private:
		T *m_top;//pointer to top of stack
		int top;
		static const int def_size = 7;//max cap of elevator
	public:
		Stack();//constructor
		bool isEmpty() const;// checking if the stack is empty or not
		//return: bool(t/f)
		void push (const T value); //adding a new node to stack
		//return: none
		void pop();//deleting a node from a stack
		//return: none
		int count() const;//counter
		//return: int
		T peek() const;//viewing the content of the top node
		//return: string consisiting of the front person
		~Stack();//destructor
};

template<typename T>

Stack<T>::Stack() : StackInterface<T>()
{
    m_top = new T[def_size];
    top = -1;
}

template<typename T>
bool Stack<T>::isEmpty() const 
{
    return this->top == -1;
}

template<typename T>

void Stack<T>::push(const T value) 
{
    if (top+1 < def_size)
    {
        top++;
        this->m_top[top] = value;
    } 
	else 
	{
        throw std::runtime_error("stack full!");
    }
}

template<typename T>

void Stack<T>::pop() 
{
    if (!isEmpty())
    {
        top--;
    }
	else 
	{
        throw std::runtime_error ("stack empty!");
    }
}

template<typename T>

T Stack<T>::peek() const 
{
    if (!isEmpty())
    {
        return m_top[top];
    } 
	else 
	{
        throw std::runtime_error ("stack empty!");
    }
}

template<typename T>

int Stack<T>::count() const
{
    return top+1;
}



template<typename T>

Stack<T>::~Stack()
{
    delete[] m_top;
}
/*                                                                    
 * File name:  Queue.cpp                                                         
 * Author: Alex Anderson                                                       
 * Assignment:   EECS-268 Lab 2                                           
 * Description:  This program will allow the user to input four commands to determine information about an elevator system. 
 * Date:06/23/2021                                                              
 ---------------------------------------------------------------------------- */
#include <iostream>
#include <stdexcept>

template <typename T>

class QueueInterface
{
	public:
		virtual ~QueueInterface(){};
		virtual bool isEmpty() const = 0;
		virtual void enqueue(const T value) = 0;
		virtual void dequeue() = 0;
		virtual T peekFront() const = 0;
};

template <class T>

class Queue : public QueueInterface<T>
{
	private:
		static const int def_cap = 10;//max size of elevator queue
		int cap;
		int size;
		T *data;//pointer
	public:
		Queue();//constructor
		
		bool isEmpty() const;//check if queue is empty or not
		//return: bool(t/f)
		
		void enqueue(const T value);//adding a node to the queue
		//return: none
		
		void dequeue();//deleting a node from the queue
		//return: none
		
		T peekFront() const;//view the content of front node
		//return: string consisting of the front person
		
		~Queue();//destructor

};

template<typename T>

Queue<T>::Queue() 
{
    cap = def_cap;
    data = new T[cap];
    size = 0;
}

template<typename T>

bool Queue<T>::isEmpty() const
{
    return size == 0;
}

template<typename T>

void Queue<T>::enqueue(const T value) {

    if (size == cap)
    {
        T *temp = new T[cap *2];
        cap = cap * 2;

        for (int i = 0; i < size; i++)
        {
            temp[i] = data[i];
        }

        data = temp;
    }

    data[size] = value;
    size++;

}

template<typename T>

void Queue<T>::dequeue(){

    if (isEmpty())
    {
        throw std::runtime_error("Queue empty!");
    }
	
    for (int i = 0; i < size-1; i++)
    {
        data[i] = data[i+1];
    }
	
    size--;
}

template<typename T>

T Queue<T>::peekFront() const
{
    if (isEmpty())
    {
        throw std::runtime_error("Queue empty!");
    }
	
    return data[0];
}

template<typename T>
Queue<T>::~Queue()
{

}
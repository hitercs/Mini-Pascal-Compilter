#include "mystack.h"
#include "DataStructure.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "attributes.h"
using namespace std;
template <class T>
MyStack<T>::MyStack()
{
    top = 0;
}
template <class T>
int MyStack<T>::is_empty()
{
    if (top == 0)
        return 1;
    else
        return 0;
}
template <class T>
int MyStack<T>::is_full()
{
    if (top == STACK_SIZE)
        return 1;
    else
        return 0;
}
template <class T>
void MyStack<T>::push(T element)
{
    if (!is_full())
        ARRAY[top++] = element;
    else
    {
        cout << "Error: Stack is full\n" << endl;
        exit(1);
    }
}

template <class T>
T MyStack<T>::top_ele()
{
    if (!MyStack::is_empty())
        return ARRAY[top-1];
    else
        printf("Error: Stack is empty\n");
}
template <class T>
int MyStack<T>::npop(int n)
{
    if (top-n>=0)
    {
        top = top - n;
        return top;
    }
    else
        return -1;
}
template class MyStack<int>;
template class MyStack<Attributes*>;
template class MyStack<HierachSymbols*>;
template class MyStack<GraAttrNode>;

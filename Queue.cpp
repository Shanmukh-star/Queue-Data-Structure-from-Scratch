//Shanmukh
#include<bits/stdc++.h>
using namespace std;
class Elem
{
    private:
      int data;
    public:
      Elem()
      {
        data=-1;
      }
      Elem(int d)
      {
        data=d;
      }
    friend class Queue;
};
class Queue
{
    private:
      Elem* EQueue;
      int first;
      int last;
      int capacity;
    public:
       Queue(int cap=16)
       {
        capacity=cap;
        first=0;last=-1;
        EQueue = new Elem[cap];
       }
       bool isEmpty();
       bool isFull();
       int Size();
       void Pop();
       void Push(Elem);
       void firstData();
       void lastData();
       Elem firstE();
       Elem lastE();
};
bool Queue::isEmpty()
{
    if(first==last+1)
    {
        return true;
    }
    else return false;
}
bool Queue :: isFull()
{
    if(last==capacity-1)
    {
        return true;
    }
    else return false;
}
int Queue::Size()
{
    return last-first+1;
}
void Queue:: Pop()
{
    if(first==0&&last==-1) return;
    EQueue[first].~Elem();
    first++;
}
void Queue:: Push(Elem a)
{
    if(last==capacity-1) return;
    last++;
    EQueue[last]=a;
}
Elem Queue :: firstE()
{
    return EQueue[first];
}
void Queue :: firstData()
{
    cout<<EQueue[first].data<<endl;
}
Elem Queue :: lastE()
{
    return EQueue[last];
}
void Queue :: lastData()
{
    cout<<EQueue[last].data<<endl;
}
int main()
{
    int a;
    Queue ID;
    for(int i=0;i<16;i++)
    {
        cin>>a;
        Elem* e = new Elem(a);
        ID.Push(*e);
    }
}

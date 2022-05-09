#include <iostream>

using namespace std;
class Stackk
{
private:
    int *arr;
    int Size, top;
public:
    Stackk(int s)
    {
        Size = s;
        arr = new int[Size];
        top = -1;
    }

    void Push(int data)
    {
        if(!isFull())
        {
            top++;
            arr[top]=data;
        }
    }

    void Pop()
    {
        if(!isEmpty())
        {
            int temp = top;
            --top;
            if(top >= 0)
                cout<<"The value of "<<arr[top]<<" is the top now\n";
        }
    }

    void display()
    {
        if(isEmpty())
        {
            cout<<"Oops!,Stack Is Empty!\n";
        }
        else
        {
            int temp=top;
            cout<<"The Values of the stack: \n";
            while(temp > -1 )
            {
                cout<<"The Value of index: "<<temp<<" is "<<arr[temp]<<" \n";
                temp--;
            }
        }
    }

    int isEmpty()
    {
        if (top < 0)
        {
            cout<<"Stack Is Empty!\n";
            return 1;
        }
        else
        {
            return 0;
        }
    }

    int isFull()
    {
        if (top <= (Size-1))
        {
            return 0;
        }
        else
        {
            cout<<"Stack Is Full!\n";
            return 1;
        }
    }

};

int main()
{
    Stackk st(3);
    st.isEmpty();
    st.Push(1);
    st.Push(2);
    st.Push(3);
    st.Push(4);
    st.Push(5);
    st.isFull();
    st.display();
    st.Pop();
    st.display();
    st.Pop();
    st.display();
    st.Pop();
    st.display();
    st.Pop();
    st.display();
    st.Pop();

    return 0;
}

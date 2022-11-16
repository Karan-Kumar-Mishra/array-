#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class node
{
    int *arr;
public:
    int top;
    int capacity;
    int lastindex;

    ~node()
    {
        delete arr;
    }
    int isfull()
    {
        if(top==lastindex)
            return 1;
        else
            return 0;
    }
    int find(int key)
    {
        for(int i=0; i<=top; i++)
        {
            if(key==arr[i])
            {
                return i;
            }
        }
    }
    void create(int c)
    {
        top=-1;
        capacity=c;
        lastindex=capacity-1;
        arr= new int[capacity];
    }
    void insertat_last(int data)
    {
        if(isfull())
        {
            cout<<"data base is full"<<endl;
        }
        else
        {
            top++;
            arr[top]=data;
        }
    }
    void insertat_index(int key,int data)
    {
        if(isfull())
        {
            cout<<"data base is full"<<endl;
        }
        else
        {
            for(int i=0; i<=top; i++)
            {
                if(key==arr[i])
                {
                    arr[i]=data;
                    break;
                }
            }
        }
    }
    void insertafter_index(int key,int data)
    {
        if(isfull())
        {
            cout<<"data base is full"<<endl;
        }
        else
        {
            int index=find(key);
            int k=index;

            for(int i=top; i>=index; i--)
            {
                cout<<"cheek"<<endl;
                arr[i+1]=arr[i];
                cout<<"cheek2"<<endl;
            }
            arr[index+1]=data;
            top++;
        }
    }
    void removeat_start()
    {
        for(int i=0; i<=top; i++)
        {
            arr[i]=arr[i+1];
        }
        top--;
    }
    void removeat_last()
    {
        top--;
    }
    void removeat_index(int key)
    {
        int index=find(key);
        for(int i=index; i<=top; i++)
        {
            arr[i]=arr[i+1];
        }
        top--;
    }

    void removeafter_index(int key)
    {

        int index=find(key);

        for(int i=index+1; i<=top; i++)
        {

            arr[i]=arr[i+1];
        }
        top--;
    }

    void insertat_start(int data)
    {
        if(isfull())
        {
            cout<<"data base is full"<<endl;

        }
        else
        {
            for(int i=top; i>=0; i--)
            {
                arr[i+1]=arr[i];
            }
            arr[0]=data;
            top++;
        }
    }


    void display()
    {
        for(int i=0; i<=top; i++)
        {
            cout<<" "<<arr[i];
        }
    }
    void short_data()
    {
        for(int i=0; i<=top; i++)
        {
            for(int j=0; j<top; j++)
            {
                if(arr[j]>arr[j+1])
                {
                    int temp=arr[j+1];
                    arr[j+1]=arr[i];
                    arr[i]=temp;
                }
            }
        }
    }
    void format_data()
    {
        top=-1;
    }

    void max()
    {
        int max;
        int index;
        for(int i=0; i<=top; i++)
        {
            max=arr[i];
            index=i;
            for(int j=0; j<=top; j++)
            {
                if(arr[j]>max)
                {
                    max=arr[j];
                    index=j;
                }
            }
        }
        cout<<"max value is="<<max<<endl;
        cout<<"index of max value is="<<index<<endl;
    }
    void min()
    {

        int min;
        int index;
        for(int i=0; i<=top; i++)
        {
            min=arr[i];
            index=i;
            for(int j=0; j<=top; j++)
            {
                if(arr[j]<min)
                {
                    min=arr[j];
                    index=j;
                }
            }
        }
        cout<<"min value is="<<min<<endl;
        cout<<"index of min value is="<<index<<endl;
    }
    void revers_data()
    {
        for(int i=0; i<=top; i++)
        {
            for(int j=0; j<top; j++)
            {
                if(arr[j]<arr[j+1])
                {
                    int temp=arr[j+1];
                    arr[j+1]=arr[i];
                    arr[i]=temp;
                }
            }
        }
    }
};
int main()
{
    int cmd,cap,data1,data2,data3,data4,index1,index2,index3,index4;
    node s1;

    int k=0;
    while(1)
    {
        clrscr();

        cout<<"||==========================||"<<endl;
        cout<<"          ARRAY ADT         "<<endl;
        cout<<"||==========================||"<<endl;
        cout<<endl;
        cout<<"free space is=>>  "<<(s1.lastindex-s1.top)<<endl;
        cout<<endl;
        cout<<"present data is"<<endl;
        cout<<"->  ";
        if(k>0)
        {
            s1.display();
        }
        cout<<endl<<endl;

        cout<<"1.create array"<<endl;
        cout<<"2.insert at start"<<endl;
        cout<<"3.insert at index"<<endl;
        cout<<"4.insert after index"<<endl;
        cout<<"5.insert at last"<<endl;
        cout<<"6.remove at start"<<endl;
        cout<<"7.remove at index"<<endl;
        cout<<"8.remove after index"<<endl;
        cout<<"9.remove last"<<endl;
        cout<<"10.short "<<endl;
        cout<<"11.display"<<endl;
        cout<<"12.max"<<endl;
        cout<<"13.min"<<endl;
        cout<<"14.format all data"<<endl;
        cout<<"15.revers shorting"<<endl;
        cout<<"16.exit"<<endl;
        cout<<"enter the command=>> ";
        cin>>cmd;
        switch(cmd)
        {
        case 1:
            cout<<"enter the capacity=>"<<endl;
            cin>>cap;
            s1.create(cap);
            break;
        case 2:
            cout<<"enter the data"<<endl;
            cin>>data1;
            s1.insertat_start(data1);
            break;
        case 3:
            cout<<"enter the data=>"<<endl;
            cin>>data2;
            cout<<"enter the index=>"<<endl;
            cin>>index1;
            s1.insertat_index(index1,data2);
            break;
        case 4:
            cout<<"enter the data=>"<<endl;
            cin>>data3;
            cout<<"enter the index=>"<<endl;
            cin>>index2;
            s1.insertafter_index(index2,data3);
            break;
        case 5:
            cout<<"enter the data=>"<<endl;
            cin>>data4;
            s1.insertat_last(data4);
            break;
        case 6:
            s1.removeat_start();
            break;
        case 7:
            cout<<"enter the index=>"<<endl;
            cin>>index3;
            s1.removeat_index(index3);
            break;
        case 8:
            cout<<"enter the index=>"<<endl;
            cin>>index4;
            s1.removeafter_index(index4);
            break;
        case 9:
            s1.removeat_last();
            break;
        case 10:
            s1.short_data();
            break;
        case 11:
            s1.display();
            getch();
            break;
        case 12:
            s1.max();
            getch();
            break;
        case 13:
            s1.min();
            getch();
            break;
        case 14:
            s1.format_data();
            break;
        case 15:
            s1.revers_data();
            break;
        case 16:
            return 0;
            break;
        default:
            cout<<"please enter valid command ?"<<endl;
            break;
        }
        getch();
        k++;
    }



    return 0;
}
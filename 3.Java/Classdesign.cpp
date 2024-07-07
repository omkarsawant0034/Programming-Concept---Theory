#include<iostream>
using namespace std;

class Array
{
    private :
        int *Arr;
        int iLength;
    public:
        Array(int Size)
        {
            iLength = Size;
            Arr = new int [iLength];
        }
        ~Array()
        {
            delete[]Arr;
        }
        void Accept()
        {
            int iCnt = 0;
            cout<<"Enter the elements : "<<endl;
            for(iCnt = 0 ; iCnt < iLength ; iCnt++ )
            {
                cin>>Arr[iCnt];
            }   
        }
        void Dispaly()
        {
            int iCnt = 0;
            cout<<"You entered elements : "<<endl;
            for(iCnt = 0 ; iCnt < iLength ; iCnt++ )
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<endl;   
        }
        
        
};

int main()
{
    Array aobj(5);
    aobj.Accept();
    aobj.Dispaly();

    return 0;
}
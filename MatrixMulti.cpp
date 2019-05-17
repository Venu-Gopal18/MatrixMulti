#include<iostream>
using namespace std;

class MATRIX
{
    private:
    int a[10][10],b[10][10],c[10][10];
    

    public:
    int r1,c1,r2,c2,sum=0;
    int input1();
    int display1();
    int input2();
    int display2();
    int multi();

};

int MATRIX::input1()
{
     cout<<"Enter number of rows and columns of matrix1:  "<<endl;
     cin>>r1>>c1;
    
     cout<<"Enter elements of matrix1:"<<endl;

    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cin>>a[i][j];
        }
        

    }
}

int MATRIX::display1()
{
    cout<<"Matrix 1 is:  "<<endl;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cout<<a[i][j]<<"  "<<;
        }
        cout<<endl;

    }
}

int MATRIX::input2()
{
     cout<<"Enter number of rows and columns of matrix2:  "<<endl;
     cin>>r2>>c2;
    cout<<"Enter elements of matrix2:"<<endl;
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cin>>b[i][j];
        }


    }
    
}

int MATRIX::display2()
{
    cout<<"Matrix 2 is:  "<<endl;

    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cout<<b[i][j]<<"  ";
        }
        cout<<endl;

    }
   
}

int MATRIX::multi()
{
    cout<<"Matrix multiplication will be:"<<endl;

     for (int i = 0; i < r1; i++) 
     {
          for (int j = 0; j < c2; j++) 
          {
              for (int k = 0; k < c1; k++)
              {     
                sum = sum + a[i][k]*b[k][j];
              } 

             c[i][j] = sum;
             sum = 0;
          }
     }

     for(int i =0;i<r1;i++)
     {
         for(int j=0;j<c2;j++)
         {
             cout<<c[i][j]<<"  ";
         }
         cout<<endl;
     }
}




int main()
{
    
    MATRIX obj;
    obj.input1();
    obj.display1();
    obj.input2();
    obj.display2();
    int sum=0;
    
    
    if(obj.c1==obj.r2)
    {
        
         obj.multi();
    }
    else
    {
        cout<<"oopss!!Multiplication not possible";
    }
   
}
#include <iostream>
using namespace std;

int main()
{
    
    int arr[10][10];
    int sarr[10][10];
    int row, col;
    cout<<"enter the row"<<endl;
    cin >> row;
    cout<<"enter column"<<endl;
    cin>>col;
    int count=0;
    int k=0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    
  for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(arr[i][j]!=0)
            {
                count ++;
            }
            
        }
    }
  for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(arr[i][j]!=0)
            {
           sarr[0][k]=i;
           sarr[1][k]=j;
           sarr[2][k]=arr[i][j];
           k++; 
            }

        }
    }

    cout<<endl;
 
  for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < count; j++)
        {
          cout<<sarr[i][j]<<" ";
        }
        cout<<endl;
    }




    return 0;
}
#include <bits/stdc++.h>

using namespace std;

void moveLeft(int array[][4])
{
    for (int i=0;i<4;i++)
    {
        int count=0;
        for (int j=0;j<4;j++)
        {
            if (array[i][j]==0)
            {
                count++;
            }
            else
            {
                if (count!=0)
                {
                    array[i][j-count] = array[i][j];
                    array[i][j]=0;
                }
            }
        }
        count = 0;
        for (int j=0;j<3;j++)
        {
            if (array[i][j] == array[i][j+1])
            {
                array[i][j]*=2;
                array[i][j+1]=0;
            }   
        }
        count = 0;
        for (int j=0;j<4;j++)
        {
            if (array[i][j]==0)
            {
                count++;
            }
            else
            {
                if (count!=0)
                {
                    array[i][j-count] = array[i][j];
                    array[i][j]=0;
                }
            }
        }
    }
}

void moveUp(int array[][4])
{
    for (int j=0;j<4;j++)
    {
        int count=0;
        for (int i=0;i<4;i++)
        {
            if (array[i][j]==0)
            {
                count++;
            }
            else
            {
                if (count!=0)
                {
                    array[i-count][j] = array[i][j];
                    array[i][j]=0;
                }
            }
        }
        count = 0;
        for (int i=0;i<3;i++)
        {
            if (array[i][j] == array[i+1][j])
            {
                array[i][j]*=2;
                array[i+1][j]=0;
            }   
        }
        count = 0;
        for (int i=0;i<4;i++)
        {
            if (array[i][j]==0)
            {
                count++;
            }
            else
            {
                if (count!=0)
                {
                    array[i-count][j] = array[i][j];
                    array[i][j]=0;
                }
            }
        }
    }
}

void moveRight(int array[][4])
{
    for (int i=0;i<4;i++)
    {
        int count=0;
        for (int j=3;j>=0;j--)
        {
            if (array[i][j]==0)
            {
                count++;
            }
            else
            {
                if (count!=0)
                {
                    array[i][j+count] = array[i][j];
                    array[i][j]=0;
                }
            }
        }
        count = 0;
        for (int j=3;j>=1;j--)
        {
            if (array[i][j] == array[i][j-1])
            {
                array[i][j]*=2;
                array[i][j-1]=0;
            }   
        }
        count = 0;
        for (int j=3;j>=0;j--)
        {
            if (array[i][j]==0)
            {
                count++;
            }
            else
            {
                if (count!=0)
                {
                    array[i][j+count] = array[i][j];
                    array[i][j]=0;
                }
            }
        }
    }
}

void moveDown(int array[][4])
{
    for (int j=0;j<4;j++)
    {
        int count=0;
        for (int i=3;i>=0;i--)
        {
            if (array[i][j]==0)
            {
                count++;
            }
            else
            {
                if (count!=0)
                {
                    array[i+count][j] = array[i][j];
                    array[i][j]=0;
                }
            }
        }
        count = 0;
        for (int i=3;i>=1;i--)
        {
            if (array[i][j] == array[i-1][j])
            {
                array[i][j]*=2;
                array[i-1][j]=0;
            }   
        }
        count = 0;
        for (int i=3;i>=0;i--)
        {
            if (array[i][j]==0)
            {
                count++;
            }
            else
            {
                if (count!=0)
                {
                    array[i+count][j] = array[i][j];
                    array[i][j]=0;
                }
            }
        }
    }
}

void display(const int array[][4])
{
    for (int i=0;i<4;i++)
    {
        for (int j=0;j<4;j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}

main ()
{
    int array[4][4];
    for (int i=0;i<4;i++)
    {
        for (int j=0;j<4;j++)
        {
            cin >> array[i][j];
        }
    }
    int move; cin >> move;
    switch(move)
    {
        case 0:
            moveLeft(array);
            break;
        case 1:
            moveUp(array);
            break;
        case 2:
            moveRight(array);
            break;  
        case 3:
            moveDown(array);
            break;
    }
    
    display(array);
}

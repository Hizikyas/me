#include <iostream>
 using namespace std;
 

 int main ()
 {
    int age, list[6], ordered[6];
    cout<<"Enter age of six students : \n";
    for (int i=0;   i<6;   i++)
    {
      cin>>age;
      list[i]=age;
    }

    for (int i = 0; i < 6; i++)
    {
        int count = 0;
        for (int j = 0; j < 6; j++)
        {
            if (list[i] == list[j])
            {
                /* code */
            }
            if (list[i] < list[j])
            {
                count++;
            }  
        }
        
        for (int j = 0; j < 6; j++)
        {
            if (count == j)
                ordered[j] = list[i];
        }
        
        
    }
    
    cout<<"------------------------ordered----------------------------\n";

    for (int i = 0; i < 6; i++)
    {
     cout<<"The order of the ages are : ";
        cout<<ordered[i]<<",  ";
    }
    

    return 0;
 }

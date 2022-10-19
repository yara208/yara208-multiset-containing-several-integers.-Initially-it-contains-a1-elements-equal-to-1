#include <iostream>
#include<sstream>
using namespace std;

int main()
{
    int arr[] = {1,4,1,1};
    int cou=0;
    int cou1=0;
    int sum =0;
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<arrSize; i++)
    {
        sum=sum+arr[i];
        cout<<"a"<<i+1<<"= number of occurrence for number "<<i+1<<" is "<<arr[i]<<endl;

    }

    int arr1[sum];
    cout<<">>Then we have :";
    for(int i=0; i<arrSize; i++)
    {
        cou=cou+1;
        for(int j=0; j<arr[i]; j++)
        {
            cout<<" "<<cou;
            cou1=cou1+1;
            for(int k=cou1; k<sum; k++)
            {
                arr1[cou1]=cou;

            }
        }

    }

    cout<<endl;
    cout<<"This multiset = "<<"(";
    for(int j=0; j<sum; j++)
    {

        cout<<arr1[j]<<",";
    }
    cout<<")"<<endl;

//__________________________________________delete_________________________________________________________________________

    int first_bosi;
    int last_bosi;
    int new_size = arrSize-(last_bosi-first_bosi);
    cout << "\n\n Enter the first and last position, between 1 and " << arrSize << " , of the element to be deleted : ";
    cin >> first_bosi>>last_bosi;

    // --first_bosi;
    //--last_bosi;

    for (int i = first_bosi; i <= last_bosi; i++)
    {
        //--i;
        arr[i] = arr[i + 1];
    }

    for(int j=0; j<new_size; j++)
    {

        cout<<arr[j]<<",";
    }


    return 0;
}

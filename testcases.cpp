#include<iostream>
using namespace std;

void decToBinary(int n)
{
    // array to store binary number
    int binaryNum[32];

    // counter for binary array
    int i = 0;
    while (n > 0)
    {

        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    // printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--)
        cout << binaryNum[j];
}

int main()
{
    int i=3,j=3;
    for(int a=0;a<=i;a++){
        decToBinary(a);
        cout<<endl;
        for(int b=0;b<=j;b++)
        {
            decToBinary(b);
        }
    }
}
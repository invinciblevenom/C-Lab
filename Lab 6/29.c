/*
Q. Write a program (WAP) for matrix multiplication.
Submitted By : Kshitij (20MI61R06) IIT Kharagpur
IDE Used to compile : CodeBlocks

*/
#include"iostream"
using namespace std;

//Function to Multiply the Matrix
int matrixProduct(int A[20][20] , int B[20][20] ,int C[20][20], int r1, int c2, int c1 ){
    int i , j,k;
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
        {
            C[i][j]=0;

            for(k = 0; k < c1; ++k)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    return C[i][j];
}


int main ()
{
start:
system("cls");
int i,j,k;
// Initialize matrix arrays
int A[20][20], B[20][20],C[20][20];
//Initialize Row and Columns of the Matrix array
int r1 , c1;
int r2 , c2;
cout<<"Input Matrix A Order"<<endl;
cout<<"Rows :"; cin>>r1;
cout<<"Column :"; cin>>c1;
cout<<"\n";
cout<<"Input Matrix B Order"<<endl;
cout<<"Rows B :"; cin>>r2;
cout<<"Column :"; cin>>c2;

if (c1 == r2) // Check whether matrix can be multiplied
{
    system("cls");
    cout<<"Enter the Matrix A: "<<endl;

        for (i = 0 ; i <r1 ; ++i )
        {
            for (j = 0 ; j <c1 ; ++j )

                cin>>A[i][j];
        }
    //Display the Matrix A in Tabular form
    cout<<"Matrix A is: \n";
        for (i = 0 ; i < r1 ; ++i)
        {
            cout<<"\n";
                for (j = 0 ; j < c1 ; ++j)
                {
                    cout<<A[i][j]<<" ";
                }
        }
    cout<<"\n";
    cout<<"\nEnter the Matrix B: "<<endl;

        for (i = 0 ; i <r2 ; ++i )
        {
            for (j = 0 ; j <c2 ; ++j )

                cin>>B[i][j];
        }
    //Display the Matrix B in Tabular form
    cout<<"Matrix B is: \n";
        for (i = 0 ; i < r2 ; ++i)
        {
            cout<<"\n";
                for (j = 0 ; j < c2 ; ++j)
                {
                    cout<<B[i][j]<<" ";
                }
        }
    //Multiplication of the Matrix

    matrixProduct(A,B,C,r1,c2,c1);
   // D[20][20] = matrixProduct(A,B,C,r1,c2,c1);
/*    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
        {
            C[i][j]=0;

            for(k = 0; k < c1; ++k)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
*/
    cout<<"\n";
    cout<<"\nResult is: \n";
        for (i = 0 ; i < r1 ; ++i)
        {
            cout<<"\n";
                for (j = 0 ; j < c2 ; ++j)
                {
                    cout<<C[i][j]<<" ";
                }
        }

/*End the program once completed.
cout<<endl;
system("pause");
goto start;
 */
}

else {

    cout << "\nMatrix Cannot be multiplied\n" ;
    cout << "Press any Key to try again\n" ;
    system("pause");
    goto start;
}
return 0;
}

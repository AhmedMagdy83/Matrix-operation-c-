// Course:  CS213 - Programming II  - 2018
// Title:   Assignment I - Task 1 - Problem 1
// Program: CS213-2018-A1-T1-P1
// Purpose: Skeleton code for the student to start working
// Author:  Dr. Mohammad El-Ramly
// Date:    10 August 2018
// Version: 1.0

#include <iostream>
#include <iomanip>
#include <cassert>

using namespace std;

// A structure to store a matrix
struct matrix
{
  int* data;       // Pointer to 1-D array that will simulate matrix
  int row, col;
};

istream& operator>> (istream& in, matrix& mat);// Already implemented
ostream& operator<< (ostream& out, matrix mat);
matrix operator+= (matrix& mat1, matrix mat2); // mat1 changes & return
					    // new matrix with the sum
matrix operator-= (matrix& mat1, matrix mat2); // mat1 changes + return new
					     // matrix with difference
matrix operator+= (matrix& mat, int scalar);   // change mat & return new matrix
matrix operator-= (matrix& mat, int scalar);   // change mat & return new matrix
matrix operator++ (matrix& mat);   	// Add 1 to each element ++mat
matrix operator-- (matrix& mat);


//__________________________________________

int main()
{

    matrix mat1, mat2;
    int x,scalar;

    cout<<"1- Sum"<<endl;
    cout<<"2- Difference"<<endl;
    cout<<"3- Adding scalar"<<endl;
    cout<<"4- Subtracting scalar"<<endl;
    cout<<"5- ++Matrix"<<endl;
    cout<<"6- --Matrix"<<endl;
    cout<<"Press Any other Number or letter to Exit"<<endl;

    for (int z=0;z<=30;z++){

    cout<<endl;

    cout<<"Choose a Number : ";
    cin>>x;

    if(x==1){
    cout<<endl;
    cout<<"Sum of 2 Matrix "<<endl<<endl;
    cout<<"Enter first matrix "<<endl;
    cin>>mat1;
    cout<<mat1;
    cout<<endl<<"Enter your second matrix"<<endl;
    cin>>mat2;
    cout<<mat2;
    cout<<endl;
    mat1+=mat2;
    cout<<endl<<"Sum"<<endl<<endl;
    cout<<mat1;
    }

    else if (x==2){
    cout<<endl;
    cout<<"Difference of 2 Matrix"<<endl<<endl;
    cout<<"Enter first matrix "<<endl;
    cin>>mat1;
    cout<<mat1;
    cout<<endl<<"Enter your second matrix"<<endl;
    cin>>mat2;
    cout<<mat2;
    cout<<endl;
    mat1-=mat2;
    cout<<endl<<"Difference"<<endl<<endl;
    cout<<mat1;
    }

    else if (x==3){
    cout<<endl;
    cout<<"Adding scalar to a Matrix"<<endl<<endl;
    cout<<"Enter a matrix "<<endl;
    cin>>mat1;
    cout<<"Enter a scalar : "; cin>>scalar;
    mat1+=scalar;
    cout<<endl<<"Adding scalar"<<endl<<endl;
    cout<<endl<<mat1<<endl;
    }

    else if (x==4){
    cout<<endl;
    cout<<"Subtracting scalar"<<endl<<endl;
    cout<<"Enter a matrix "<<endl;
    cin>>mat1;
    cout<<"Enter a scalar : "; cin>>scalar;
    mat1-=scalar;
    cout<<endl<<"subtracting scalar"<<endl<<endl;
    cout<<endl<<mat1<<endl;
    }

    else if (x==5){
    cout<<endl;
    cout<<"++Matrix"<<endl;
    cin>>mat1;
    cout<<mat1;
    ++mat1;
    cout<<endl<<"++Matrix"<<endl<<endl;
    cout<<mat1<<endl;
    }

    else if (x==6){
    cout<<endl;
    cout<<"--Matrix"<<endl;
    cin>>mat1;
    cout<<mat1;
    --mat1;
    cout<<endl<<"--Matrix"<<endl<<endl;
    cout<<mat1;
    }

    else {
    cout<<endl<<" Exit"<<endl;
    break;
    }
  }
}



istream& operator>>(istream& in, matrix& mat){
    cout << "\n\nPlease enter rows and columns: ";
    cin >> mat.row >> mat.col;
    mat.data = new int[mat.row * mat.col];
    for(int i = 0 ; i < mat.row ; i++){
        cout << "\nPlease enter data for row " << i+1 << ": ";
        for(int j = 0 ; j < mat.col ; j++){
            cin >> mat.data[i * mat.col + j];
        }
    }
}


ostream& operator<<(ostream& out,matrix mat)
{
    for(int i=0;i<mat.row;i++)
    {
       for(int j=0;j<mat.col;j++){
            out<<mat.data[i*mat.col+j]<< " ";
     }
     out<<endl;
}
return out;

}

matrix operator+= (matrix& mat1, matrix mat2){

    for (int i=0;i<mat1.row*mat1.col;i++){
    mat1.data[i]+=mat2.data[i];
    }
    return mat1;
}

matrix operator-= (matrix& mat1, matrix mat2){

    for (int i=0;i<mat1.row*mat1.col;i++){
    mat1.data[i]-=mat2.data[i];
    }
    return mat1;
}

matrix operator+= (matrix& mat1, int scalar){
    for (int i=0;i<mat1.row*mat1.col;i++){
        mat1.data[i]+=scalar;
    }
    return mat1;
}

matrix operator-= (matrix& mat1, int scalar){
    for (int i=0;i<mat1.row*mat1.col;i++){
    mat1.data[i]-=scalar;
    }
    return mat1;
}

matrix operator++(matrix& mat1){
    for (int i=0;i<mat1.row*mat1.col;i++){
    mat1.data[i]+=1;
    }
    return mat1;

}

matrix operator--(matrix& mat1){
    for (int i=0;i<mat1.row*mat1.col;i++){
    mat1.data[i]-=1;
    }
    return mat1;
}







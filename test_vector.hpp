#pragma once
#include<cmath>
#include"vector.hpp"
template<typename T>
T func(T n){
    return 3*n + 1;
}
template<typename T>
bool isMoreThree(T n){
    if(n >= 3){
        return true;
    }
    else{return false;}
}
void test_int_vector(){
    cout<<"Test int vector"<<endl;
    const int  n1 = 3;
    int elements1[n1] = {1, 2, 1};
    Vector<int> v1(new ListSequence<int>(elements1, n1));
    cout<<"first vector: ";
    v1.Print();
    const int n2 = 3;
    int elements2[n2] = {6, 2, 7};
    Vector<int> v2(new ListSequence<int>(elements2, n2));
    cout<<"Second vector: ";
    v2.Print();
    cout << endl << "OPERATIONS " << endl;
    cout<<"Sum  test"<<"\n";
    (v1 + v2).Print();
    cout<<"Scalar product"<<"\n";
    cout<<v1*v2<<"\n";
    cout<<"norma v1"<<"\n";
    cout<<v1.norma()<<"\n";
    cout<<"map(func) for vector 1:"<<"\n";
    Vector v3 = v1.Map(func);
    v3.Print();
    Vector v4 = v2.Where(isMoreThree);
    cout<<"Where(isMoreThree) for vector 2:"<<"\n";
    v4.Print();
    cout<<"Index Test for v2"<<"\n";
    cout<<v2[1]<<"\n";
}
void test_double_vector(){
    cout<<"Test double vector"<<endl;
    const int  n1 = 4;
    double elements1[n1] = {1.04, 3.21, 5.67, 7.11};
    Vector<double> v1(new ArraySequence<double>(elements1, n1));
    cout<<"first vector: ";
    v1.Print();
    const int n2 = 4;
    double elements2[n2] = {2.12, 1.01, 2.05, 4.11};
    Vector<double> v2(new ArraySequence<double>(elements2, n2));
    cout<<"Second vector: ";
    v2.Print();
    cout << endl << "OPERATIONS " << endl;
    cout<<"Sum  test"<<"\n";
    (v1 + v2).Print();
    cout<<"Scalar product"<<"\n";
    cout<<v1*v2<<"\n";
    cout<<"norma v1"<<"\n";
    cout<<v1.norma()<<"\n";
    cout<<"map(func) for vector 1:"<<"\n";
    Vector v3 = v1.Map(func);
    v3.Print();
    Vector v4 = v2.Where(isMoreThree);
    cout<<"Where(isMoreThree) for vector 2:"<<"\n";
    v4.Print();
    cout<<"Index Test for v2"<<"\n";
    cout<<v2[1]<<"\n";
}


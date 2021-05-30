#pragma once
#include "vector_stl.cpp"
void test_int_stl_vector(){
    cout<<"Int test"<<"\n";
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {5, 6, 1};
    print(v1);
    cout<<"\n";
    print(v2);
    cout<<"\n";
    cout<<"Sum test for int stl vector"<<"\n";
    vector<int> v3 = Sum(v1, v2);
    print(v3);
    cout<<"\n";
    cout<<"Scalar Product Test for int stl vector"<<"\n";
    cout<<scalarproduct(v1, v2)<<'\n';
    cout<<"Norma test for int stl vector v1"<<"\n";
    cout<<norm(v1)<<"\n";
    cout<<"Multscalar test for int stl vector v1"<<"\n";
    vector<int> v4 = multscalar(5, v1);
    print(v4);
    cout<<"\n";
    cout<<"Map test for int stl vector v1"<<"\n";
    vector<int> v5 = Map(v2, func_stl);
    print(v5);
    cout<<"\n";
    cout<<"Where test for int stl vector v2"<<"\n";
    vector<int> v6 = Where(v2, isMoreTwo);
    print(v6);
    cout<<"\n";
}
void test_double_stl_vector(){
    cout<<"Double test"<<"\n";
    vector<double> v1 = {1.05, 2.54, 3.4};
    vector<double> v2 = {5.32, 1.4, 7.22};
    print(v1);
    cout<<"\n";
    print(v2);
    cout<<"\n";
    cout<<"Sum test for double stl vector"<<"\n";
    vector<double> v3 = Sum(v1, v2);
    print(v3);
    cout<<"\n";
    cout<<"Scalar Product Test for double stl vector"<<"\n";
    cout<<scalarproduct(v1, v2)<<'\n';
    cout<<"Norma test for double stl vector v1"<<"\n";
    cout<<norm(v1)<<"\n";
    cout<<"Multscalar test for double stl vector v1"<<"\n";
    vector<double> v4 = multscalar(5.4, v1);
    print(v4);
    cout<<"\n";
    cout<<"Map test for double stl vector v1"<<"\n";
    vector<double> v5 = Map(v2, func_stl);
    print(v5);
    cout<<"\n";
    cout<<"Where test for double stl vector v2"<<"\n";
    vector<double> v6 = Where(v2, isMoreTwo);
    print(v6);
    cout<<"\n";
}


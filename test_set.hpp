#pragma once
#include "Set.hpp"
template<typename T>
T func1(T n){
    return 4*n + 1;
}
template<typename T>
bool isMoreThree1(T n){
    if(n >= 3){
        return true;
    }
    else{return false;}
}
void test_int_set(){
    cout<<"Test int set"<<endl;
    const int  n1 = 3;
    int elements1[n1] = {5, 4, 2};
    Set<int> s1(new ArraySequence<int>(elements1, n1));
    cout<<"first Set: ";
    s1.Print();
    const int n2 = 3;
    int elements2[n2] = {2, 8, 9};
    Set<int> s2(new ArraySequence<int>(elements2, n2));
    cout<<"Second Set: ";
    s2.Print();
    cout << endl << "OPERATIONS " << endl;
    cout<<"Union  test"<<"\n";
    (s1 + s2).Print();
    cout<<"cross"<<"\n";
    Set s5 = s1*s2;
    s5.Print();
    cout<<"map(func) for Set 1:"<<"\n";
    Set s3 = s1.Map(func);
    s3.Print();
    Set s4 = s2.Where(isMoreThree);
    cout<<"Where(isMoreThree) for Set 2:"<<"\n";
    s4.Print();
    cout<<"Index Test for Set 2"<<"\n";
    cout<<s2[1]<<"\n";
}
void test_double_set(){
    cout<<"Test double set"<<endl;
    const int  n1 = 4;
    double elements1[n1] = {1.04, 3.21, 5.67, 7.11};
    Set<double> s1(new ArraySequence<double>(elements1, n1));
    cout<<"first set: ";
    s1.Print();
    const int n2 = 4;
    double elements2[n2] = {2.12, 1.01, 2.05, 4.11};
    Set<double> s2(new ArraySequence<double>(elements2, n2));
    cout<<"Second Set: ";
    s2.Print();
    cout << endl << "OPERATIONS " << endl;
    cout<<"Union test"<<"\n";
    (s1 + s2).Print();
    cout<<"Cross test"<<"\n";
    Set s5 = s1*s2;
    s5.Print();
    cout<<"map(func1) for Set 1:"<<"\n";
    Set s3 = s1.Map(func);
    s3.Print();
    Set s4 = s2.Where(isMoreThree);
    cout<<"Where(isMoreThree) for Set 2:"<<"\n";
    s4.Print();
    cout<<"Index Test for Set 2"<<"\n";
    cout<<s2[1]<<"\n";
}

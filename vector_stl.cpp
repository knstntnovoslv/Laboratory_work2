#pragma once
#include<vector>
#include<iostream>
#include<cmath>
using namespace std;
template<typename T>
T func_stl(T n){
    return 5*n + 1;
}
template<typename T>
bool isMoreTwo(T n){
    if(n >= 2){
        return true;
    }
    else{return false;}
}
template<typename T>
double scalarproduct(const vector<T>& v1,const vector<T>& v2){
    if(v1.size() == v2.size()){
        double sum = 0;
        for(int i = 0; i < v1.size(); i++){
            sum += v1[i]*v2[i];
        }
        return sum;
    }
    else{
        cout<<"Vectors no scalarproduct";
    }

}
template<typename T>
double norm(const vector<T>& v1){
    return sqrt(scalarproduct(v1, v1));
}
template<typename T>
vector<T> multscalar(T scalar, vector<T>& x){
    vector<T> c;
    for(int i = 0; i < x.size(); i++){
        c.push_back(x[i] * scalar);
    }
    return x;
}
template<typename T>
vector<T> Sum(const vector<T>& x, const vector<T>& y){
    if(x.size() == y.size()){
        vector<T> z;
        for(int i = 0; i < x.size(); i++){
            z.push_back(x[i] + y[i]);
        }
        return z;
    }
    else{
        cout<<"vectors no sum";
    }
}
template<typename T>
vector<T> Map(vector<T>& x, T (*function)(T)){
    vector<T> c;
    for(int i = 0; i < x.size(); i++){
        c.push_back(function(x[i]));
    }
    return c;
}
template<typename T>
vector<T> Where(vector<T>& x, bool (*function)(T)){
    vector<T> c;
    for(int i = 0 ; i < x.size(); i++){
        if(function(x[i])){
            c.push_back(x[i]);
        }
    }
    return c;
}
template<typename T>
void print(const vector<T>& x){
    cout<<"{";
    for(int i = 0; i < x.size(); i++){
        if(i < x.size() - 1)
            cout<<x[i]<<","<<" ";
        else{
            cout<<x[i];
        }
    }
    cout<<"}";
}


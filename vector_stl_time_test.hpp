#pragma once
#include "vector_stl.cpp"
#include <cassert>
#include <chrono>
void print_result_stl(const string &Test, int time) {
    int stl_time = time;
    cout << Test << ":" << endl;
    cout<<"Time for stl vector:"<<" "<<stl_time<<" microseconds"<<endl;
}
int create_int_stl_vector(int n){
    auto start_time = chrono::steady_clock::now();
    vector<int> c;
    for(int i = 0; i < n; i++){
        c.push_back(i);
    }
    auto end_time = chrono::steady_clock::now();
    int stl_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    return stl_time;
}
int create_double_stl_vector(int n){
    auto start_time = chrono::steady_clock::now();
    vector<double> c;
    for(int i = 0; i < n; i++){
        c.push_back(i+1.25);
    }
    auto end_time = chrono::steady_clock::now();
    int stl_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    return stl_time;
}
int test_get_stl_int(int n){
    vector<int> c;
    for(int i = 0; i < n; i++){
        c.push_back(i + 1);
    }
    auto start_time = chrono::steady_clock::now();
    int a = c[n-2];
    auto end_time = chrono::steady_clock::now();
    int stl_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    return stl_time;
}
int test_get_stl_double(int n){
    vector<double> c;
    for(int i = 0; i < n; i++){
        c.push_back(i + 1.25);
    }
    auto start_time = chrono::steady_clock::now();
    int a = c[n-2];
    auto end_time = chrono::steady_clock::now();
    int stl_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    return stl_time;
}
int test_append_stl_int(int n){
    vector<int> c;
    for(int i = 0; i < n - 1; i++){
        c.push_back(i + 1);
    }
    auto start_time = chrono::steady_clock::now();
    c.push_back(n - 1);
    auto end_time = chrono::steady_clock::now();
    int stl_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    return stl_time;
}
int test_append_stl_double(int n){
    vector<double> c;
    for(int i = 0; i < n - 1; i++){
        c.push_back(i + 1.25);
    }
    auto start_time = chrono::steady_clock::now();
    c.push_back(n - 0.3);
    auto end_time = chrono::steady_clock::now();
    int stl_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    return stl_time;
}
int test_prepend_stl_int(int n){
    vector<int> c;
    for(int i = 0; i < n - 1; i++){
        c.push_back(i + 1);
    }
    auto start_time = chrono::steady_clock::now();
    c.insert(c.begin(), n - 2);
    auto end_time = chrono::steady_clock::now();
    int stl_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    return stl_time;
}
int test_prepend_stl_double(int n){
    vector<double> c;
    for(int i = 0; i < n - 2; i++){
        c.push_back(i + 1.25);
    }
    auto start_time = chrono::steady_clock::now();
    c.insert(c.begin(), n - 2.25);
    auto end_time = chrono::steady_clock::now();
    int stl_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    return stl_time;
}
int test_insert_stl_int(int n){
    vector<int> c;
    for(int i = 0; i < n - 1; i++){
        c.push_back(i + 1);
    }
    auto start_time = chrono::steady_clock::now();
    c.insert(c.begin(), n - 4);
    auto end_time = chrono::steady_clock::now();
    int stl_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    return stl_time;
}
int test_insert_stl_double(int n){
    vector<double> c;
    for(int i = 0; i < n - 1; i++){
        c.push_back(i + 1.25);
    }
    auto start_time = chrono::steady_clock::now();
    c.insert(c.begin(), n - 4.3);
    auto end_time = chrono::steady_clock::now();
    int stl_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    return stl_time;
}
int test_sum_int_stl_vector(int n){
    vector<int> c;
    for(int i = 0; i < n; i++){
        c.push_back(i + 1);
    }
    vector<int> d;
    for(int i = 0; i < n; i++){
        d.push_back(i + 1);
    }
    auto start_time = chrono::steady_clock::now();
    vector<int> p = Sum(c, d);
    auto end_time = chrono::steady_clock::now();
    int stl_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    return stl_time;
}
int test_sum_double_stl_vector(int n){
    vector<double> c;
    for(int i = 0; i < n; i++){
        c.push_back(i + 1.25);
    }
    vector<double> d;
    for(int i = 0; i < n; i++){
        d.push_back(i + 1.25);
    }
    auto start_time = chrono::steady_clock::now();
    vector<double> p = Sum(c, d);
    auto end_time = chrono::steady_clock::now();
    int stl_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    return stl_time;
}
int test_scalarproduct_int_stl_vector(int n){
    vector<int> c;
    for(int i = 0; i < n; i++){
        c.push_back(i + 1);
    }
    vector<int> d;
    for(int i = 0; i < n; i++){
        d.push_back(i + 1);
    }
    auto start_time = chrono::steady_clock::now();
    double p = scalarproduct(c, d);
    auto end_time = chrono::steady_clock::now();
    int stl_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    return stl_time;
}
int test_scalarproduct_double_stl_vector(int n){
    vector<double> c;
    for(int i = 0; i < n; i++){
        c.push_back(i + 1.25);
    }
    vector<double> d;
    for(int i = 0; i < n; i++){
        d.push_back(i + 1.25);
    }
    auto start_time = chrono::steady_clock::now();
    double p = scalarproduct(c, d);
    auto end_time = chrono::steady_clock::now();
    int stl_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    return stl_time;
}
int test_norma_int_stl_vector(int n){
    vector<int> c;
    for(int i = 0; i < n; i++){
        c.push_back(i + 1);
    }
    auto start_time = chrono::steady_clock::now();
    double p = norm(c);
    auto end_time = chrono::steady_clock::now();
    int stl_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    return stl_time;
}
int test_norma_double_stl_vector(int n){
    vector<double> c;
    for(int i = 0; i < n; i++){
        c.push_back(i + 1.25);
    }
    auto start_time = chrono::steady_clock::now();
    double p = norm(c);
    auto end_time = chrono::steady_clock::now();
    int stl_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    return stl_time;
}
int test_multscalar_int_stl_vector(int n){
    vector<int> c;
    for(int i = 0; i < n; i++){
        c.push_back(i + 1);
    }
    auto start_time = chrono::steady_clock::now();
    vector<int> d = multscalar(5, c);
    auto end_time = chrono::steady_clock::now();
    int stl_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    return stl_time;
}
int test_multscalar_double_stl_vector(int n){
    vector<double> c;
    for(int i = 0; i < n; i++){
        c.push_back(i + 1.25);
    }
    auto start_time = chrono::steady_clock::now();
    vector<double> d = multscalar(5.1, c);
    auto end_time = chrono::steady_clock::now();
    int stl_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    return stl_time;
}
int test_Map_int_stl_vector(int n){
    vector<int> c;
    for(int i = 0; i < n; i++){
        c.push_back(i + 1);
    }
    auto start_time = chrono::steady_clock::now();
    vector<int> d = Map(c, func_stl);
    auto end_time = chrono::steady_clock::now();
    int stl_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    return stl_time;
}
int test_Map_double_stl_vector(int n){
    vector<double> c;
    for(int i = 0; i < n; i++){
        c.push_back(i + 1.25);
    }
    auto start_time = chrono::steady_clock::now();
    vector<double> d = Map(c, func_stl);
    auto end_time = chrono::steady_clock::now();
    int stl_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    return stl_time;
}
int test_Where_int_stl_vector(int n){
    vector<int> c;
    for(int i = 0; i < n; i++){
        c.push_back(i + 1);
    }
    auto start_time = chrono::steady_clock::now();
    vector<int> d = Where(c, isMoreTwo);
    auto end_time = chrono::steady_clock::now();
    int stl_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    return stl_time;
}
int test_Where_double_stl_vector(int n){
    vector<double> c;
    for(int i = 0; i < n; i++){
        c.push_back(i + 1.25);
    }
    auto start_time = chrono::steady_clock::now();
    vector<double> d = Where(c, isMoreTwo);
    auto end_time = chrono::steady_clock::now();
    int stl_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    return stl_time;
}


#pragma once

#include <cassert>
#include <chrono>
#include "vector.hpp"
void print_result(const string &Test, pair<int, int> times) {
    int array_time = times.first;
    int list_time = times.second;
    cout << Test << ":" << endl;
    if (array_time > list_time) cout << "Linked List faster than Dynamic Array" << endl;
    else if (list_time > array_time) cout << "Dynamic array faster than Linked List" << endl;
    else cout << "Linked List as fast as Dynamic Array" << endl;

    cout << "Dynamic Array: " << array_time << " microseconds" << endl;
    cout << "Linked list: " << list_time << " microseconds" << endl;
}
pair<int, int> test_create_int_vector(int n) {
    int elements[n];
    for (int i = 0; i < n; i++) {
        elements[i] = i + 1;
    }

    auto start_time = chrono::steady_clock::now();
    Vector<int> array_vector(new ArraySequence<int>(elements, n));
    auto end_time = chrono::steady_clock::now();
    int array_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();

    start_time = chrono::steady_clock::now();
    Vector<int> list_vector(new ListSequence<int>(elements, n));
    end_time = chrono::steady_clock::now();
    int list_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();



    return {array_time, list_time};
}
pair<int, int> test_create_double_vector(int n) {
    double elements[n];
    for (int i = 0; i < n; i++) {
        elements[i] = i + 1;
    }

    auto start_time = chrono::steady_clock::now();
    Vector<double> array_vector(new ArraySequence<double>(elements, n));
    auto end_time = chrono::steady_clock::now();
    int array_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();

    start_time = chrono::steady_clock::now();
    Vector<double> list_vector(new ListSequence<double>(elements, n));
    end_time = chrono::steady_clock::now();
    int list_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();



    return {array_time, list_time};
}
pair<int, int> test_get_int(const int n) {
    int elements[n];
    for (int i = 0; i < n; i++) {
        elements[i] = i + 1;
    }

    Vector<int> array_vector(new ArraySequence<int>(elements, n));
    Vector<int> list_vector(new ListSequence<int>(elements, n));

    auto start_time = chrono::steady_clock::now();
    for (int i = 0; i < n; i++) {
        int item = array_vector[i];
    }
    auto end_time = chrono::steady_clock::now();
    int array_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();

    start_time = chrono::steady_clock::now();
    for (int i = 0; i < n; i++) {
        int item = list_vector[i];
    }
    end_time = chrono::steady_clock::now();
    int list_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();

    return {array_time, list_time};
}
pair<int, int> test_get_double(const int n)   {
    double elements[n];
    for (int i = 0; i < n; i++) {
        elements[i] = i + 1;
    }

    Vector<double> array_vector(new ArraySequence<double>(elements, n));
    Vector<double> list_vector(new ListSequence<double>(elements, n));

    auto start_time = chrono::steady_clock::now();
    for (int i = 0; i < n; i++) {
        double item = array_vector[i];
    }
    auto end_time = chrono::steady_clock::now();
    int array_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();

    start_time = chrono::steady_clock::now();
    for (int i = 0; i < n; i++) {
        double item = list_vector[i];
    }
    end_time = chrono::steady_clock::now();
    int list_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();

    return {array_time, list_time};

}
pair<int, int> test_append_int(int n) {
    Vector<int> array_vector(new ArraySequence<int>());
    Vector<int> list_vector(new ListSequence<int>());

    auto start_time = chrono::steady_clock::now();
    for (int i = 0; i < n; i++) {
        int item = i;
        array_vector.Append(item);
    }
    auto end_time = chrono::steady_clock::now();
    int array_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();

    start_time = chrono::steady_clock::now();
    for (int i = 0; i < n; i++) {
        int item = i;
        list_vector.Append(item);
    }
    end_time = chrono::steady_clock::now();
    int list_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();



    return {array_time, list_time};
}
pair<int, int> test_prepend_int(int n) {
    Vector<int> array_vector(new ArraySequence<int>());
    Vector<int> list_vector(new ListSequence<int>());

    auto start_time = chrono::steady_clock::now();
    for (int i = 0; i < n; i++) {
        int item = i;
        array_vector.Prepend(item);
    }
    auto end_time = chrono::steady_clock::now();
    int array_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();

    start_time = chrono::steady_clock::now();
    for (int i = 0; i < n; i++) {
        int item = i;
        list_vector.Prepend(item);
    }
    end_time = chrono::steady_clock::now();
    int list_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();



    return {array_time, list_time};
}
pair<int, int>  test_append_double(int n) {
    Vector<double> array_vector(new ArraySequence<double>());
    Vector<double> list_vector(new ListSequence<double>());

    auto start_time = chrono::steady_clock::now();
    for (int i = 0; i < n; i++) {
        double item = i;
        array_vector.Append(item);
    }
    auto end_time = chrono::steady_clock::now();
    int array_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();

    start_time = chrono::steady_clock::now();
    for (int i = 0; i < n; i++) {
        double item = i;
        list_vector.Append(item);
    }
    end_time = chrono::steady_clock::now();
    int list_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();



    return {array_time, list_time};
}
pair<int, int>  test_Prepend_double(int n) {
    Vector<double> array_vector(new ArraySequence<double>());
    Vector<double> list_vector(new ListSequence<double>());

    auto start_time = chrono::steady_clock::now();
    for (int i = 0; i < n; i++) {
        double item = i;
        array_vector.Prepend(item);
    }
    auto end_time = chrono::steady_clock::now();
    int array_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();

    start_time = chrono::steady_clock::now();
    for (int i = 0; i < n; i++) {
        double item = i;
        list_vector.Prepend(item);
    }
    end_time = chrono::steady_clock::now();
    int list_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();



    return {array_time, list_time};
}
pair<int, int> test_insert_int(int n){
    Vector<int> array_vector(new ArraySequence<int>());
    Vector<int> list_vector(new ListSequence<int>());

    auto start_time = chrono::steady_clock::now();
    for (int i = 0; i < n; i++) {
        int item = i + 1;
        array_vector.InsertAt(item, array_vector.GetSize() / 2);
    }
    auto end_time = chrono::steady_clock::now();
    int array_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();

    start_time = chrono::steady_clock::now();
    for (int i = 0; i < n; i++) {
        int item = i + 1;
        list_vector.InsertAt(item, list_vector.GetSize() / 2);
    }
    end_time = chrono::steady_clock::now();
    int list_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();



    return {array_time, list_time};
}
pair<int, int> test_insert_double(int n){
    Vector<double> array_vector(new ArraySequence<double>());
    Vector<double> list_vector(new ListSequence<double>());

    auto start_time = chrono::steady_clock::now();
    for (int i = 0; i < n; i++) {
        double item = i + 1;
        array_vector.InsertAt(item, array_vector.GetSize() / 2);
    }
    auto end_time = chrono::steady_clock::now();
    int array_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();

    start_time = chrono::steady_clock::now();
    for (int i = 0; i < n; i++) {
        double item = i + 1;
        list_vector.InsertAt(item, list_vector.GetSize() / 2);
    }
    end_time = chrono::steady_clock::now();
    int list_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();



    return {array_time, list_time};
}
pair<int, int> test_sum_int_vector(int n){
    int elements[n];
    for (int i = 0; i < n; i++) {
        elements[n] = i;
    }

    Vector<int> array_vector(new ArraySequence<int>(elements, n));
    Vector<int> list_vector(new ListSequence<int>(elements, n));

    auto start_time = chrono::steady_clock::now();
    array_vector = array_vector + array_vector;
    auto end_time = chrono::steady_clock::now();
    int array_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();

    start_time = chrono::steady_clock::now();
    list_vector = list_vector + list_vector;
    end_time = chrono::steady_clock::now();
    int list_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();



    return {array_time, list_time};
}
pair<int, int> test_sum_double_vector(int n){
    double elements[n];
    for (int i = 0; i < n; i++) {
        elements[n] = i;
    }

    Vector<double> array_vector(new ArraySequence<double>(elements, n));
    Vector<double> list_vector(new ListSequence<double>(elements, n));

    auto start_time = chrono::steady_clock::now();
    array_vector = array_vector + array_vector;
    auto end_time = chrono::steady_clock::now();
    int array_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();

    start_time = chrono::steady_clock::now();
    list_vector = list_vector + list_vector;
    end_time = chrono::steady_clock::now();
    int list_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();



    return {array_time, list_time};
}
pair<int, int> test_scalarproduct_int(int n){
    int elements[n];
    for (int i = 0; i < n; i++) {
        elements[n] = i;
    }

    Vector<int> array_vector(new ArraySequence<int>(elements, n));
    Vector<int> list_vector(new ListSequence<int>(elements, n));

    auto start_time = chrono::steady_clock::now();
    double array_scalar = array_vector * array_vector;
    auto end_time = chrono::steady_clock::now();
    int array_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();

    start_time = chrono::steady_clock::now();
    double list_scalar = list_vector * list_vector;
    end_time = chrono::steady_clock::now();
    int list_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();



    return {array_time, list_time};
}
pair<int, int> test_scalarproduct_double(int n){
    double elements[n];
    for (int i = 0; i < n; i++) {
        elements[n] = i;
    }

    Vector<double> array_vector(new ArraySequence<double>(elements, n));
    Vector<double> list_vector(new ListSequence<double>(elements, n));

    auto start_time = chrono::steady_clock::now();
    double array_scalar = array_vector * array_vector;
    auto end_time = chrono::steady_clock::now();
    int array_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();

    start_time = chrono::steady_clock::now();
    double list_scalar = list_vector*list_vector;
    end_time = chrono::steady_clock::now();
    int list_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();


    return {array_time, list_time};
}
pair<int, int> test_norma_int(int n){
    int elements[n];
    for (int i = 0; i < n; i++) {
        elements[n] = i;
    }

    Vector<int> array_vector(new ArraySequence<int>(elements, n));
    Vector<int> list_vector(new ListSequence<int>(elements, n));

    auto start_time = chrono::steady_clock::now();
    double array_norma = array_vector.norma();
    auto end_time = chrono::steady_clock::now();
    int array_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();

    start_time = chrono::steady_clock::now();
    double list_norma = list_vector.norma();
    end_time = chrono::steady_clock::now();
    int list_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();



    return {array_time, list_time};

}
pair<int, int> test_norma_double(int n){
    double elements[n];
    for (int i = 0; i < n; i++) {
        elements[n] = i;
    }

    Vector<double> array_vector(new ArraySequence<double>(elements, n));
    Vector<double> list_vector(new ListSequence<double>(elements, n));

    auto start_time = chrono::steady_clock::now();
    double array_norma = array_vector.norma();
    auto end_time = chrono::steady_clock::now();
    int array_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();

    start_time = chrono::steady_clock::now();
    double list_norma = list_vector.norma();
    end_time = chrono::steady_clock::now();
    int list_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();


    return {array_time, list_time};
}
pair<int, int> test_multscalar_int(int n){
    int elements[n];
    for (int i = 0; i < n; i++) {
        elements[n] = i;
    }

    Vector<int> array_vector(new ArraySequence<int>(elements, n));
    Vector<int> list_vector(new ListSequence<int>(elements, n));

    auto start_time = chrono::steady_clock::now();
    array_vector = array_vector.multscalar(1000);
    auto end_time = chrono::steady_clock::now();
    int array_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();

    start_time = chrono::steady_clock::now();
    list_vector = list_vector.multscalar(1000);
    end_time = chrono::steady_clock::now();
    int list_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();



    return {array_time, list_time};
}
pair<int, int> test_multscalar_double(int n) {
    double elements[n];
    for (int i = 0; i < n; i++) {
        elements[n] = i;
    }

        Vector<double> array_vector(new ArraySequence<double>(elements, n));
        Vector<double> list_vector(new ListSequence<double>(elements, n));

        auto start_time = chrono::steady_clock::now();
        array_vector = array_vector.multscalar(1000);
        auto end_time = chrono::steady_clock::now();
        int array_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();

        start_time = chrono::steady_clock::now();
        list_vector = list_vector.multscalar(1000);
        end_time = chrono::steady_clock::now();
        int list_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();



        return {array_time, list_time};

    }
pair<int, int> test_Map_int(int n){
    int elements[n];
    for (int i = 0; i < n; i++) {
        elements[n] = i;
    }

    Vector<int> array_vector(new ArraySequence<int>(elements, n));
    Vector<int> list_vector(new ListSequence<int>(elements, n));

    auto start_time = chrono::steady_clock::now();
    Vector<int> array_Map = array_vector.Map(func);
    auto end_time = chrono::steady_clock::now();
    int array_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();

    start_time = chrono::steady_clock::now();
    Vector<int> list_Map = list_vector.Map(func);
    end_time = chrono::steady_clock::now();
    int list_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();



    return {array_time, list_time};

}
pair<int, int> test_Map_double(int n){
    double elements[n];
    for (int i = 0; i < n; i++) {
        elements[n] = i;
    }

    Vector<double> array_vector(new ArraySequence<double>(elements, n));
    Vector<double> list_vector(new ListSequence<double>(elements, n));

    auto start_time = chrono::steady_clock::now();
    Vector<double> array_Map = array_vector.Map(func);
    auto end_time = chrono::steady_clock::now();
    int array_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();

    start_time = chrono::steady_clock::now();
    Vector<double> list_Map = list_vector.Map(func);
    end_time = chrono::steady_clock::now();
    int list_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();


    return {array_time, list_time};

}
pair<int, int> test_Where_int(int n){
    int elements[n];
    for (int i = 0; i < n; i++) {
        elements[n] = i;
    }

    Vector<int> array_vector(new ArraySequence<int>(elements, n));
    Vector<int> list_vector(new ListSequence<int>(elements, n));

    auto start_time = chrono::steady_clock::now();
    Vector<int> array_Where = array_vector.Where(isMoreThree);
    auto end_time = chrono::steady_clock::now();
    int array_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();

    start_time = chrono::steady_clock::now();
    Vector<int> list_where = list_vector.Where(isMoreThree);
    end_time = chrono::steady_clock::now();
    int list_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();


    return {array_time, list_time};

}
pair<int, int> test_Where_double(int n){
    double elements[n];
    for (int i = 0; i < n; i++) {
        elements[n] = i;
    }

    Vector<double> array_vector(new ArraySequence<double>(elements, n));
    Vector<double> list_vector(new ListSequence<double>(elements, n));

    auto start_time = chrono::steady_clock::now();
    Vector<double> array_Where = array_vector.Where(isMoreThree);
    auto end_time = chrono::steady_clock::now();
    int array_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();

    start_time = chrono::steady_clock::now();
    Vector<double> list_where = list_vector.Where(isMoreThree);
    end_time = chrono::steady_clock::now();
    int list_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();


    return {array_time, list_time};

}

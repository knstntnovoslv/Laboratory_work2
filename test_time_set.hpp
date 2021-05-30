#pragma once

#include <cassert>
#include <chrono>
#include "Set.hpp"
void print_result_set(const string &Test, pair<int, int> times) {
    int array_time = times.first;
    int list_time = times.second;
    cout << Test << ":" << endl;
    if (array_time > list_time) cout << "Linked List faster than Dynamic Array" << endl;
    else if (list_time > array_time) cout << "Dynamic array faster than Linked List" << endl;
    else cout << "Linked List as fast as Dynamic Array" << endl;

    cout << "Dynamic Array: " << array_time << " microseconds" << endl;
    cout << "Linked list: " << list_time << " microseconds" << endl;
}
pair<int, int> test_create_int_set(int n) {
    int elements[n];
    for (int i = 0; i < n; i++) {
        elements[i] = i + 1;
    }

    auto start_time = chrono::steady_clock::now();
    Set<int> array_Set(new ArraySequence<int>(elements, n));
    auto end_time = chrono::steady_clock::now();
    int array_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();

    start_time = chrono::steady_clock::now();
    Set<int> list_Set(new ListSequence<int>(elements, n));
    end_time = chrono::steady_clock::now();
    int list_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();



    return {array_time, list_time};
}
pair<int, int> test_create_double_set(int n) {
    double elements[n];
    for (int i = 0; i < n; i++) {
        elements[i] = i + 1;
    }

    auto start_time = chrono::steady_clock::now();
    Set<double> array_set(new ArraySequence<double>(elements, n));
    auto end_time = chrono::steady_clock::now();
    int array_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();

    start_time = chrono::steady_clock::now();
    Set<double> list_set(new ListSequence<double>(elements, n));
    end_time = chrono::steady_clock::now();
    int list_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();



    return {array_time, list_time};
}
pair<int, int> test_get_int_set(const int n) {
    int elements[n];
    for (int i = 0; i < n; i++) {
        elements[i] = i + 1;
    }

    Set<int> array_set(new ArraySequence<int>(elements, n));
    Set<int> list_set(new ListSequence<int>(elements, n));

    auto start_time = chrono::steady_clock::now();
    for (int i = 0; i < n; i++) {
        int item = array_set[i];
    }
    auto end_time = chrono::steady_clock::now();
    int array_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();

    start_time = chrono::steady_clock::now();
    for (int i = 0; i < n; i++) {
        int item = list_set[i];
    }
    end_time = chrono::steady_clock::now();
    int list_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();

    return {array_time, list_time};
}
pair<int, int> test_get_double_set(const int n)   {
    double elements[n];
    for (int i = 0; i < n; i++) {
        elements[i] = i + 1;
    }

    Set<double> array_set(new ArraySequence<double>(elements, n));
    Set<double> list_set(new ListSequence<double>(elements, n));

    auto start_time = chrono::steady_clock::now();
    for (int i = 0; i < n; i++) {
        double item = array_set[i];
    }
    auto end_time = chrono::steady_clock::now();
    int array_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();

    start_time = chrono::steady_clock::now();
    for (int i = 0; i < n; i++) {
        double item = list_set[i];
    }
    end_time = chrono::steady_clock::now();
    int list_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();

    return {array_time, list_time};

}
pair<int, int> test_append_int_set(int n) {
    Set<int> array_set(new ArraySequence<int>());
    Vector<int> list_set(new ListSequence<int>());

    auto start_time = chrono::steady_clock::now();
    for (int i = 0; i < n; i++) {
        int item = i;
        array_set.Append(item);
    }
    auto end_time = chrono::steady_clock::now();
    int array_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();

    start_time = chrono::steady_clock::now();
    for (int i = 0; i < n; i++) {
        int item = i;
        list_set.Append(item);
    }
    end_time = chrono::steady_clock::now();
    int list_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();



    return {array_time, list_time};
}
pair<int, int> test_prepend_int_set(int n) {
    Set<int> array_set(new ArraySequence<int>());
    Set<int> list_set(new ListSequence<int>());

    auto start_time = chrono::steady_clock::now();
    for (int i = 0; i < n; i++) {
        int item = i;
        array_set.Prepend(item);
    }
    auto end_time = chrono::steady_clock::now();
    int array_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();

    start_time = chrono::steady_clock::now();
    for (int i = 0; i < n; i++) {
        int item = i;
        list_set.Prepend(item);
    }
    end_time = chrono::steady_clock::now();
    int list_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();



    return {array_time, list_time};
}
pair<int, int>  test_append_double_set(int n) {
    Set<double> array_set(new ArraySequence<double>());
    Set<double> list_set(new ListSequence<double>());

    auto start_time = chrono::steady_clock::now();
    for (int i = 0; i < n; i++) {
        double item = i;
        array_set.Append(item);
    }
    auto end_time = chrono::steady_clock::now();
    int array_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();

    start_time = chrono::steady_clock::now();
    for (int i = 0; i < n; i++) {
        double item = i;
        list_set.Append(item);
    }
    end_time = chrono::steady_clock::now();
    int list_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();



    return {array_time, list_time};
}
pair<int, int>  test_Prepend_double_set(int n) {
    Set<double> array_set(new ArraySequence<double>());
    Set<double> list_set(new ListSequence<double>());

    auto start_time = chrono::steady_clock::now();
    for (int i = 0; i < n; i++) {
        double item = i;
        array_set.Prepend(item);
    }
    auto end_time = chrono::steady_clock::now();
    int array_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();

    start_time = chrono::steady_clock::now();
    for (int i = 0; i < n; i++) {
        double item = i;
        list_set.Prepend(item);
    }
    end_time = chrono::steady_clock::now();
    int list_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();



    return {array_time, list_time};
}
pair<int, int> test_insert_int_set(int n){
    Set<int> array_set(new ArraySequence<int>());
    Set<int> list_set(new ListSequence<int>());

    auto start_time = chrono::steady_clock::now();
    for (int i = 0; i < n; i++) {
        int item = i + 1;
        array_set.InsertAt(item, array_set.GetSize() / 2);
    }
    auto end_time = chrono::steady_clock::now();
    int array_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();

    start_time = chrono::steady_clock::now();
    for (int i = 0; i < n; i++) {
        int item = i + 1;
        list_set.InsertAt(item, list_set.GetSize() / 2);
    }
    end_time = chrono::steady_clock::now();
    int list_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();



    return {array_time, list_time};
}
pair<int, int> test_insert_double_set(int n){
    Set<double> array_set(new ArraySequence<double>());
    Set<double> list_set(new ListSequence<double>());

    auto start_time = chrono::steady_clock::now();
    for (int i = 0; i < n; i++) {
        double item = i + 1;
        array_set.InsertAt(item, array_set.GetSize() / 2);
    }
    auto end_time = chrono::steady_clock::now();
    int array_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();

    start_time = chrono::steady_clock::now();
    for (int i = 0; i < n; i++) {
        double item = i + 1;
        list_set.InsertAt(item, list_set.GetSize() / 2);
    }
    end_time = chrono::steady_clock::now();
    int list_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();



    return {array_time, list_time};
}
pair<int, int> test_sum_int_set(int n){
    int elements[n];
    for (int i = 0; i < n; i++) {
        elements[n] = i;
    }

    Set<int> array_set(new ArraySequence<int>(elements, n));
    Set<int> list_set(new ListSequence<int>(elements, n));

    auto start_time = chrono::steady_clock::now();
    array_set = array_set + array_set;
    auto end_time = chrono::steady_clock::now();
    int array_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();

    start_time = chrono::steady_clock::now();
    list_set = list_set + list_set;
    end_time = chrono::steady_clock::now();
    int list_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();



    return {array_time, list_time};
}
pair<int, int> test_sum_double_set(int n){
    double elements[n];
    for (int i = 0; i < n; i++) {
        elements[n] = i;
    }

    Set<double> array_set(new ArraySequence<double>(elements, n));
    Set<double> list_set(new ListSequence<double>(elements, n));

    auto start_time = chrono::steady_clock::now();
    array_set = array_set + array_set;
    auto end_time = chrono::steady_clock::now();
    int array_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();

    start_time = chrono::steady_clock::now();
    list_set = list_set + list_set;
    end_time = chrono::steady_clock::now();
    int list_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();



    return {array_time, list_time};
}
pair<int, int> test_cross_int(int n){
    int elements[n];
    for (int i = 0; i < n; i++) {
        elements[n] = i;
    }

    Set<int> array_set(new ArraySequence<int>(elements, n));
    Set<int> list_set(new ListSequence<int>(elements, n));

    auto start_time = chrono::steady_clock::now();
    Set<int> array_cross = array_set * array_set;
    auto end_time = chrono::steady_clock::now();
    int array_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();

    start_time = chrono::steady_clock::now();
    Set<int> list_cross = list_set * list_set;
    end_time = chrono::steady_clock::now();
    int list_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();



    return {array_time, list_time};
}
pair<int, int> test_cross_double(int n){
    double elements[n];
    for (int i = 0; i < n; i++) {
        elements[n] = i;
    }

    Set<double> array_set(new ArraySequence<double>(elements, n));
    Set<double> list_set(new ListSequence<double>(elements, n));

    auto start_time = chrono::steady_clock::now();
    Set<double> array_cross = array_set * array_set;
    auto end_time = chrono::steady_clock::now();
    int array_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();

    start_time = chrono::steady_clock::now();
    Set<double> list_cross = list_set*list_set;
    end_time = chrono::steady_clock::now();
    int list_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();


    return {array_time, list_time};
}
pair<int, int> test_out_int(int n){
    int elements[n];
    for (int i = 0; i < n; i++) {
        elements[n] = i;
    }

    Set<int> array_set(new ArraySequence<int>(elements, n));
    Set<int> list_set(new ListSequence<int>(elements, n));

    auto start_time = chrono::steady_clock::now();
    Set<int> array_substraction = array_set - array_set;
    auto end_time = chrono::steady_clock::now();
    int array_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();

    start_time = chrono::steady_clock::now();
    Set<int> list_substractiron = list_set - list_set;
    end_time = chrono::steady_clock::now();
    int list_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();



    return {array_time, list_time};

}
pair<int, int> test_out_double(int n){
    double elements[n];
    for (int i = 0; i < n; i++) {
        elements[n] = i;
    }

    Set<double> array_set(new ArraySequence<double>(elements, n));
    Set<double> list_set(new ListSequence<double>(elements, n));

    auto start_time = chrono::steady_clock::now();
    Set<double> array_substraction = array_set - array_set;
    auto end_time = chrono::steady_clock::now();
    int array_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();

    start_time = chrono::steady_clock::now();
    Set<double> list_substraction = list_set - list_set;
    end_time = chrono::steady_clock::now();
    int list_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();


    return {array_time, list_time};
}

pair<int, int> test_Map_int_set(int n){
    int elements[n];
    for (int i = 0; i < n; i++) {
        elements[n] = i;
    }

    Set<int> array_set(new ArraySequence<int>(elements, n));
    Set<int> list_set(new ListSequence<int>(elements, n));

    auto start_time = chrono::steady_clock::now();
    Set<int> array_Map = array_set.Map(func);
    auto end_time = chrono::steady_clock::now();
    int array_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();

    start_time = chrono::steady_clock::now();
    Set<int> list_Map = list_set.Map(func);
    end_time = chrono::steady_clock::now();
    int list_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();



    return {array_time, list_time};

}
pair<int, int> test_Map_double_set(int n){
    double elements[n];
    for (int i = 0; i < n; i++) {
        elements[n] = i;
    }

    Set<double> array_set(new ArraySequence<double>(elements, n));
    Set<double> list_set(new ListSequence<double>(elements, n));

    auto start_time = chrono::steady_clock::now();
    Set<double> array_Map = array_set.Map(func);
    auto end_time = chrono::steady_clock::now();
    int array_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();

    start_time = chrono::steady_clock::now();
    Set<double> list_Map = list_set.Map(func);
    end_time = chrono::steady_clock::now();
    int list_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();


    return {array_time, list_time};

}
pair<int, int> test_Where_int_set(int n){
    int elements[n];
    for (int i = 0; i < n; i++) {
        elements[n] = i;
    }

    Set<int> array_set(new ArraySequence<int>(elements, n));
    Set<int> list_set(new ListSequence<int>(elements, n));

    auto start_time = chrono::steady_clock::now();
    Set<int> array_Where = array_set.Where(isMoreThree);
    auto end_time = chrono::steady_clock::now();
    int array_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();

    start_time = chrono::steady_clock::now();
    Set<int> list_where = list_set.Where(isMoreThree);
    end_time = chrono::steady_clock::now();
    int list_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();


    return {array_time, list_time};

}
pair<int, int> test_Where_double_set(int n){
    double elements[n];
    for (int i = 0; i < n; i++) {
        elements[n] = i;
    }

    Set<double> array_set(new ArraySequence<double>(elements, n));
    Set<double> list_set(new ListSequence<double>(elements, n));

    auto start_time = chrono::steady_clock::now();
    Set<double> array_Where = array_set.Where(isMoreThree);
    auto end_time = chrono::steady_clock::now();
    int array_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();

    start_time = chrono::steady_clock::now();
    Set<double> list_Where = list_set.Where(isMoreThree);
    end_time = chrono::steady_clock::now();
    int list_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();


    return {array_time, list_time};

}

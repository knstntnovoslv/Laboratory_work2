#pragma once
#include "time_test_vector.hpp"
#include "test_time_set.hpp"
#include "vector_stl_time_test.hpp"
void comparing_my_vector_and_set(int n) {
    cout << "Time Tests" << endl << "\n";
    cout << "Time tests for vectors and sets" << "\n" << "\n";
    print_result("Create INT vector", test_create_int_vector(n));
    print_result_set("Create INT set", test_create_int_set(n));

    print_result("Create DOUBLE vector", test_create_double_vector(n));
    print_result_set("Create DOUBLE set", test_create_double_set(n));

    print_result("Vector Get INT", test_get_int(n));
    print_result_set("For Set Get INT", test_get_int_set(n));

    print_result("Vector Get DOUBLE", test_get_double(n));
    print_result_set("For Set Get DOUBLE", test_get_double_set(n));

    print_result("Vector Append INT", test_append_int(n));
    print_result_set("For Set Append INT", test_append_int_set(n));

    print_result("Vector Append DOUBLE", test_append_double(n));
    print_result_set("For Set Append DOUBLE", test_append_double_set(n));

    print_result("Vector Prepend INT", test_prepend_int(n));
    print_result_set("For Set Prepend INT", test_prepend_int_set(n));

    print_result("Vector Prepend DOUBLE", test_Prepend_double(n));
    print_result_set("For Set Prepend DOUBLE", test_Prepend_double_set(n));

    print_result("Vector Insert INT", test_insert_int(n));
    print_result_set("For Set Insert INT", test_insert_int_set(n));

    print_result("Vector Insert DOUBLE", test_insert_double(n));
    print_result_set("For Set Insert DOUBLE", test_insert_double_set(n));

    print_result("Map INT vector", test_Map_int(n));
    print_result_set("Map INT Set", test_Map_int_set(n));

    print_result("Map DOUBLE vector", test_Map_double(n));
    print_result_set("Map DOUBLE Set", test_Map_double_set(n));

    print_result("Where INT vector", test_Where_int(n));
    print_result_set("Where INT Set", test_Where_int_set(n));

    print_result("Where DOUBLE vector", test_Where_double(n));
    print_result_set("Where DOUBLE Set", test_Where_double_set(n));
    cout << "\n";
}
void time_my_vector_test(int n) {
    cout << "Tests only for vectors" << "\n" << "\n";
    print_result("Sum INT vectors", test_sum_int_vector(n));
    print_result("Sum DOUBLE vectors", test_sum_double_vector(n));
    print_result("Scalar Product INT", test_scalarproduct_int(n));
    print_result("Scalar Product DOUBLE", test_scalarproduct_double(n));
    print_result("Norma INT vector", test_norma_int(n));
    print_result("Norma DOUBLE vector", test_norma_double(n));
    cout << "\n";
}
void time_tests_only_for_set(int n) {
    cout << "Tests only for Sets" << "\n" << "\n";
    print_result_set("Union INT Sets", test_sum_int_set(n));
    print_result_set("Union DOUBLE Sets", test_sum_double_set(n));

    print_result_set("Cross INT Sets", test_cross_int(n));
    print_result_set("Cross DOUBLE Sets", test_cross_double(n));

    print_result_set("Substraction INT sets", test_out_int(n));
    print_result_set("Substraction DOUBLE sets", test_out_double(n));
}
void comparing_my_and_stl_vectors(int n){
    cout<<"Time Tests"<<endl<<"\n";
    print_result("Create Int vector", test_create_int_vector(n));
    print_result_stl("Create Int Stl vector",create_int_stl_vector(n));

    print_result("Create double vector", test_create_double_vector(n));
    print_result_stl("Create Int Stl vector",create_double_stl_vector(n));

    print_result("Get for Int vector", test_get_int(n));
    print_result_stl("Get for Int Stl vector",test_get_stl_int(n));

    print_result("Get for Double vector", test_get_double(n));
    print_result_stl("Get for Int Stl vector",test_get_stl_double(n));

    print_result("Append for Int vector", test_append_int(n));
    print_result_stl("Append for Int Stl vector",test_append_stl_int(n));

    print_result("Append for Double vector", test_append_double(n));
    print_result_stl("Append for Double stl vector",test_append_stl_double(n));

    print_result("Prepend for Int vector", test_prepend_int(n));
    print_result_stl("Prepend for Int Stl vector",test_prepend_stl_int(n));

    print_result("Prepend for Double vector", test_Prepend_double(n));
    print_result_stl("Prepend for Double Stl vector",test_prepend_stl_double(n));

    print_result("Insert for Int vector", test_insert_int(n));
    print_result_stl("Insert for Int Stl vector",test_insert_stl_int(n));

    print_result("Insert for Double vector", test_insert_double(n));
    print_result_stl("Insert for Double Stl vector",test_insert_stl_double(n));

    print_result("Sum for Int vectors", test_sum_int_vector(n));
    print_result_stl("Sum for Int Stl vectors",test_sum_int_stl_vector(n));

    print_result("Sum for Double vectors", test_sum_double_vector(n));
    print_result_stl("Sum for Double Stl vectors",test_sum_double_stl_vector(n));

    print_result("Scalar Product for Int vectors", test_scalarproduct_int(n));
    print_result_stl("Scalar Product for double Stl vectors",test_scalarproduct_int_stl_vector(n));

    print_result("Scalar Product for Double vectors", test_scalarproduct_double(n));
    print_result_stl("Scalar Product for double Stl vectors",test_scalarproduct_double_stl_vector(n));

    print_result("Norma for Int vector", test_norma_int(n));
    print_result_stl("Norma for Int Stl vector",test_norma_int_stl_vector(n));

    print_result("Norma for Double vector", test_norma_double(n));
    print_result_stl("Norma for Double Stl vector",test_norma_double_stl_vector(n));

    print_result("Mult on scalar for Int vector", test_multscalar_int(n));
    print_result_stl("Mult on scalar for Int Stl vector",test_multscalar_int_stl_vector(n));

    print_result("Mult on scalar for Double vector", test_multscalar_double(n));
    print_result_stl("Mult on scalar for Double Stl vector",test_multscalar_double_stl_vector(n));
}

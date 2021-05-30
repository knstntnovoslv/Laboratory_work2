#include<iostream>
#include "test_vector.hpp"
#include "test_set.hpp"
#include "time_test.hpp"
#include "vector_stl_tests.hpp"
using namespace std;
int main() {
    int choice = 0, type_test = 0, type_cont = 0;
    int type_stl_test = 0;
    int type_time_test = 0;

    while (choice != 3) {
        cout << endl << "Choise an action:" << endl;
        cout << "1. Start tests" << endl << "2. Start time test" << endl << "3. Exit" << endl;
        cin >> choice;
        cout << endl;
        switch (choice) {
            case 1: { //Tests
                while (type_cont != 4) {
                    cout<<"choise container"<<"\n";
                    cout << "1.Vector" << endl << "2.Set" << endl<<"3.Stl vector"<<endl<<"4.Back"<<endl;
                    cin >> type_cont;
                    switch (type_cont) {
                        case 1: {
                            while (type_test != 3) {
                                cout << "Choise type of test:" << endl;
                                cout << "1. Int vector" << endl << "2. Double vector" << endl << "3. Back" << endl;
                                cin >> type_test;
                                switch (type_test) {
                                    case 1: {
                                        test_int_vector();
                                        break;
                                    }
                                    case 2: {
                                        test_double_vector();
                                        break;
                                    }
                                    case 3: {
                                        break;
                                    }
                                    default: {
                                        cout << "Enter a number from the list!" << endl;
                                        break;
                                    }
                                }
                                break;
                            }
                            break;
                        }
                        case 2: {
                            while (type_test != 3) {
                                cout << "Choise type of test:" << endl;
                                cout << "1. Int Set" << endl << "2. Double Set" << endl << "3. Back" << endl;
                                cin >> type_test;
                                switch (type_test) {
                                    case 1: {
                                        test_int_set();
                                        break;
                                    }
                                    case 2: {
                                        test_double_set();
                                        break;
                                    }
                                    case 3: {
                                        break;
                                    }
                                    default: {
                                        cout << "Enter a number from the list!" << endl;
                                        break;
                                    }
                                }
                                break;
                            }
                            break;
                        }
                        case 3:{
                            while (type_stl_test != 3) {
                                cout << "Choise type of  stl test:" << endl;
                                cout << "1. Int vector" << endl << "2. Double vector" << endl << "3. Back" << endl;
                                cin >> type_stl_test;
                                switch (type_stl_test) {
                                    case 1: {
                                        test_int_stl_vector();
                                        break;
                                    }
                                    case 2: {
                                        test_double_stl_vector();
                                        break;
                                    }
                                    case 3: {
                                        break;
                                    }
                                    default: {
                                        cout << "Enter a number from the list!" << endl;
                                        break;
                                    }
                                }
                                break;
                            }
                            break;
                        }
                    }
                    break;
                }
                break;
            }
            case 2:{
                while(type_time_test != 5) {
                    cout << "1.Time tests only for my vector" << endl << "2.Time tests only for sets" << endl;
                    cout << "3.Comparing my vector and set" << endl << "4.Comparing my and stl vector" << endl<<"5.Back"<<endl;
                    cin >> type_time_test;
                    switch(type_time_test){
                        case 1:{
                            time_my_vector_test(1000);
                            break;
                        }
                        case 2: {
                            time_tests_only_for_set(1000);
                            break;
                        }
                        case 3: {
                            comparing_my_vector_and_set(1000);
                            break;
                        }
                        case 4: {
                            comparing_my_and_stl_vectors(1000);
                            break;
                        }
                        case 5:{
                            break;
                        }
                        default: {
                            cout << "Enter a number from the list!" << endl;
                            break;
                        }
                    }
                    break;
                }
                break;
            }
            case 3:{
                break;
            }
            default: {
                cout<<"enter a number from the list";
            }
            break;
        }
        break;
    }
}
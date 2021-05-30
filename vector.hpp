#pragma once
#include <cmath>
#include<limits>
#include "ListSequence.hpp"
#include "ArraySequence.hpp"
using namespace std;
template<class T>
class Vector {
private:
    Sequence<T> *elements;
public:
    //Конструктор
    Vector() : elements() {}
    //Конструкторы копирования
    Vector(const Vector<T> &vector) : elements(vector.elements->Clone()) {}
    Vector(Sequence<T> *sequence) : elements(sequence->Clone()) {}
    //геттер
     int GetSize() const  {
        return elements->GetSize();
    }
    //методы
    void ReSize(int size)  {
        elements->ReSize(size);
    }

    T &Get(int index) const {
        return (*elements)[index];
    }

    T GetFirst() const  {
        return elements->GetFirst();
    }

    T GetLast() const {
        return elements->GetLast();
    }

    T operator[](int index) const {
        return (*elements)[index];
    }

    T &operator[](int index) {
        return (*elements)[index];
    }


    void Append(T &item) {
        elements->Append(item);
    }

    void Prepend(T &item) {
        elements->Prepend(item);
    }

    void InsertAt(T &item, int index) {
        elements->InsertAt(item, index);
    }

    void Print() const {
        elements->Print();
    }
    Vector<T> *GetSubsequence(int startIndex, int endIndex){
        return elements->GetSubsequence(startIndex, endIndex);
    }
    //dkfa;klfjlg;
    Vector<T> &operator=(Vector<T> *vector) {
        elements = vector->elements->Clone();
        return *this;
    }
    bool operator ==(const Vector<T> &vector){
        bool alpha;
        if(this->elements->GetSize() == vector.elements->GetSize()) {
            for (int i = 0; i < this->elements->GetSize(); i++) {
                if (this->elements->Get(i) != vector.elements->Get(i)) {
                    alpha = false;
                    break;
                } else { alpha = true; }

            }
        }
        else{alpha = false;}
        return alpha;
    }
    //fsafdasfafasfsdfsadfasdfasdfasdfa
    Vector<T> operator +(const Vector<T> &vector){
        auto *summa = new Vector<T>(elements);
        int target_size = max(GetSize(), vector.GetSize());
        summa->ReSize(target_size);
        for(int i = 0; i < target_size; i++){
            if(i < vector.GetSize())
                (*summa)[i] += vector[i];
        }
        return *summa;
    }
    Vector<T> *multscalar(T scalar){
        auto *result = new Vector<T>(elements);
        for(int i = 0; i < GetSize(); i++){
            (*result)[i] *= scalar;
        }
        return result;
    }
    T operator *(Vector<T> &vector){
        auto *result = new Vector<T>(elements);
        for(int i = 0; i < GetSize(); i++)
            (*result)[i] *= vector[i];
        int prev = 0;
        T summa;
        for(int i = 0; i < GetSize(); i++){
            summa = (*result)[i] + prev;
            prev = summa;
        }
        return summa;
    }
    double norma(){
        auto *result = new Vector<T>(elements);
        double normi = sqrt((*result)*(*result));
        return normi;
    }
    Vector<T> Map(T (*function)(T)) {
        Vector<T> *result = new Vector<T>(new ArraySequence<T>());
        for (int i = 0; i < GetSize(); i++) {
            T item = function(Get(i));
            result->Append(item);
        }
        return *result;
    }
    Vector<T> Where(bool(*func)(T)){
        Vector<T> *result = new Vector<T>(new ArraySequence<T>());
        for (int i = 0; i < GetSize(); i++) {
            if ( func(Get(i)) ) {
                result->Append(Get(i));
            }
        }
        return *result;
    }
    //деструктор
    ~Vector() = default;
};

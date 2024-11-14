#ifndef VECTORMANIPULATION_HPP
#define VECTORMANIPULATION_HPP

#include <vector>
#include <iostream>
#include <algorithm>

template <typename T>
class VectorManipulation {
public:
    // Constructor to initialize the vector
    VectorManipulation() = default;

    // Method to add an element to the vector
    void addElement(const T& element);

    // Method to remove an element from the vector by value
    bool removeElement(const T& element);

    // Method to find an element in the vector
    bool findElement(const T& element) const;

    // Method to print the contents of the vector
    void printVector() const;

private:
    std::vector<T> data;
};

// Method implementations

template <typename T>
void VectorManipulation<T>::addElement(const T& element) {
    data.push_back(element);
}

template <typename T>
bool VectorManipulation<T>::removeElement(const T& element) {
    auto it = std::find(data.begin(), data.end(), element);
    if (it != data.end()) {
        data.erase(it);
        return true;
    }
    return false;
}

template <typename T>
bool VectorManipulation<T>::findElement(const T& element) const {
    return std::find(data.begin(), data.end(), element) != data.end();
}

template <typename T>
void VectorManipulation<T>::printVector() const {
    for (const auto& element : data) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}

#endif // VECTORMANIPULATION_HPP

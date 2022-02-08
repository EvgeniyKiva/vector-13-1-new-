#include <iostream>
#include <vector>


int main() {
    std::vector <int> vec{};
    std::vector <int> vec_finish{};
    int number_of_elements;
    int element;
    std:: cin >> number_of_elements;
    for (int i=0; i<number_of_elements; i++){
        std:: cin>> element;
        vec.push_back(element);
    }
    std:: cout << " Which element is superfluous" << std::endl;
    std::cin >> element;
    for (int i=0; i<number_of_elements; i++) {
        if (vec[i] != element) {
            vec_finish.push_back(vec[i]);
        }
    }
    for (int i=0; i<vec_finish.size(); i++){
            std::cout << vec_finish [i] << " ";
    }



}

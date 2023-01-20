#ifndef LAB_9_TEMPLATE_CLASSES_H
#define LAB_9_TEMPLATE_CLASSES_H

template <typename type_for_mas, typename limit>
struct result_of_search {
    type_for_mas max_element = 0, min_element = 0;
    limit max_element_index = 0, min_element_index = 0;
    void print_result(){
        std::cout << "maximum element: " << max_element << "     index: " << max_element_index << "\n";
        std::cout << "minimum element: " << min_element << "     index: " << min_element_index;
    }
};

template <typename type_for_search, typename limit>
result_of_search<type_for_search, limit> search (type_for_search* array, limit length){
    result_of_search<type_for_search, limit> answer;
    answer.max_element = (array[0]);
    answer.min_element = (array[0]);
    answer.max_element_index = (1);
    answer.min_element_index = (1);

    for (limit i = 1; i < length; ++i){
        if (array[i] > answer.max_element){
            answer.max_element = (array[i]);
            answer.max_element_index = (i + 1);
        }
        if (array[i] < answer.min_element){
            answer.min_element = (array[i]);
            answer.min_element_index = (i + 1);
        }
    }
    return answer;
}

#endif

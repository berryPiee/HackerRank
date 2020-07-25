#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


vector<vector<int>> fill_base_array(int num_of_subarrays) {
    vector<vector<int>> base_array;

    for (int i = 0; i < num_of_subarrays; i++) {
        int num_subarray_elements;
        vector<int> sub_array;
        cin >> num_subarray_elements;

        for (int j = 0; j < num_subarray_elements; j++) {
            int sub_elem;
            cin >> sub_elem;
            sub_array.push_back(sub_elem);
        }

        base_array.push_back(sub_array);
    }
    return base_array;
}

vector<vector<int>> fill_queries(int num_of_queries) {
    vector<vector<int>> queries;

    for (int i = 0; i < num_of_queries; i++) {
        vector<int> sub_queries;
        for (int j = 0; j < 2; j++) {
            int query_value;
            cin >> query_value;
            sub_queries.push_back(query_value);
        }
        queries.push_back(sub_queries);
    }
    return queries;
}

int main() {
    int num_of_subarrays;
    int num_of_queries;
    vector<vector<int>> base_array;
    vector<vector<int>> queries;

    cin >> num_of_subarrays;
    cin >> num_of_queries;

    base_array = fill_base_array(num_of_subarrays);
    queries = fill_queries(num_of_subarrays);

    for (int i = 0;i < queries.size(); i++) {
        int sub_array_index = queries[i][0];
        int sub_array_element = queries[i][1];
        int res = base_array[sub_array_index][sub_array_element];
        cout << res << "\n";
    }



    return 0;
}

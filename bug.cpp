std::vector<int> vec = {1, 2, 3, 4, 5};
for (int i = 0; i <= vec.size(); ++i) { //Error: Accessing vec[vec.size()] is out of bounds
    std::cout << vec[i] << " ";
}

//This code has an off-by-one error.  Vectors are zero-indexed, so valid indices are from 0 to vec.size()-1.
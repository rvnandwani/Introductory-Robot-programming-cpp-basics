#include <iostream>
#include <array>
#include <vector>

int main()
{
	// 1,2 - Initialization of 2D array 
	std::array<std::array< std::string , 2>, 3>init_arr={
		{{"blue", "white"},
		{"green", "white"},
		{"green", "white"}}};

	// 3,4 - Initialising sting vectors from above array
	std::vector <std::string> color_vec1 = {init_arr[0][0] , init_arr[0][1]};
	std::vector <std::string> color_vec2 = {init_arr[1][0] , init_arr[1][1]};
	std::vector <std::string> color_vec3 = {init_arr[2][0] , init_arr[2][1]};
	
	// 5 - User input for missing peg
	std::string color1,color2,color3;
	std::cout<<"Enter the colors = ";
	
	// 6 - Modify vector by inserting inputs at the right place in each vector
	std::cin>>color1>>color2>>color3;
	color_vec1.push_back(color1);
	std::vector<std::string>::iterator it=color_vec2.begin();
	color_vec2.insert(it, color2);
	std::vector<std::string>::iterator it1=color_vec3.begin()+1;
	color_vec3.insert(it1, color3);
	
	// 7 - Display all three vectors
	std::cout<<"Vector 1: "<<color_vec1.at(0)<<" "<<color_vec1.at(1)<<" "<<color_vec1.at(2)<<std::endl;
	std::cout<<"Vector 2: "<<color_vec2.at(0)<<" "<<color_vec2.at(1)<<" "<<color_vec2.at(2)<<std::endl;
	std::cout<<"Vector 3: "<<color_vec3.at(0)<<" "<<color_vec3.at(1)<<" "<<color_vec3.at(2)<<std::endl;
	
	// 8,9 - Initialising 2D vector
	std::vector<std::vector<std::string> > color_vec2d { color_vec1 , color_vec2 , color_vec3 };
	
	// 10 - Display the size of 2D vector 
	std::cout<<"Size of color_vec2d is = "<<color_vec2d.size()<<std::endl; // The output of this is 3 as the size of the vector-color_vec2d is 3, but we know each element in color_vec2d vector is of size 3
	
	// 11 - Display the 2D vector
	std::cout<<"color_vec2d = "<<std::endl;
	for (int i = 0; i <=2; i++)
	{
        for (int j = 0; j <=2; j++) 
            std::cout << color_vec2d.at(i).at(j) << " "; 
        std::cout << std::endl; 
    } 
	return 0;
} 

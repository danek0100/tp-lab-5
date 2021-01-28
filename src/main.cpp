#include "json.hpp"
#include "iostream"
#include "json.h"
#include "fstream"
#include "vector"

using json = nlohmann::json;

int main() {
	std::ifstream i("T_1.json");
	json j;
	i >> j;

	// getter/setter
	i.close();
	auto students = j.get<std::vector<std::string>>();
	std::string title;
	int id = 0;
	for (auto v : students) {
		auto* student = new Student{ id++, v };
		std::cout << v << '\n';
	}


	//std::ofstream o("pretty.json");
	//o << j << std::endl;
}
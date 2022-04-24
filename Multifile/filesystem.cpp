#include <iostream>
#include <filesystem>
#include <cstring>
#include <string>
#include <string_view>

int main(int argc, char **argv) {
	std::filesystem::path app(argv[0]);
	app.c_str();
	app = app.remove_filename();
	std::filesystem::create_directory(app.append("media"));
	::system("mkdir_name");
	std::cout << "arguments count: " << argc;
	std::cout << '\n';
	for (size_t i = 0; i < argc; i++) {
		std::string tmp(argv[i]);
		if (static_cast<int>(tmp.find(' '))!=-1) {
			std::cout << "command to have a few words\n";
		}
		std::cout << argv[i] << '\n';
	}
	std::cin.get();
	return 0;
}
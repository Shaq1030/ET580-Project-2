#include "Files.h"
#include <fstream>
#include <string>
#include <sstream>

// Function to read data from CSV file into the intArray container
void read(intArray &data) {
    std::ifstream file("data.csv");
    
    if (file.is_open()) {
        std::string line;
        
        // Read the first line
        if (std::getline(file, line)) {
            std::stringstream ss(line);
            std::string value;
            
            // Parse comma-separated values
            while (std::getline(ss, value, ',')) {
                // Convert string to integer and add to container
                data.push_back(std::stoi(value));
            }
        }
        
        file.close();
    }
}
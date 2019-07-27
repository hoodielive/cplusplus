 #include <iostream> 
 #include <sstream> 
 #include <string> 
 
 int main() 
 {
     
     std::string stringLength; 
     float length; 
     float width; 
     float calc; 
     
     // get length
     std::cout << "Enter the length of room: " << std::endl; 
     std::getline(std::cin, stringLength); 
     std::stringstream(stringLength) >> length;
     length = length * 2; 
     
     // get width
     std::cout << "Enter the width of the room: " << std::endl; 
     std::getline(std::cin, stringLength); 
     std::stringstream(stringLength) >> width; 
     width = width * 2; 
     
     calc = width / length; 
     std::cout << "You entered " << length << " inches" << std::endl; 
     std::cout << "Your room is: " << width << std::endl;
     std::cout << "Resulting in " << calc << std::endl; 
 }

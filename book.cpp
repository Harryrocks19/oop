#include <iostream> 
#include <string>
using namespace std;

class publication { private:
string title; float price;
public:

cout << "Enter Title of the Publication: "; cin.ignore();
cout << "Enter Price of Publication: "; cin >> price;

throw "Invalid price!";
}
}

cout << "Title: " << title << ", Price: $" << price;
}
};
 

class book : public publication { private:
int page_count; public:

try {
add(); 
cin >> page_count;
if (page_count <= 0) { throw page_count;
}
}
catch (...) {
cout << "Invalid data entered! Resetting to zero values." << endl; page_count = 0;
}
}



display(); 
}
};



 
class tape : public publication { private:
float play_time; public:

try {
add();
cout << "Enter Play Duration of the Tape (in minutes): "; cin >> play_time;
if (play_time <= 0) { throw play_time;
}
}
catch (...) {
cout << "Invalid data entered! Resetting to zero values." << endl; play_time = 0;
}
}

{
display(); 
cout << ", Play Time: " << play_time << " min" << endl;
}
};


int main() {
book b1; 
 

cout << "Enter Book Information:\n"; b1.add_book();
cout << "\nBook Information:\n"; b1.display_book();

cout << "\nEnter Tape Information:\n"; t1.add_tape();
cout << "\nTape Information:\n"; t1.display_tape();

return 0;
}

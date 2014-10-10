// This program demonstrates the put() member function.
 #include <iostream>
 #include <fstream>
 using namespace std;

 int main()
 {
	 // Variable needed to open and write file.
		 char ch;
	
		 // Open the file.
		 fstream dataFile("sentence.txt", ios::out);
	 if (!dataFile)
		 {
		 cout << "Error opening the file.";
		 return 0;
		 }
	
		 // Instructions to user.
		 cout << "Type a sentence and be sure to end it with a ";
	 cout << "period.\n";
	
		 // Read characters from cin and put to file.
		 cin.get(ch);
	 while (ch != '.')
		 {
		 dataFile.put(ch);
		 cin.get(ch);
		 }
	 dataFile.put(ch);
	
		 // Close the file.
		 dataFile.close();
	 return 0;
	 }
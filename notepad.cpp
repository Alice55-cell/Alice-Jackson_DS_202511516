#include <iostream>
#include <fstream>
#include "notepad.h"

void writeFile(std::string filename){
0fstream outFile(filename);

if(!outFile.is_open()){
	std::cout<<"Error: could not create or open the file"<<std::endl;
	return;
	std::cout<<"\n---Write to:"<<filename<<" "<<std::endl;
	std::cout<<"Type your text below"<<std::endl;
	std::cout<<"----------------------------"<<std::endl;
}
while(true){
	getline(cin, line);
	if(line == "END"){
		break;
	}
	outfile << line <,"\n";
}
outFile.close();
std::cout<<"File saved successfully!"<<std::endl;
}

 void readFile(std::string filename){
 	ifstream inFile(filename);
 	
 	if(!inFile.is_open()){
 		std::cout<<"Error: File" <<filename<<" not found!"<<std::endl;
 		return;
	 }
	 std::cout<<"\n---Reading Content of:"<<filename<<" "<<std::endl;
	 string line;
	 bool isEmpty = true;
	 while(getline(inFile, line)){
	 	std::cout<< line <<std::endl;
	 	isEmpty = false;
	 }
	 if(isEmpty){
	 	std::cout<<"The file is currently empty"<<std::endl;
	 }
	 std::cout<<"-------------------------------"<<std::endl;
	 inFile.close();
 }
 
 void appendFile(std::string filename){
 	ofstream outFile(filename, ios::app);
 	
 	if(!outFile.is_open()){
 		std::cout<<"Error: could not open the file for appending"<<std::endl;
 		return;
	 }
	 std::cout<<"\n---Appending to: "<<filename<<" "<<std::endl;
	 std::cout<<"Type the text to add"<<std::endl;
	 std::cout"-----------------------------------"<<std::endl;
	 string line;
	 cin.ignore();
	 while(true){
	 	getline(cin, line);
	 	if(line == "END"){
	 		break;
		 }
		 outFile<< line << "\n";	
	 }
	 
	 outFile.close();
	 std::cout<<"Content appended successfully!"<<std::endl;
 }

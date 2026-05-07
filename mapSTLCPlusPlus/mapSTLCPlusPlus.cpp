#include <iostream>

#include <map>

#include <string>

using namespace std;

/*
* MAP uses binary search tree method.
* Uses "key" and its "value". 
* Keys are unique for its value. Same key can not be formed.
* Listing a MAP container starts from least significant number to most significant values. (sorts elements from smallest key to the largest key
* Accesing a MAP element is faster than a LIST, slower than a VECTOR
* Seaching an element is faster than both LIST and VECTOR
* Memory allocation is more than a List, less than a VECTOR
*/

int main()
{
	//create a list container

	map <int, float> mStudent;
	
	//adding elements

	mStudent[101] = 76.4;
	mStudent[102] = 89.7;
	mStudent[100] = 96;

	//insert an element

	mStudent.insert({ 99, 82.1 });

	//print container

	for (const auto& stdnt : mStudent)		//instead using "pair<const int, float>" use auto. (it is the return value of the MAP)
	{
		//C++ uses "first" keyword for "key", "second" keyword for "value". 

		cout << "Student Key: " << stdnt.first << ", Student Grade: " << stdnt.second << endl;
	}

	/*
	* output is sorted from smallest to the largest:
	* 
	* Student Key: 99, Student Grade: 82.1
	* Student Key: 100, Student Grade: 96
	* Student Key: 101, Student Grade: 76.4
	* Student Key: 102, Student Grade: 89.7
	*/

	//Search process:

	int searchedStudent =99;

	if (mStudent.find(searchedStudent) != mStudent.end())		//if iterator is not at the end
	{
		cout << "Student " << searchedStudent << " found. Grade: " << mStudent[searchedStudent] << endl;		//access its value and print

	}

	else
	{
		cout << "Student " << searchedStudent << " not found in this MAP container" << endl;					//not found indicator

	}

	//erase an element

	mStudent.erase(102);

	for (const auto& stdnt : mStudent)	
	{

		cout << "Student Key: " << stdnt.first << ", Student Grade: " << stdnt.second << endl;
	}

	/*
	* output:
	* 
	* Student Key: 99, Student Grade: 82.1
	* Student Key: 100, Student Grade: 96
	* Student Key: 101, Student Grade: 76.4
	*/

	//add an existing key

	mStudent[101] = 11.1;

	for (const auto& stdnt : mStudent)
	{

		cout << "Student Key: " << stdnt.first << ", Student Grade: " << stdnt.second << endl;
	}

	/*
	* output:
	*
	* Student Key: 99, Student Grade: 82.1
	* Student Key: 100, Student Grade: 96
	* Student Key: 101, Student Grade: 11.1
	*/

	//sort elements from greater to less. 

	//default map template: map <int, float, less<int>> mStudent2

	map <int, float, greater<int>> mStudent2;
	
	mStudent2[101] = 76.4;
	mStudent2[102] = 89.7;
	mStudent2[100] = 96;

	for (const auto& stdnt : mStudent2)		
	{
		cout << "Student Key: " << stdnt.first << ", Student Grade: " << stdnt.second << endl;
	
	}

	/*
	*output: 
	* 
	* Student Key: 102, Student Grade: 89.7
	* Student Key: 101, Student Grade: 76.4
	* Student Key: 100, Student Grade: 96
	*/

	return 0;
}
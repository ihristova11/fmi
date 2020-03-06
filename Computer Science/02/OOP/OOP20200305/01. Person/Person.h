#ifndef PERSON_H

#define PERSON_H

class Person {
public: 
	Person(); // default constructor
	Person(char* name, int age, bool hasLicence); // parameter constructor
	Person(const Person&); // copy constructor
	
	Person& operator=(const Person&);
	bool operator==(const Person&);

	// setters
	void setName(char* name);
	void setAge(int age);
	void setHasLicence(bool hasLicence);

	// getters
	char* getName();
	int getAge();
	bool getHasLicence();

	void print(const Person&, std::ostream);

	~Person(); // destructor

private:
	char* name;
	int age;
	bool hasLicence;

	void deleteName();
};

#endif // !PERSON_H


//#include<iostream>
//#include<string>
//using namespace std;
//
//class ship
//{
//private:
//	string name;
//	string year;
//
//public:
//	ship()
//	{
//		name = "none ";
//		year = "none ";
//
//	}
//	ship(string n , string y)
//	{
//		name = n;
//		year = y;
//
//	}
//	void setname(string n)
//	{
//		name = n;
//
//	}
//	void setyear(string y)
//	{
//		year= y;
//	}
//	string getname()
//	{
//		return name;
//	}
//	string getyear()
//	{
//		return year;
//	}
// virtual void print()
//	{
//		cout << "Ship name : " << name << endl;
//		cout << "The year it was built :" << year << endl;
//	}
//
//};
//class Cruiseship : public ship
//{
//private:
//	int max_passengers;
//
//public:
//	Cruiseship(string n, string y, int p) : ship(n, y)
//	{
//	
//		max_passengers = p;
//	
//	}
//	void setp(int p)
//	{
//		max_passengers = p;
//	}
//	int getp()
//	{
//		return max_passengers;
//	}
//	void print()
//	{
//		cout << "Ship name : " << getname() << endl;
//		cout << "The year it was built :" << getyear()<< endl;
//		cout << "Maximum passengers :" << max_passengers;
//	}
//};
//class Cargoship :public ship
//{
//private:
//	int tonnage;
//
//public:
//	Cargoship(string n,  string y, int t) : ship(n, y)
//	{
//		tonnage = t;
//	}
//	int gett()
//	{
//		return tonnage;
//	}
//	void sett(int t)
//	{
//		tonnage = t;
//	}
//	void print()
//	{
//		cout << "Ship name : " << getname() << endl;
//		cout << "Cargo Capacity :" << tonnage << endl;
//	}
//
//};
//int main()
//{
//	ship *ship1 = new ship("Titanic " , "March 31, 1909");
//	Cargoship *ship2 = new Cargoship("THE DUST ", "2023- 09 - 29", 300);
//	Cargoship *ship3 = new Cargoship("Twilight ", "2023- 07 - 29", 400);
//	Cruiseship *ship4 = new Cruiseship(" corvette.", "2023- 010 - 29", 758);
//
//	ship *array[] = { ship1, ship2, ship3, ship4 };
//	for (int i = 0; i < 4; i++)
//	{
//		array[i]->print();
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}
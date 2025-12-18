
#include <iostream>
#include <vector>
#include "mo_sakr.h"
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;

void fill(int arr[3][3]) {

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
		
			arr[i][j] =mohamed_sakr::RandomNumber(0,100) ;
			
		}
	}
}
void display(int arr[3][3]) {
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%02d    ",arr[i][j]);
		}
		cout << "\n";
	}
}
void mult(int arr1[3][3], int arr2[3][3], int arrm[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			;
			arrm[i][j] = arr1[i][j]*arr2[i][j];

		}
	}
}
void middler(int arr[3][3]) {
	for (int i = 0; i < 3; i++) {
		printf("%02d    ", arr[1][i]);
	}

}
void middlec(int arr[3][3]) {
	for (int i = 0; i < 3; i++) {
		
			
			printf("%02d    ", arr[i][1]);

		
	}

}

int sum(int arr[3][3]) {
	int sum = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			sum += arr[i][j];
		}
	}
	return sum;
}
bool symetry(int arr1[3][3], int arr2[3][3]) {
	bool flag = false;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			flag = arr1[i][j] == arr2[i][j];
			if (!flag)
				return false;
			
		}
	}
	return true;
}
bool identity(int arr[3][3]) {
	int frist;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			frist = arr[0][0];
			if (i == j) {
				if (arr[i][j] != frist)
					return false;

			}
			else {
				if (arr[i][j] != 0)
					return false;
			}
		}
	}
	return true;
}
bool count(int arr[3][3]) {
	int c0 = 0,c1=0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (arr[i][j] == 0)
				c0++;
			else
				c1++;
				
		}
	}
	if (c0 > c1)
		return false;
	else
		return true;

}
bool isnumberinmatrix(int arr[3][3], int num) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (arr[i][j] == num)
				return true;
		}
	}
	return false;

}


int detect(int arr1[3][3], int arr2[3][3],int arr[9]) {
	int x,y=0;
	cout << "\nIntersected Numbers are: \n\n";
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			x = arr1[i][j];
			if (isnumberinmatrix(arr2, x)) {
				arr[y] = x;
					y++;
			}	
			}
		}
	return y;
}
void MinMax(int arr[3][3]) {
	int min = arr[0][0],  max = arr[0][0];
	for (int i = 0; i < 3;i++) {
		for (int j = 0; j < 3; j++) {
			if (min > arr[i][j])
				min = arr[i][j];
			if (max < arr[i][j])
				max = arr[i][j];

		}
	}
	cout << "\nMinimum Number is: ";
	cout << min;
	cout << "\n\nMax Number is: ";
	cout << max;
}
bool Palindrome(int arr[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 1; j++) {
			if (arr[i][2 - j] != arr[i][j]) {
				return false;
			}
		}
		
}
	return true;
}

void fibonacciR(int arr[15],int num) {
	static int i = 1,x=0;
	if (i < num) {
		arr[0] = 1;

		arr[i] = x + arr[i - 1];
		x = arr[i - 1];
		i++;
		fibonacciR(arr, num);
	}
	


	
}
void displayv(int arr[],int num) {
	for (int i = 0; i < num; i++) {
		cout << arr[i] << " ";
	}
}

string readstr() {
	string sen;
	getline(cin, sen);
	return sen;
}
void printfrist(string x) {
	bool fristc = true;
	for (int i = 0; i < x.length(); i++) {
		if (x[i] != ' ' &&fristc) {
			cout << x[i] << endl;
			
			
		}

			
		(x[i] == ' ') ? fristc = true : fristc = false;
	}
}
string fristU(string x) {
	bool fristc = true;
	for (int i = 0; i < x.length(); i++) {
		if (x[i] != ' ' && fristc) {
			x[i] = toupper(x[i]);
		}
	
		

		(x[i] == ' ') ? fristc = true : fristc = false;
	}
	return x;
}
string fristl(string x) {
	bool fristc = true;
	for (int i = 0; i < x.length(); i++) {
		if (x[i] != ' ' && fristc) {
			x[i] = tolower(x[i]);
		}
		


			(x[i] == ' ') ? fristc = true : fristc = false;
	}
	return x;
}

string UPPER(string x) {
	for (int i = 0; i < x.length(); i++) {
		x[i] = toupper(x[i]);
	}
		return x;

}
string lower(string x) {
	for (int i = 0; i < x.length(); i++) {
		x[i] = tolower(x[i]);
	}
	return x;
}
void invert(string s,int &cl,int &sl) {
	for (char& x : s) {
		if (int(x) >= 65 && int(x) <= 90)
			cl++;


		else if (int(x) >= 97 && int(x) <= 122)
			sl++;

	}
	
	
}
int search(char searchh,string x) {
	int c = 0;
	for (char& y : x) {
		if (y == searchh)
			c++;
	}
	return c;
}
char Readc() {
	char x;

	cin >> x;
	return x;
}

bool Isvowel(char x) {
	x = tolower(x);
	return (x == 'a') || (x == 'e') || (x == 'i') || (x == 'o') || (x == 'u');
}

void Num_Vowels(string x) {
	int y=0;
	for (char& i : x) {
		if (Isvowel(i))
			cout << i << " ";
	}
		
	


}

void Str_words(string x) {

for (char& c : x) {
	
	cout << c;
	if (c == ' ')
		cout << "\n";

}

}
void printword(string str) {
	string delum = " ";
	string sword;
	int pos=0;
	while ((pos = str.find(delum)) != std::string::npos) {
		sword = str.substr(0, pos);
		cout << sword<<endl;
		str.erase(0, pos + delum.length());
	}
	cout << str;
}
string numberofword(string str) {
	string delum = " ";
	string sword; /*Sakr*/
	int pos = 0,num=1;
	while ((pos=str.find(delum)) != std::string::npos) {
		string sword = str.substr(0, pos);
		str = str.erase(0, (pos + delum.length()));
		num++;
	}
	return sword;
}
void dash(int n) {
	for (int i = 0; i < n; i++) {
		cout << "_";
	}
	cout << "\n\n";
}
void printtt(vector <string >& word) {


	dash(105);
	cout << "| Account Number | Pin Code | Client Name                         | Phone            |Balance\n\n";
	dash(105);

	cout << fixed << setprecision(2);
	cout << left
		<< "| " << setw(14) << word[0]
		<< " | " << setw(8) << word[1]
		<< " | " << setw(35) << word[2]
		<< " | " << setw(16) << word[3]
		<< " | " << setw(20) << word[4];
	cout << endl;
}

bool split(string str,string value,int choice, string delum = "|") {
	int pos;
	string sword;
	vector <string > word;
	while ((pos = str.find(delum)) != std::string::npos) {
		sword = str.substr(0, pos) ;
		word.push_back(sword);
		str = str.erase(0, (pos + delum.length()));
		
	}
	word.push_back(str);
	
	switch (choice) {
	case 1:
		if (value == word[0]) {
			printtt(word);
			return true;
		}
		else
			return false;
		break;
	case 2:
		if (value == word[1]) {
			printtt(word);
			return true;
		}
		else
			return false;
		break;
	case 3:
		if (value == word[2]) {
			printtt(word);
			return true;
		}
		else
			return false;
		break;
	case 4:
		if (value == word[3]) {
			printtt(word);
			return true;
		}
		else
			return false;
		break;
	case 5:
		if (value == word[4]) {
			printtt(word);
			return true;
		}

		else
			return false;
		break;
	default:
		cout << "Enter Valid Choice\n";
		
	}
	
	
	
}

int splitttt(string str, vector <string >& word, string delum=" ") {
	int pos;
	int num = 1;
	string sword;
	while ((pos = str.find(delum)) != std::string::npos) {
		sword = " "+str.substr(0, pos);
		word.push_back(sword);
		str = str.erase(0, (pos + delum.length()));
		num++;
	}
	word.push_back(str);
	return num;
}
string join(vector <string> word, string delum) {
	string y = "";
	for (int i = 0; i < word.size()-1; i++) {
		y += (word[i] + delum);
	}
	y += word[(word.size() - 1)];
	return y;

}
string join(string arr[], int l, string delum) {
	string y = "";
	for (int i = 0; i < l; i++) {
		y += (arr[i] + delum);
	}
	
	return y.substr(0,y.length()-delum.length());
}

string panuction(string &str) {
	string a="";
	for (char i : str) {
		if (ispunct(i)) {
			continue;

		}
		a += i;
	}
	return a;
}
struct People
{
	string AccNumber;
	string PinCode;
	string Name;
	string phone;
	string blance;
};

void fill(vector <People>& client) {
	People info;
	cout << "Enter Account Number? ";
	cin >> info.AccNumber;
	cout << "Enter PinCode? ";
	cin >> info.PinCode;
	cout << "Enter Name? ";
	getline(cin>>ws, info.Name) ;
	cout << "Enter Phone? ";
	cin >> info.phone;
	cout << "Enter AccountBalance? ";
	cin >> info.blance;
	client.push_back(info);

}
string joininfo(vector <People> &client, string delum = " ") {
	cout << "Enter Delam : ";
	cin >> delum;
	string all="";
	all = client[0].AccNumber + delum;
	all += client[0].PinCode + delum;
	all += client[0].Name + delum;
	all += client[0].phone + delum;
    try {
        double balance = stod(client[0].blance);
        char buffer[64];
        snprintf(buffer, sizeof(buffer), "%.6f\n", balance);
        all += buffer;
    } catch (const std::exception&) {
        all += client[0].blance + "\n";
    }
	
	return all;

	}
vector <People> splitinfo(string str,string delam=" ") {
	People info;
	int pos,n=0;
	vector <People> clyent;
	while ((pos = str.find(delam)) != std::string::npos) {
		switch (n) {
		case 0:
			info.AccNumber = str.substr(0, pos);
			str.erase(0, pos + delam.length());
			n++;
			break;
		case 1:
			info.PinCode = str.substr(0, pos);
			str.erase(0, pos + delam.length());
			n++;
			break;
		case 2:
			info.Name = str.substr(0, pos);
			str.erase(0, pos + delam.length());
			n++;
			break;
		case 3:
			info.phone = str.substr(0, pos);
			str.erase(0, pos + delam.length());
			n++;
			break;

		}
		
		
	}
	info.blance = str;
	clyent.push_back(info);
	return clyent;
}


void displayv(vector <People>& v) {
	cout << "\n\nThe following is the extracted client record:\n";
	cout << "\nAccout Number: " << v[0].AccNumber;
	cout << "\nPin Code : " << v[0].PinCode;
	cout << "\nName : " << v[0].Name;
	cout << "\nPhone : " << v[0].phone;
	cout << "\nAccount Balance: " << v[0].blance;
}

void clyents() {
	fstream clyentsf;
	 char add = 'Y';
	 short n = 0;
	 clyentsf.open("D:\\my_programe\\nasa\\sakr.txt",ios::in);
	 if (clyentsf.is_open())
	 {
		 string line;
		 while (getline(clyentsf, line))
			 n++;
		 clyentsf.close();
	 }
	 
	 string inf = "";
	 vector <People> clyent;
	 do {
		 system("cls");
		 clyentsf.open("D:\\my_programe\\nasa\\sakr.txt", ios::out|ios::app);
		 if (n == 0) {
			 n++;
			 cout << "Enter Frist Clyent:  \n";
			 clyent.clear();
			 fill(clyent);
			 inf=joininfo(clyent);
			 if (clyentsf.is_open()) {
				 clyentsf << inf;
				 clyentsf.close();
			 }
			 cout << "\nAre you add more? ";
			 cin >> add;
			
			 
		 }
		 else
		 {
			 n++;
			 cout << "Enter "<< n<<" Clyent:  \n";
			 clyent.clear();
			 fill(clyent);
			 inf = joininfo(clyent);
			 if (clyentsf.is_open()) {
				 clyentsf << inf;
				 clyentsf.close();
			 }
			 cout << "\nAre you add more? ";
			 cin >> add;
			
			
		 }
		


	 } while (toupper(add) == 'Y');




}


void spshow(vector <string> &clyents,short n) {

	string value;
	int choice;
	cout << "You need Search For What?  \n";
	cout << "1=> AccountNumber \n";
	cout << "2=> Pin Code \n";
	cout << "3=> Name \n";
	cout << "4=> Phone \n";
	cout << "5=> Balance \n";
	cout << "Enter Choose (1,2,.....): ";
	cin >> choice;
	cout << "\nEnter Value: ";
	getline(cin>>ws, value);
	bool cc;
	for (string& clyent : clyents) {
		cc=split(clyent,value,choice);
		if (cc)
			return;
		cout << endl;

	}
	cout << "Not Find  ";

}
bool spshowdelete(string str, vector<string> &update, string delum = "|") {

	string value,nvalue;
	int choice;
	cout << "You need Search For What?  \n";
	cout << "1=> AccountNumber \n";
	cout << "2=> Pin Code \n";
	cout << "3=> Name \n";
	cout << "4=> Phone \n";
	cout << "5=> Balance \n";
	cout << "Enter Choose (1,2,.....): ";
	cin >> choice;
	cout << "\nEnter Value: ";
	getline(cin >> ws, value);
	cout << "\nEnter New Value: ";
	getline(cin >> ws, nvalue);
	int pos;
	string sword;
	vector <string > word;
	while ((pos = str.find(delum)) != std::string::npos) {
		sword = str.substr(0, pos);
		word.push_back(sword);
		str = str.erase(0, (pos + delum.length()));

	}
	word.push_back(str);

	switch (choice) {
	case 1:
		if (value == word[0]) {
			word[0]=nvalue;
		
		}
		else
			return false;
		break;
	case 2:
		if (value == word[1]) {
			word[1] = nvalue;
			
		}
		else
			return false;
		break;
	case 3:
		if (value == word[2]) {
			word[2] = nvalue;
		
		}
		else
			return false;
		break;
	case 4:
		if (value == word[3]) {
			word[3] = nvalue;
		
		}
		else
			return false;
		break;
	case 5:
		if (value == word[4]) {
			word[4] = nvalue;
		
		}

		else
			return false;
		break;
	default:
		cout << "Enter Valid Choice\n";

	}



	

}
void fromfille(string filee) {
	fstream clyentsf;
	string line;
	short n=0;
	vector <string> all;
	clyentsf.open(filee, ios::in);
	if (clyentsf.is_open()) {
		while (getline(clyentsf, line)) {
			all.push_back(line);
		}
		clyentsf.close();
	}
	n = all.size();
	spshow(all, n);
}

void fromfilleread(string filee) {
	fstream clyentsf;
	string line;
	short n = 0;
	bool x;
	vector<string> update;
	clyentsf.open(filee, ios::in);
	if (clyentsf.is_open()) {
		while (getline(clyentsf, line)) {
			x=spshowdelete(line, update);
		
		}
		clyentsf.close();
		

	}
	clyentsf.open(filee, ios::out);
	if (clyentsf.is_open()) {
		for(string y : update) {
			
			clyentsf << y << endl;
		}
		clyentsf.close();


	}
	
	
}


int main()
{ 
	fromfilleread("D:\\my_programe\\nasa\\sakr.txt");

}
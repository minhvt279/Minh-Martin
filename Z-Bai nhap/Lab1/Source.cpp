#include <iostream>
//#include<string.h>   
#include <string>
#include<time.h>
#include<math.h>
#include <Windows.h>
#include<map>

using namespace std;

//khai bao ham neu muon dat ham sau ham main
int x, y, z;
void day(int x, int y);	
//continue-break -if-for-while- do while - switch case
void cb(){
	for (int i = 1; i <= 5; i++){
		int n; cin >> n;
		if (n == 1) continue; else break; //continue: bo nhung cau lenh sau, tiep tuc vong lap moi -> neu n==1 thi 5 ko dc in ra
		cout << 5;
	}
	int i = 1; while (i <= 10)
	do{ cout << 3;  i++; } while (1); // lap vo han
	switch (x){
	case 1: cout << 1;
	case 2: cout << 2;
	default: cout << 4;
	}
	
}
// lenh exit
void exit(){															
	int m; cin >> m;
	if (m == 0) exit(0);
}
//lenh goto
int fgoto(){															
	int m; cin >> m;
	if (m == 0) goto loop;
	cout << "123";	/*Neu m==0 thi 123 se khong dc in ra*/
	loop:;
	cout << "456";
	return 0;
}
//factorial for toi uu code
int factorial2(int n){													
	int s = 1;
	for (int i = 2; i <= n; s *= i++){};
	return s;
}
//factorial de quy  n!
int factorial1(int n){													
	return (n == 0) ? 1 : n*factorial1(n - 1);  /*if (n ==0) return 1;else return n * factorial(n - 1);	  Вывов  cout << factorial(n);*/
}
//so nguyen nhieu uoc nhat
void so_nguyen_nhieu_uoc_nhat_(){										
int n = 100;  int x[1000];
	for (int a = 1; a <= n; a++){
		x[a] = 0;
		for (int i = 1; i <= a; i++){
			if (a%i == 0) x[a]+= 1;
		}
		cout << a << "  " << x[a] << endl;
	}
}
// ham random tu 0 den n
float rand(float n){ 
	srand(time(NULL)); 
	return n*rand() / RAND_MAX; 
}	
/*rand()%100; // tu 0 den 99
x+rand()%(y-x+1);  tu x den y
float rand(float x,float y){ srand(time(NULL)); return  x+(y-x+1)*rand() / RAND_MAX;}
*/

//ep kieu
void typeconversion(){
	int k = 'A'; cout << k;
	char ch = 65; cout << ch;
	int p = (int)'A'; cout << p; // ep A ve kieu int
	float n = 10 / 3.; cout << n;// in so thuc  hoac ep kieu (float)10/3 <=>   float(10)/3
	fflush(stdin); // xoa bo nho dem buffer
	cin.ignore(3); //xoa 3 ki tu trong buffer
	string name; getline(cin, name); // thu vien <string>   kieu ki tu string
	//char name[10]; gets_s(name);   //<string.h>  - char  ; luu y getline va gets_s trong the nam trong cung 1 ham
	int t1 = GetTickCount(); // so miliseconds troi qua ke tu khi mo may
	int t2 = time(NULL); // so s troi qua ke tu nam 1970
	float a = 3.455;  // 3.455 la kieu double 
	if (a == 3.455f) cout << 1; else cout << 2;  // phai co f
	int b;  5 > 4 ? b = 6 : b = 5;
	sizeof( int);  //tra ve 4 byte

	int m=1,n1=2,c = (m++, n1++, n1 = m + n1, m = m + n1); // toan tu dau phay


	int p1 = 12.3, q = -345.678;	// độ rộng thực của a là 4, của b là 8
	cout << a;	// chiếm 4 cột màn hình
	cout.width(20);	// đặt độ rộng giá trị in tiếp theo là 20
	cout.fill('*');	// dấu * làm kí tự độn
	cout.setf(ios::internal);	// bật cờ ios::internal
	cout.precision(2);	// đặt độ chính xác đến 2 số lẻ
	cout << b;
}
//array
void inputarray(){
	int a[10];
	for (int i = 0; i <= 9; i++){
		cout << "a[" << i << "]="; cin >> a[i]; // in <<   "a["     <<    "]="     << i 
	}
}
//mang structure
struct toado{															
	float x, y, z;
};
toado a[10];      /*  a[i].x, a[i].y, a[i].z   */

//ham swap-pointer
void swap1(int *x, int *y){												
	int temp;
	temp = *x;   	*x = *y;	*y = temp;
}
//swap- reference
void swap2(int &x,int &y){
	int temp;
	temp = x;   	x = y;	y = temp;
}
//poiter to function
int sum1(int m, int n){						//sum1(2, 3);
	return factorial1(m) + factorial1(n);  
}
int sum2(int x, int y){						//sum2(factorial(2), factorial(3));
	return x + y;
}
int sum3(int m, int n, int(*p)(int)){		//sum3(2,3,&factorial1);	
	return (*p)(m)+(*p)(n);					//Neu gan int(*p1)(int) = factorial1;   thi sum3(2,3,p1);
}

void  map1(){
map<string, int> m, m2;
//map<int, int>::iterator itlow,itup;
m["as"] = 1;
m["ver"] = 8;
m["er"] = 9;
//it = m["a"];
cout << m.size();
m.insert(m.begin(), make_pair("vejnv", 7));
for (auto it = m.begin(); it != m.end(); ++it)
cout << (*it).first << " " << it->second << endl << endl;
cout << m.max_size() << endl;
}

int main(){


	map1();
	system("pause");
	return 0;
}
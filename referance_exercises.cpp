#include <iostream>
using namespace std;

// referans semantiği 3
int& foo(int& ref)
{
	return ref;
}

// referans semantiği 6
void func(int& refx, int& refy)
{
	int temp = refx;
	refx = refy;
	refy = temp;
}

int main()
{

	/***********************************************
	 *             referans semantiği 1            *
	 ***********************************************/
	/*
	int x = 1;
	int& r = x;
	r = 10;
	cout << "x : " << x << endl;
	*/

	/***********************************************
	 *             referans semantiği 2            *
	 ***********************************************/
	// Referansların temel özellikleri
	/*
	int x = 1;
	int y = 2;
	int& r1 = x;
	// r1 = y;	//	Sentaks hatası vermiyor fakat referansların gösterdiği değişken değiştirilemez.
				//	bu nedenle referanslar default olarak oluşturulamazlar. Başlangıç değeri
				//	belirtilmek zorundadır.
	r1 = 3;
	cout << "x : " << x << endl;
	cout << "y : " << y << endl;

	
	const int& r2 = y;
	// r2 = 5;	//	Const olarak tanımlanan referansların gösterdiği değişkenin değeri referans 
				//	kullanılarak değiştirilemezler.
	
	
	const int z = 3;
	// int& r3 = z;	//	Const olarak tanımlanmış bir değişkeni int referans gösteremez. Referans
					//	yanlızda const nesneyi okuma amacıyla kullanılabileceği için referans da
					//	const olarak tanımlanmalıdır.
	const int& r3 = z;


	int& r4 = x;
	int& r5 = r4;
	r5 = 10;
	cout << "r4 : " << r4 << endl;
	cout << "r5 : " << r5 << endl;
	cout << "x : " << x << endl;
	//	Referanslar birbirlerini gösteremezler. Referanslara ikinci bir referans değeri atanması
	//	ikinci referansın gösterdiği değişkenin ilk referansa atanmasını sağlar.


	int& const r6 = x;	//	Bu şekilde bir tanımlama yapılması anlamsızdır. Derleyici tarafından
						//	bu const tanımı silinir. Çünkü zaten referansların içeriği değiştirilemediği
						//	için top level const kullanımı gereksizdir.


	const char (&r7)[8] = "batuhan";
	cout << "r7 : " << r7 << endl;
	// char& r7 = "batuhan";	//	Şeklinde bir tanımlama sentaks hatasıdır.
	*/

	/***********************************************
	 *             referans semantiği 3            *
	 ***********************************************/
	/*
	int x = 1;
	int& r = x;

	foo(r) = 20;
	cout << "r : " << r << endl;
	*/

	/***********************************************
	 *             referans semantiği 4            *
	 ***********************************************/
	/*
	int arr[] = { 1, 2, 3, 4, 5 };
	int (&r)[5] = arr;
	r[2] = 10;
	for (int i = 0; i < 5; i++)
		cout << "arr[" << i << "] : " << r[i] << endl;

	//	int& r = arr ya da int (&r)[]	//	Şeklinde yapılan tanımlamalar sentaks hatasıdır.

	int &r2 = arr[0];
	//	r2[1] = exps	//	Yukarıda ki gibi yapılan ilk değişken ataması ile referans sadece
						//	ilk değeri göstermekte ve arrayin diğer elemanlarına referans ile
						//	erişilememektedir. Bu nedenle bu şekilde r2[1] kullanım ile değer
						//	ataması hatalıdır.
	*/

	/***********************************************
	 *             referans semantiği 5            *
	 ***********************************************/
	/*
	int x = 1;
	int& r1 = ++x;
	const int& r2 = x++;
	//	Bu şekilde ++ operandı değişkenin arkasında kullanılır ise değişken pr value
	//	olarak değerlendirilir ve lvalue referansa atanamaz. Bu nedenle lvalue referans
	//	const olarak tanımlanı ve x++ için hafıza da geçici bir değer oluşturulur. r2 
	//	referansı üzerinde yapılan değişimler x değişkenini etkilemez. Aynı şekilde x
	//	değişkeni üzerinde yapılan değişimler r referansını etkilemez.
	x = 15;
	cout << "x : " << x << endl;
	cout << "r1 : " << r1 << endl;
	cout << "r2 : " << r2 << endl;

	const int& r3 = 10;
	//	int& r3 = 10	// Bu şekilde bir atama yapılamayacağı için const olarak tanımlanarak
						// geçici bir değişken oluşturulması sağlanır. Fakat bu r3 referansı
						// const olarak tanımlandığı için değeri değiştirilemez.
	*/

	/***********************************************
	 *             referans semantiği 6            *
	 ***********************************************/
	/*
	int x = 5;
	int y = 7;
	cout << "x : " << x << " , " << "y : " << y << endl;
	cout << "func(x, y) calistiriliyor..." << endl;
	func(x, y);
	cout << "x : " << x << " , " << "y : " << y << endl;
	//	Call by Referance yöntemi kullanılarak x ve y değişkenlerinin değerleri
	//	yer değiştiriliyor.
	*/
	
}

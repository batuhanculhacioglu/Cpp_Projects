//============================================================================
// Name        : cpp_exercises.cpp
// Author      : batuhanculhacioglu
//============================================================================

#include <iostream>
using namespace std;

//	Includes
#include <sstream>

int main() {
	/* Ekrana yazı yazdırma
	cout << "!!!Hello World!!!" << endl;
	*/

	/* Veri tipleri
	int i = 10;
	char c = 'C';
	float f = 2.17;
	double d = 4.0207;
	bool b = true;
	string s = "text";

	cout << "int degiskeninin degeri : " << i << "\nint degiskeninin bellekte kapladigi alan : " << sizeof(i) << endl;
	cout << "char degiskeninin degeri : " << c << "\nchar degiskeninin bellekte kapladigi alan : " << sizeof(c) << endl;
	cout << "float degiskeninin degeri : " << f << "\nfloat degiskeninin bellekte kapladigi alan : " << sizeof(f) << endl;
	cout << "double degiskeninin degeri : " << d << "\ndouble degiskeninin bellekte kapladigi alan : " << sizeof(d) << endl;
	cout << "bool degiskeninin degeri : " << b << "\nbool degiskeninin bellekte kapladigi alan : " << sizeof(b) << endl;
	cout << "string degiskeninin degeri : " << s << "\nstring degiskeninin bellekte kapladigi alan : " << sizeof(s) << endl;
	*/

	/* Kullanicidan klavye ile int deger alma
	int sayi1 = 0, sayi2 = 0;

	cout << "Bir deger giriniz : ";
	cin >> sayi1;
	cout << "İkinci bir deger giriniz : ";
	cin >> sayi2;
	cout << "Girdiginiz iki sayinin toplami : " << sayi1 + sayi2;
	*/

	/* String class'ı ve methodları (empty, at, lenght, find, insert, erase, substr, clear)
	string s = "Batuhan Culhacioglu";

	cout << s << endl;
	cout << "String'in icerisi bos mu? : " << s.empty() << endl; //Stringin iceriginin bos olup olmadigini kontrol eden method.
	cout << "String'in 4. elamani : " << s.at(3) << endl; //String'in method içerisine yazılan elemanını döndürür. Alternatif bir yontem olarak s[3] yapılabilir.
	cout << "String'in uzunlugu : " << s.length() << endl; //Size of ile karistirilmamalidir
	cout << "String'in icerisinde 'ul' harfleri kacinci indexten itibaren basliyor : " << s.find("ul") << endl;
	cout << "String'in icerisinde yer alan 2. 'a' harfi kacinci indexte yer aliyor : " << s.find("a",2) << endl; //String icerisinde a harfinden 2. olanı bul.
	cout << "String'in icerisine 50 degeri 2. indexten sonra ekleniyor : " << s.insert(3,"50") << endl;
	cout << "String'in icersinden 50 degeri siliniyor : " << s.erase(3,2) << endl; //3. elemandan itibaren 2 deger sil.

	string s_alt;

	s_alt = s.substr(2,5);
	cout << "Alt string olusturuluyor : " << s_alt << endl;
	s.clear(); //String icerisini silen methot. Alternatif bir yöntem olarak s.clear() methodu kullanılabilir.
	cout << s << endl;
	cout << "String'in icerisi bos mu? : " << s.empty() << endl;
	*/

	/* Sting input alma ve StringStream nesnesi ile tip dönüşümü
	string str;
	//	cin >> str şeklinde input almaya çalışır isek sadece boşluğa kadar olan kısımı alır.
	getline(cin, str, '\n'); //	cin methoduyla str içerisine \n işaretini yani enter'ı görene kadar yaz.
	cout << str << endl;
	str.clear();

	str = "1 2 3 4 5 6";
	stringstream sstream;
	sstream << str; //	str string'inin içerisinde ki değerleri sstream nesnesine yazar.
	int temp;
	sstream >> temp; // tür dönüşümü yaparak arada ki boşluk işaretine göre yazım yapar. (teker teker)
	sstream >> temp;
	sstream >> temp;
	cout << "temp degiskeninin degeri : " << temp << endl;
	*/

	/* inline fonksiyonlar
	*	Bu fonksiyonların kullanım amacı fonksiyonun kullanıldığı yerlerde fonksiyon tablosuna gidilip
	*	fonksiyonun çağrılması yerine fonksiyon gövdesinin derleme aşamasında o bölgelere
	*	yapıştırılmasıdır. Fakat bu kullanım şekli performans olarak artış gösterse de fonksiyonun
	*	çağrılma miktarına göre kodun boyutu artmaktadır.

	inline int topla(int a, int b)
	{
		return a+b;
	}
	*/

	/* rekürsif fonksiyonlar
	 *	Bu fonksiyonlar kendi kendini çağıran fonksiyonlardı. Fakat kullanılırken dikkat edilmesi
	 *	gereken nokta else yapısıdır. Çünkü else yapısı bulunmayan rekürsif fonksiyonlarda
	 *	döngü oluşabilir.

	int faktoriyel(int value)
	{
		if(value > 0)
		{
			return value * faktoriyel(value-1);
		}
		else
		{
			return 1;
		}
	}
	*/

	/* Dinmaik bellek yönetimi (new, new[], delete, delete[]
	 * 	Normalde cpp derleyici bellek yönetimini otomatik olarak gerçekleştirir ve nesneler eğer
	 * 	public olarak tanımlanmamış ise kullanım ihtiyacı tamamlandıktan sonra veya fonksiyon
	 * 	sonlandıktan sonra silinme işlemi gerçekleşir. Dinamik bellek yönetiminde ise nesneler
	 * 	kullanıcı tarafından bellek tahsis edilip ve silinir. Bu yöntemde dikkat edilmesi gereken
	 * 	iki önemli nokta var :
	 * 		(1) Bellek yönetimi iyi yapılmaz ise büyük projelerde bellek taşması yaşanabilir.
	 * 		(2)	Nesneler bellekten random adresler ayırmasından kaynaklı ihtiyaç duyulan
	 * 		nesne boyutu bu bellek boşluklarına sığmayabilir.
	int *i_ptr1 = new int(); //Köşeli parantez içerisinde ilk değer ataması yapılabilir.
	*i_ptr1 = 13;
	cout << "i_ptr1 adresi : " << i_ptr1 << endl << "i_ptr1 degeri : " << *i_ptr1 << endl;

	int *i_ptr2 = new int[5];
	for(int k = 0; k < 5; k++)
		i_ptr2[k] = k;
	cout << "i_ptr2[1] degeri : " << i_ptr2[1] << endl;

	delete i_ptr1;
	delete[] i_ptr2;

	cout << "silindikten sonra i_ptr1 degeri : " << *i_ptr1;
	*/

	/* Classlar içerisinde bellek yönetimi
	 *	Burada neyse oluşturulup ve silinmesi test edilmiştir. Dinamik ve Statik
	class myC{

	public :
		myC()
		{
			cout << "Nesne olusturuldu." << endl;
		}
		~myC()
		{
			cout << "Nesne silindi." << endl;
		}

	};
	myC employee; // Nesne oluşturulup silinme işlemi derleyici tarafından gerçekleşmiştir.
	myC *ptr = new myC(); // Nesne kullanıcı tarafından oluşturulmuştur.
	delete ptr; // Nesne kullanıcı tarafından silinmelidir. Yoksa bellekte alan tutmaya devam eder.
	*/

	/* namespace olusturma ve kullanım örneği
	namespace b1_ns{
		int x = 2;
		float y = 3.2;
		void foo()
		{
			char d = 'D';
			cout << "b1_ns namespace'in de foo fonksiyonu cagrildi : " << d << endl;
		}
	}

	namespace b2_ns{
		int x = 3;
		float y = 2.7;
		void boo()
		{
			bool b = true;
			cout << "b2_ns namespace'in de boo fonksiyonu cagrildi : " << b << endl;
		}
	}

	cout << "b1_ns namespace'in de x degiskeninin degeri : " << b1_ns::x << endl;
	cout << "b2_ns namespace'in de x degiskeninin degeri : " << b2_ns::x << endl;

	b1_ns::foo();
	b2_ns::boo();

	b1_ns::y = b2_ns::y;
	cout << "b1_ns namespace'in de y degiskeninin yeni degeri : " << b1_ns::y << endl;
	*/

	return 0;
}

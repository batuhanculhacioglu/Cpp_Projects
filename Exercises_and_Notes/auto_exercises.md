#include <iostream>

using namespace std;

// auto semantiği 2
/*
void foo(char& ref)
{
    ref = ref + 1;
}

char& poo(char& ref)
{
    return ref;
}

char soo()
{
    return 'X';
}
*/

// auto semantiği 3
/*
void foo(const char* x)
{
    cout << "gonderilen kelime : " << x << endl;
}

const char* poo()
{
    return "hello";
}
*/

// auto semantiği 4
/*
auto foo(int *x, int *y)
{
    return *x + *y;
}

const int pow()
{
    return 5;
}
*/


// auto semantiği 5 
/*
int foo(int x)
{
    return x+5;
}
*/


int main()
{
    /***********************************************
     *             auto semantiği 1                *
     ***********************************************/
    //  auto temel kavramlar
    /*
    auto a1 = 5;    // int türünden değişken tanımlanıyor.
    auto a2 = 10.0; // double
    auto a3 = 3.7f; // float
    auto a4 = 'X';  // char
    auto a5 = "batuhan"; // const char *
    auto a6 = {1, 2, 3 ,4 ,5};    // class std::initializer_list<int>
    auto p1 = &a1;  //  int *
    auto p2 = &a3;  //  float *

    //  auto kullanarak nesne tanımlanabilir. Fakat burada ki önemli nokta değişken
    //  oluşturulurken değişkenin içeriği boş bırakılamaz çünkü oluşturulan nesnenin
    //  türünün belirlenmesi bu değere de bağlıdır.

    auto& ref1 = a1;    //  auto kullanılarak referans tanımlanırken & atomu kullanılması
                        //  gerekmektedir. Eğer & atomu kullanılmazsa a1 değişken olarak
                        //  değil sabit bir değer olarak görülecek ve int ref1 = 5 olarak
                        //  int türünden bir değişken tanımlanması yapılacaktır.
    
    auto& ref2 = a3;    //  float
    auto& ref3 = a4;    //  char
    auto& ref4 = a5;    //  const char * 
                        //  Burada tanımlanan ref4 bir referans değil pointer olarak tanımlanır.
                        //  Örnek olarak -> const char *ref5 = a5;

    auto& ref5 = "hello";   
    auto (&ref6)[8] = "batuhan"; //  auto (&ref6)[8] = a5    //  Şeklinde bir kullanım sentaks hatasıdır.
    auto& ref7 = a5[0]; //  ref7 referans olarak tanımlanır fakat sadece a5 const charının ilk değerini tutar.
    
    int a8[] = {1, 2, 3 ,4 ,5};
    auto& ref8 = a8;
    */

    /***********************************************
     *             auto semantiği 2                *
     ***********************************************/
    /*
    auto c = 'A';
    auto& r = c;  
    r = 'B';  
    cout << "char c : " << r << endl;
    foo(r);
    cout << "char c : " << r << endl;
    poo(r) = 'D';
    cout << "char c : " << r << endl;
    const auto& r2 = soo(); 
    //  r referansı kullanılarak c değişkeninin değeri değiştiriliyor. Referans
    //  döndüren fonksiyonlar lvalue olarak kullanılır ve dönen referansa değer
    //  yazılabilir. Ayrıca char döndüren fonksiyonlar kullanılarak referanslara
    //  ilk değer atanabilir fakat bu referans const olmak zorundadır.
    */

    /***********************************************
     *             auto semantiği 3                *
     ***********************************************/
    /*
    auto arr = "batuhan"; //   const char * türünde arr değişkeni tanımlanmıştır.
                           //   auto arr{ "batuhan" }; Alternatif olarak bu şekilde de tanımlanabilir.
                           //   auto arr[8] = "batuhan"; Sentax hatası.
    foo(arr);
    auto arr2 = poo();
    cout << "arr2 : " << carr2 << endl;

    auto& rarr = "batu";    //  const char (&rarr)[5] şeklinde bir referans tanımlamayla aynı işlevdedir.
    cout << "rarr : " << rarr << endl;
    */

    /***********************************************
     *             auto semantiği 4                *
     ***********************************************/
    /*
    double dv = 3.7;
    auto p1 = &dv;
    auto& r1 = *p1;
    r1 = 13.2;
    cout << "dv : " << dv << endl;
    //  auto ile tanımlanan bir referans kullanılarak dv değişkeninin değeri 
    //  değiştirilmiştir.

    auto const p2 = &dv;    //  double* const p2 olarak tanımlanmıştır ve p2'nin 
                            //  gösterdiği adres değiştirilemez. Fakat *p2'nin değeri
                            //  değiştirilebilir. Yani burada kullanılan const tanımı
                            //  top level const'dur.(const auto p2 tanımlaması da bir
                            //  fark oluşturmaz.)
    *p2 = 5.3;
    cout << "dv : " << dv << endl;

    int a = 5;
    int b = 7;
    auto c = foo(&a, &b);
    cout << "c : " << c << endl;

    const auto& r2 = pow();
    cout << "r2 : " << r2 << endl;

    const int x = 7;
    auto& r3 = x;   //  const olan bir değişkeni gösteren referanslar auto tanımı ile const
                    //  olarak tanımlanırlar.

    auto p = &x;    //  referanslarda olduğu gibi const değişkeni gösteren pointerlar const
                    //  olarak tanımlanırlar.
    */

    /***********************************************
     *             auto semantiği 5                *
     ***********************************************/
    /*
    auto p = foo;
    auto& r = *p;
    cout << "r : " << r(3) << endl;
                                    //  Fonksiyon adresi öncelikle bir pointera atanıyor sonrasında 
                                    //  bu pointerın işaret ettiği değer referansa atanıyor ve 
                                    //  referans r(expression) olarak çağrılarak çalıştırılıyor.
    */

}
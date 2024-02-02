#include <iostream>

using namespace std;

// pointer to pointer 2
int** foo(int** a)
{
    **a = 10;
    return a;
}

// pointer to pointer 6
void poo(int** a, int** b)
{
    int *temp = *a; // a pointerinin işaret ettiği pointerın içinde ki adresi al ve temp pointerının işaret ettiği yer yap.
    *a = *b;        // a pointerının işaret ettiği pointerın içinde ki adresi b pointerının işaret ettiği pointerın içinde ki adresler değiştir.
    *b = temp;      // b pointerının işaret ettiği pointerın içinde ki adresi temp pointerının içinde ki adresle değiştir.
}

int main()
{
    /***********************************************
     *             pointer to pointer 1            *
     ***********************************************/
    /*
    int x = 1;
    int y = 2;
    int* px = &x;
    int* py = &y;

    int** pp = &px;
    //int** pp = px , int** pp = &x -> Sentax hataları tür uyuşmazlığı

    **pp = 10;
    pp = &py;
    **pp = 20;

    cout << "x : " << x << endl;
    cout << "y : " << y << endl;
    */

    /***********************************************
     *             pointer to pointer 2            *
     ***********************************************/
    /*
    int x = 0;
    int y = 1;
    int* py = &y;
    int* px = &x;
    int** ppy = &py;
    int** ppx = &px;

    ppx = foo(ppy);
    **ppx = 15;

    cout << "x : " << x << endl;
    cout << "y : " << y << endl;
    */
    
    /***********************************************
     *             pointer to pointer 3            *
     ***********************************************/
    /*
    int x = 1;
    int y = 5;
    int* px = &x;
    int* py = &y;
    int** ppx = &px;
    int** ppy = &py;

    cout << "*px : " << *px << endl;
    *ppx = py;
    cout << "*px : " << *px << endl;
    */

    /***********************************************
     *             pointer to pointer 4            *
     ***********************************************/
    /*
    int x = 1;
    const int* cpx = &x;
    const int** cppx = &cpx;
    // Buradaki önemli nokta bir pointer const olarak tanımlanmış ise o pointer'ı işaret eden pointer
    // const olmak zorundadır. Yani şöyle bir kullanım sentax hatasıdır.
    // int** cppx = &cpx;
    */

    /***********************************************
     *             pointer to pointer 5            *
     ***********************************************/
    /*
    int a[] = { 1, 2, 3, 4, 5 };
    int* p = a;
    int** pp = &p;

    cout << "*p isaret ettigi deger : " << *p << "\tp isaret ettigi adres : " << p << endl;
    cout << "**pp isaret ettigi deger : " << **pp << "\t*pp isaret ettigi adres : " << *pp << endl;

    ++* pp; // ++* pp kullanılarak p pointerının işaret ettiği adres &a[0] değerinden &a[1] olarak değiştirilmiştir.
    ++** pp; // ++** pp kullanılarak p pointerının işaret ettiği &a[1] adresinde ki değeri 1 arttırılmıştır.

    cout << "*p isaret ettigi deger : " << *p << "\tp isaret ettigi adres : " << p << endl;
    cout << "**pp isaret ettigi deger : " << **pp << "\t*pp isaret ettigi adres : " << *pp << endl;
    
    (* pp)[1] = 99; // p[1] pointerının işaret ettiği &a[2] adresinde ki değer 3'den 99'a çıkarılmıştır.

    for (int i = 0; i <= 4; i++)
    {
        cout << "a[" << i << "] : " << a[i] << "\tve adresi : " << &a[i] << endl;
    }
    */

    /***********************************************
     *             pointer to pointer 6            *
     ***********************************************/ 
     //(pointer to pointer'ın işaret ettiği yeri değiştiren fonksiyon)
    /*
    int x = 1;
    int y = 2;
    int* p1 = &x;
    int* p2 = &y;

    cout << "p1'in gosterdigi adres : " << p1 << "\tve degeri : " << *p1 << endl;
    cout << "p2'nin gosterigi adres : " << p2 << "\tve degeri : " << *p2 << endl;
    poo(&p1, &p2); // iki pointerın işaret ettiği adresler yer değiştiriliyor.
    cout << "p1'in gosterdigi adres : " << p1 << "\tve degeri : " << *p1 << endl;
    cout << "p2'nin gosterigi adres : " << p2 << "\tve degeri : " << *p2 << endl;
    */

    return 0;
}

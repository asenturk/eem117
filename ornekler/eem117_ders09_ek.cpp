//parametresiz fonksiyon �rne�i
#include <iostream>

using namespace std;

void girhesaplaveyaz(void)
{
int a, b,c;    
cout<<"birinci sayiyi giriniz:";
cin>>a;    
cout<<"ikinci sayiyi giriniz:";
cin>>b;

c=a+b;
cout<<c;    
}

int main (void)
{ 
girhesaplaveyaz();           
system("pause");
return 1;
}


___________


//parametre alan fonksiyon �rne�i
#include <iostream>

using namespace std;

void alhesaplaveyaz(int s1,int s2)
{
int c;
c=s1+s2;
cout<<c;    
}

int main (void)
{ 
int a, b;   
cout<<"birinci sayiyi giriniz:";
cin>>a;    
cout<<"ikinci sayiyi giriniz:";
cin>>b;

alhesaplaveyaz(a,b);
            
system("pause");
return 1;
}


___________


//parametre alan ve sonu� g�nderen fonksiyon �rne�i
#include <iostream>

using namespace std;

int alhesaplavegonder(int s1,int s2)
{
int sonuc;
sonuc=s1+s2;
return sonuc;   
}

int main (void)
{ 
int a, b,c;   
cout<<"birinci sayiyi giriniz:";
cin>>a;    
cout<<"ikinci sayiyi giriniz:";
cin>>b;

//fonksiyondan gelen sonucun bir de�i�kene al�narak kullan�lmas�
c=alhesaplavegonder(a,b);
cout<<c;          

//fonksiyondan gelen sonucun do�rudan ekrana yazd�r�lmas�
cout<<alhesaplavegonder(a,b);
   
system("pause");
return 1;
}


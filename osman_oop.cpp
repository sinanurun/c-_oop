#include <iostream>
using namespace std;

class Araba
{
public:
    char marka[10];
    char model[30];
    float fiyat;
    int hiz;

    void hizlanma();
    void yavaslama();
};

void Araba::hizlanma()
{
    hiz = hiz + 10;
    cout << "Araba hizlaniyor." << endl;
}
void Araba::yavaslama()
{
    hiz = hiz - 10;
    cout << "Araba yavasliyor." << endl;
}



int main() {
	cout << "Hello world!\n";	
	Araba osman = Araba();
	osman.hiz = 50;
	cout << osman.hiz << endl;
	osman.yavaslama();
	cout << osman.hiz << endl;
	osman.yavaslama();
	cout << osman.hiz << endl;
	osman.yavaslama();
	cout << osman.hiz << endl;
	osman.yavaslama();
	cout << osman.hiz << endl;
	osman.yavaslama();
	cout << osman.hiz << endl;
	cout <<"araba durdu" << endl;
	char marka2[10];
	for(int i=0;i<10;i++){
	cin>>osman.marka[i];
	}

	cout<<osman.marka;
}

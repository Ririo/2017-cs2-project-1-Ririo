#include<iostream>
using namespace std;

int main()
{
int card1, card2, card3, card4;
int time,mana;

char map1[22][52], map2[22][52], cl;

cout<<"1 2 5 7 3 4 6 8"<<endl;

while(1){
cin >> time >> mana >> card1 >> card2 >> card3 >>card4;

for(int i=0;i < 22;i++){
	for(int j = 0; j < 52; ++j){
		cin.get(map1[i][j]);
	}
	cin.get(cl);
}

for(int i = 0; i < 22;i++){
	for(int j = 0; j < 52; ++j){
		cin.get(map2[i][j]);
	}
	cin.get(cl);
}
/*cout << 1 <<" "<< card1 << " " << 4 << " " << 11 <<endl;
cout << 0 << endl;*/


if(time%2==0){
cout << 1 << " " << card1 << " "<< 6 << " "<< 11 <<endl;
}
else{
cout << 1 <<" " << card1 <<" " << 14 <<" " << 11 <<endl;
}

cout << "0" << endl;
}

return 0;
}
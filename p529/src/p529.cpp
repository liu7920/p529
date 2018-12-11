#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <stdio.h>
#include <stdio_ext.h>
#include <cstdlib>
using namespace std;

int main() {

	int num,l,o,p,h,m,count,temp;
	int z=0,ck;
	string str9,str8;
	map<string, string> dic;
	srand((unsigned int)time(NULL));

	dic.insert(make_pair("honey","애인"));
	dic.insert(make_pair("love","사랑"));
	dic.insert(make_pair("painting","그림"));
	dic.insert(make_pair("apple","사과"));
	dic["cherry"] = "체리";

	cout << "사전 개수 리턴 : " << dic.size() << endl;

	cout << "***** 영어 어휘 테스트를 시작합니다. *****" << endl;

	while(1){

		cout << "어휘 삽입: 1, 어휘 테스트: 2, 프로그램종료:그외키 >> ";
		cin >> num;
		if(num==1){
			cout << "영어 단어에 exit을 입력하면 입력 끝" << endl;
			while(1){
				cout << "영어 >>";
				__fpurge(stdin);
				getline(cin, str9);
				if(str9=="exit"){
					break;
				}
				cout << "한글 >>";
				__fpurge(stdin);
				getline(cin, str8);
				dic.insert(make_pair(str9,str8));
			}
		}
		else if(num==2){
			cout << "영어 어휘 테스트를 시작합니다. 1~4 외 다른 입력시 종료." << endl;
			p=rand()%dic.size() + 0;
			o=0;
			string g;
			for(auto i=dic.begin(); i!=dic.end(); i++){
				if(p==o){
					cout << "key : " << i->first << "?" <<endl; //i->second
					g=i->second;
					break;
				}
				o++;
			}

			l=rand()%4 + 0;
			z=1;
			count = 0;
			string str1,str2;
			for(int q=0;q<4;q++){
				h=rand()%dic.size() + 0;
				m=0;
				for(auto w=dic.begin(); w!=dic.end(); w++){
					if(l==q){
						cout << "(" << z << ") " << g << endl;
						temp=z;
						z++;
						break;
					}
					if(h==m){
						if(g==w->second || str1==w->second || str2==w->second){
							q--;
							break;
						}
						cout << "(" << z << ") " << w->second << endl;
						if(count == 0){
							str1=w->second;
						}
						else if(count == 1){
							str2=w->second;
						}
						count++;
						z++;
						break;
					}
					m++;
				}

			}

			cout << "입력 : ";
			cin >> ck;
			if(ck==temp){
				cout << "Excellent!!" << endl;
			}
			else{
				cout << "NO. !!" << endl;
			}
		}
		else{
			break;
		}

	}

	return 0;
}

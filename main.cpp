#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include "lab__2_functions.h"
using namespace std;

int main() {
    cout<<"Choose the function: \n VecDecList -- 1 \n vector_new_zero -- 2 \n list_splice -- 3\n list_del_zero -- 4 \n dec_cut -- 5 \n arithmetic_mean -- 6\n ";
    int choice;
    int x;
    int y;
    list<int> L;
    deque<int> D;
    cin>>choice;

    switch(choice)
    {
        case 1:
            cout<<"Choose container size --- ";

            while(!(cin>>x) or (x % 2 == 1))
            {
                cout<<"Wrong !! Enter again !\n";
                cin.clear(); // сбрасывает все биты потока, тоесть поток становится "хорошим"
                cin.sync();//Удалим данные из буффера
                cout<<"Enter int : ";
            }
            ///system("pause");
            cout<<"\n";
            VecDecList(x);
            break;

        case 2:
            cout<<"Choose container size --- ";

            while(!(cin>>x) or (x % 2 == 1))
            {
                cout<<"Wrong !! Enter again !\n";
                cin.clear(); // сбрасывает все биты потока, тоесть поток становится "хорошим"
                cin.sync();//Удалим данные из буффера
                cout<<"Enter int : ";
            }
            ///system("pause");
            cout<<"\n";
            vector_new_zero(x);
            break;

        case 3:
            cout<<"Choose container size --- ";

            while((!(cin>>x) or (x % 2 == 0)))
            {
                cout<<"Wrong !! Enter again !\n";
                cin.clear(); // сбрасывает все биты потока, тоесть поток становится "хорошим"
                cin.sync();//Удалим данные из буффера
                cout<<"Enter int : ";
            }
            ///system("pause");
            cout<<"Choose container size --- ";
            while(!(cin>>y))
            {
                cout<<"Wrong !! Enter again !\n";
                cin.clear(); // сбрасывает все биты потока, тоесть поток становится "хорошим"
                cin.sync();//Удалим данные из буффера
                cout<<"Enter int : ";
            }
            cout<<"\n";
            list_splice(x,y);
            break;

        case 4:
            cout<<"Choose container size --- ";
            while(!(cin>>y))
            {
                cout<<"Wrong !! Enter again !\n";
                cin.clear(); // сбрасывает все биты потока, тоесть поток становится "хорошим"
                cin.sync();//Удалим данные из буффера
                cout<<"Enter int : ";
            }


            for(int i = 0; i < y; i++) {
                cout<<"Input container`s content --- ";
                while(!(cin>>x))
                {
                    cout<<"Wrong !! Enter again !\n";
                    cin.clear(); // сбрасывает все биты потока, тоесть поток становится "хорошим"
                    cin.sync();//Удалим данные из буффера
                    cout<<"Enter int : ";
                }

                L.push_back(x);
            }
            list_del_zero(L);
            break;

        case 5:
            cout<<"Choose container size --- ";
            while(!(cin>>y))
            {
                cout<<"Wrong !! Enter again !\n";
                cin.clear(); // сбрасывает все биты потока, тоесть поток становится "хорошим"
                cin.sync();//Удалим данные из буффера
                cout<<"Enter int : ";
            }

            for(int i = 0; i < y; i++) {
                cout<<"Input container`s content --- ";
                while(!(cin>>x))
                {
                    cout<<"Wrong !! Enter again !\n";
                    cin.clear(); // сбрасывает все биты потока, тоесть поток становится "хорошим"
                    cin.sync();//Удалим данные из буффера
                    cout<<"Enter int : ";
                }

                D.push_back(x);
            }
            dec_cut(D);
            break;

        case 6:
            cout<<"Choose container size --- ";
            while(!(cin>>y))
            {
                cout<<"Wrong !! Enter again !\n";
                cin.clear(); // сбрасывает все биты потока, тоесть поток становится "хорошим"
                cin.sync();//Удалим данные из буффера
                cout<<"Enter int : ";
            }


            for(int i = 0; i < y; i++) {
                cout<<"Input container`s content --- ";
                while(!(cin>>x))
                {
                    cout<<"Wrong !! Enter again !\n";
                    cin.clear(); // сбрасывает все биты потока, тоесть поток становится "хорошим"
                    cin.sync();//Удалим данные из буффера
                    cout<<"Enter int : ";
                }

                L.push_back(x);
            }
            arithmetic_mean(L);
            break;

        default:
            cout<<"Неверная команда";

    }
    return 0;
}

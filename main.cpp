#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std ;


class Object
{
private:
    
    string name ;
    int x ;
    int y ;
    int z ;
public:
    Object ()
    {
        
        cout << "Введіть назву об'єкту для якого хочете змінити координати: "; cin >> name;
        cout << "Введіть нові координати об'єкту : " << endl;
        int valueX , valueY , valueZ;
        cout << "x : ";  cin >> valueX;
        cout << "y : ";  cin >> valueY;
        cout << "z : ";  cin >> valueZ; cout << endl;
        x = valueX;
        y = valueY;
        z = valueZ;
    }
    Object (int q)
    {
        
    }
   void Print()
      {
          cout <<name ; cout << "(" << x << ";" << y << ";" << z << ")"<< endl;
      }
    void Rearengement()
    {
        int selection;
        string name;
       Point:
            cout <<"Ввиберіть позицію для продовження : " << endl<<
            "1.Створити новий об'єкт" << endl <<
        "2.Змінити координати об'єкту " << endl << "3.Завершити виконання " <<endl<<
        "4.Удалити об'єкт "<<endl;
            
        cin >> selection;
       switch(selection)
       {
           case 1:
               cout << "Введіть назву об'єкту : " << endl; cin >> name;
                     cout << "Введіть координати об'єкту : " << endl;
                     int x , y , z;
                     cout << "x : ";  cin >> x;
                     cout << "y : ";  cin >> y;
                     cout << "z : ";  cin >> z; cout << endl;
                     cout <<name ; cout << "(" << x << ";" << y << ";" << z << ")"<< endl;
                goto Point;
               break;
           case 2:
               cout << "Введіть назву об'єкту координати якого хочете змінити : " << endl; cin >> name;
               cout << "Введіть нові координати цього об'єкту : " << endl;
                    int NewX , NewY , NewZ;
                    cout << "x : ";  cin >> NewX;
                    cout << "y : ";  cin >> NewY;
                    cout << "z : ";  cin >> NewZ; cout << endl;
                    cout <<"Ви змінили координти об'єкту \t"<< name ; cout << "(" << NewX << ";" << NewY << ";" << NewZ<< ")"<< endl;
                goto Point;
               break;
           case 3:
               cout <<"Ви завершили роботу !" << endl;
               break;
           case 4:
               cout <<"Введіть назву об'єкту який ви хочете удалити "<<  endl;
               cin >> name ;cout <<endl;
           default:
               cout <<"Ви ввели не вірне число , повторіть спробу."<< endl;
               cout << endl;
               goto Point;
               break;
       }
    }

    ~Object()
    {
    }
};
int main()
{
    cout << "Кімната нашої мрії."<<endl <<
    "Нехай у нашій кіманті знаходиться "<<endl << "Table з координатами(12, 34, 54),"<< endl <<"Chair з координатами (34, 65 ,120)"<< endl << "та Bed з координатами (45, 76, 130) " <<endl<< endl;
    
    setlocale(LC_ALL, "ua");
    Object table;
    cout << "Координати цього об'єкту" << endl;
    table.Print ();
    cout << endl;
    Object chair ;
    cout << "Координати цього об'єкту" << endl;
    chair.Print ();
    cout <<endl;
    Object rearengement(1);
    rearengement.Rearengement();
    return 0;
}

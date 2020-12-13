#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std ;

class Room
{
  private:
    string name ;
    int x;
    int y;
    int z;
  public:
    Room ()
    {
        cout << "Введіть назву об'єкту для якого хочете змінити координати: "; cin >> name;
        cout << "Введіть нові координати об'єкту : " << endl;
        int value_X , value_Y , value_Z;
        cout << "x : ";  cin >> value_X;
        cout << "y : ";  cin >> value_Y;
        cout << "z : ";  cin >> value_Z; cout << endl;
        x = value_X;
        y = value_Y;
        z = value_Z;
    }
    Room (int something){}
   void Print()
      {
          cout <<name ; cout << "(" << x << ";" << y << ";" << z << ")"<< endl;
      }
    void changes()
    {
    int selection;
    string name;
    Point:
    cout<<"Ввиберіть позицію для продовження : " << endl;
    "1.Створити новий об'єкт"<< endl<<
    "2.Змінити координати об'єкту "<< endl<< "3.Завершити виконання " <<endl<<
    "4.Удалити об'єкт "<<endl;
    cin>>selection;
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
           int New_X , New_Y , New_Z;
           cout << "x : ";  cin >> New_X;
           cout << "y : ";  cin >> New_Y;
           cout << "z : ";  cin >> New_Z; cout << endl;
           cout <<"Ви змінили координти об'єкту \t"<< name ; cout << "(" << New_X << ";" << New_Y << ";" << New_Z<< ")"<< endl;
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
    ~Room()
    {
    }
};
int main()
{
    cout << "Кімната нашої мрії."<<endl <<
    "Нехай у нашій кіманті знаходиться "<<endl << "Table з координатами(12, 34, 54),"<< endl <<"Chair з координатами (34, 65 ,120)"<< endl << "та Bed з координатами (45, 76, 130) " <<endl<< endl;
    
    setlocale(LC_ALL, "ua");
    Room table;
    cout << "Координати цього об'єкту" << endl;
    table.Print();
    cout << endl;
    Room chair;
    cout << "Координати цього об'єкту" << endl;
    chair.Print();
    cout <<endl;
    Room changes(1);
    changes.changes();
    return 0;
}

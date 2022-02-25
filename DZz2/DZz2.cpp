
#include <iostream>
using namespace std;


int main()
{
   setlocale(LC_ALL,"");

   float sum;
   cin >> sum;
   cout << int(sum) << " Рублей " << (sum - int(sum))*100 << " копеек" << endl;



/*
   float euro, percent, sum;
   cin >> euro >> percent;
   cout << euro * (percent / 100) / 12 << " Евро, каждый месяц!" << endl;




   float distance, time, speed;
   cout << "Вычислите скорость бега\n"
	   << "Введите длину дистанции (метров) = ";
   cin >> distance;
   cout << "Введите время (сек.) = ";
   cin >> time;
   cout << "Дистанция: " << distance << " м. " << endl
	   << "Время: " << time << " сек. " << endl
	   << "Вы бежали со скоростью  " << (distance / 1000) / (time / 3600) << " км/ч. ";


   int day, week;
   cin >> day;
   week = day / 7;
	   cout << week << " Недели" << endl << day - (week * 7) << " Дней ";


   int time, a;
   cin >> time;
   a = time / 3600;
   cout << a << " Часов " << endl
	   << (time -(a*3600))/60 << " Минут " << endl
	   << time % 60 << " Секунд " << endl;
	   */
}

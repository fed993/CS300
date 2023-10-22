#ifndef DATE_H
#define DATE_H

class Date
{
	private:
		int m_year;
		int m_month;
		int m_day;
		int m_second;
	public:
		Date(int seconds);

		void setSeconds(int seconds);
		std::string print();
		int getYear() { return m_year; };
		int getMonth() { return m_month; };
		int getDay() { return m_day; };
		int getSecond() { return m_second; };
}
#endif

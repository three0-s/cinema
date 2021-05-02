
#include "CReserve.h"
#include "Option.h"

CReserve::CReserve(CMovie_Info *movies, CZone* zones)
{
	memcpy(m_movies, movies, movies->get_m_schedule_num());
	memcpy(zone_Info, zones, ZONE_NUM);
}

bool CReserve::reserving_info(CPerson_Info &customer)
{
	std::string movie_name = chatbot2.movie_name();
	this->movie_name = movie_name;

	for (int i = 0; i < MOVIES_NUM; i++)
	{
		if (m_movies[i].get_movie_name() == movie_name)
		{
			for (int j = 0; j < m_movies[i].get_m_schedule_num(); j++)
			{
				std::cout << m_movies[i].get_movie_schedule()[j].m_zone_num + 1 << "관";

				std::string time = "";
				switch (m_movies[i].get_movie_schedule()[j].m_movie_schedule)
				{
				case schedule::MORNING_1:
					time = "8시 - 9시";
					break;
				case schedule::MORNING_2:
					time = "9시 - 10시";
					break;
				case schedule::MORNING_3:
					time = "10시 - 11시";
					break;
				case schedule::AFTERNOON_1:
					time = "12시 - 1시";
					break;
				case schedule::AFTERNOON_2:
					time = "1시 - 2시";
					break;
				case schedule::AFTERNOON_3:
					time = "2시 - 3시";
					break;
				}
				std::cout << time << std::endl;
			}
		}
	}

	chatbot2.movie_time();
	std::cin >> movie_zone >> movie_time; //movie_zone은 실제 상영관의 번호. 따라서 인덱스로 사용시엔 -1 해야함.
										  // movie_time 은 schedule enum자료형을 따른 다고 가정.

	//좌석 출력 부분
	for (int i = 0; i < SEAT_ROW_NUM; i++)
	{
		for (int j = 0; j < SEAT_COL_NUM; j++)
		{
			if (this->zone_Info[movie_zone - 1].get_seat_info(i, j, movie_time).isempty)
			{
				std::cout << "□";
			}
			else
			{
				std::cout << "■";
			}
		}
	}

	//좌석 선택 입력
	//좌석이 선택가능한지 판단 -> 선택할수 있는 경우 예약 완료 & 포인트 적립

	std::string row_col;
	std::cout << "입력해" << std::endl;

	if (row_col[0] >= 'A' && row_col[0] <= 'Z')
	{
		row_col[0] = row_col[0] - 32;
	}

	int size = row_col.size();
	int row = (int)row_col[0] - 64;
	int col = (int)row_col[size - 1];

	bool check=isavailable(row_col, (schedule)movie_time, movie_zone);

	this->zone_Info[movie_zone-1].get_seat_info(row, col, movie_time).setname(customer.getname());
	this->zone_Info[movie_zone-1].get_seat_info(row, col, movie_time).setphonenumber(customer.getphonenumber());
	this->zone_Info[movie_zone-1].get_seat_info(row, col, movie_time).setgender(customer.getgender());

	int ans;
	std::cout<<"포인트 적립 하실? 할거면 1 누르셈"<<std::endl;
	std::cin>>ans;
	if(ans==1) 
		customer.addpoint(500);
	

	

	

}

// 특정 좌석이 선택가능한 좌석인지 여부를 반환
bool CReserve::isavailable(std::string &choose_seat, schedule time, int zone)
{
	int size = choose_seat.size();
	int row = (int)choose_seat[0] - 64;
	int col = (int)choose_seat[size - 1];

	if (isempty(row, col, time, zone) && isempty(row - 1, col, time, zone) && isempty(row + 1, col, time, zone) && isempty(row, col - 1, time, zone) && isempty(row, col + 1, time, zone))
		return false;
	return true;
}
bool CReserve::isempty(int row, int col, int time, int zone)
{
	if (row < 0 || row > SEAT_ROW_NUM - 1 || col < 0 || col > SEAT_COL_NUM - 1)
		return true; //좌석이 범위를 벗어날 경우 고려하지 않아도 된다.
	return zone_Info[zone].get_seat_info(row, col, time).isempty;
}


bool CReserve::cancel_reservation(CPerson_Info &customer)
{
	

}


#include "Option.h"
#include "CPrint.h"
#include <windows.h>
#include <string>
#include "Cinema.h"
#include "CZone.h"
#include "CPerson_Info.h"
#include "CMovie_Info.h"


int main(){
    
    CZone zones[ZONE_NUM]={CZone(SEAT_ROW_NUM, SEAT_COL_NUM), CZone(SEAT_ROW_NUM, SEAT_COL_NUM),
                           CZone(SEAT_ROW_NUM, SEAT_COL_NUM), CZone(SEAT_ROW_NUM, SEAT_COL_NUM),};


    CMovie_Info movies[MOVIES_NUM]={CMovie_Info("어벤져스", 6), CMovie_Info("소울", 6), CMovie_Info("광해", 6), CMovie_Info("어바웃 타임",6)};
    
    std::string movie_title[MOVIES_NUM];
    for(int i=0; i<MOVIES_NUM; i++){
        movie_title[i]=movies[i].get_movie_name();
    }

    schedule_table daily_movie[MOVIES_NUM][SCHEDULE_NUM]={ {schedule_table(0, schedule::MORNING_1), schedule_table(0, schedule::MORNING_2), schedule_table(0, schedule::MORNING_3), schedule_table(0, schedule::AFTERNOON_1), schedule_table(0, schedule::AFTERNOON_2), schedule_table(0, schedule::AFTERNOON_3)},
                                                           {schedule_table(1, schedule::MORNING_1), schedule_table(1, schedule::MORNING_2), schedule_table(1, schedule::MORNING_3), schedule_table(1, schedule::AFTERNOON_1), schedule_table(1, schedule::AFTERNOON_2), schedule_table(1, schedule::AFTERNOON_3),},
                                                           {schedule_table(2, schedule::MORNING_1), schedule_table(2, schedule::MORNING_2), schedule_table(2, schedule::MORNING_3), schedule_table(2, schedule::AFTERNOON_1), schedule_table(2, schedule::AFTERNOON_2), schedule_table(2, schedule::AFTERNOON_3),},
                                                           {schedule_table(3, schedule::MORNING_1), schedule_table(3, schedule::MORNING_2), schedule_table(3, schedule::MORNING_3), schedule_table(3, schedule::AFTERNOON_1), schedule_table(3, schedule::AFTERNOON_2), schedule_table(3, schedule::AFTERNOON_3),},
                                                         };
    
    for(int i = 0; i < MOVIES_NUM; i++){
        for(int j = 0; j < SCHEDULE_NUM; j++){
            int zone = daily_movie[i][j].m_zone_num;
            zones[zone].set_movie_info(daily_movie[i][j].m_movie_schedule, zone, movie_title[i]);
        }
    }


    
    
    CPerson_Info people[PEOPLE_NUM];
    std::string names[PEOPLE_NUM]={"강기수","강남규","강다연","강성령","강수진","강지원","강형창","고석영","공소명","곽민재",
                                   "구희태","권수현","권철호","김강산","김규태","김근우","김기현","김도욱","김도훈","김동명",
                                   "김동환","김리아","김민관","김민주","김민철","김상윤","김서연","김서영","김선득","김성범",
                                   "김순준","김영락","김우정","김우형","김은진","김정욱","김정윤","김주연","김지선","김지영",
                                   "김지우","김지한","김지현","김진혁","김형진","김호연","김효명","김휘영","남금내","노유진",
                                   "류기완","류현태","명호성","문병승","박광호","박근형","박도현","박동녘","박상현","박유정",
                                   "박은혜","박재석","박제훈","박찬호","박혜민","배주예","백창현","서윤석","서정민","석기은",
                                   "선우윤","성의현","손희진","송규영","송민지","송채현","신동승","안병윤","안서영","안윤지",
                                   "안윤혜","양효준","양희주","여무한","염경은","오미진","오인성","오재익","우혁상","유미라",
                                   "유병선","유솔지","유용준","유정식","유지선","유호선","윤국로","윤기애","윤원건","윤희철"};
                                       
    std::string phonenumber[PEOPLE_NUM]={"01040737288", "01022830273", "01070534850", "01024545406", "01064343371", 
                                         "01005162651", "01028025800", "01040481280", "01028167418", "01040708460", 
                                         "01017125103", "01056444201", "01044164115", "01071165220", "01001531802", 
                                         "01020407642", "01076336336", "01076472715", "01033883605", "01076566045", 
                                         "01001768708", "01088006662", "01052616313", "01085830574", "01083453720", 
                                         "01064372243", "01042357187", "01066364621", "01078838183", "01076528142", 
                                         "01007600328", "01004871452", "01087552658", "01070344126", "01004683055", 
                                         "01076750077", "01057384444", "01060456633", "01056066254", "01064353663", 
                                         "01034273325", "01071003220", "01020206656", "01045563661", "01054751538", 
                                         "01060700166", "01081545610", "01010868010", "01032882384", "01007424731", 
                                         "01024722374", "01058365886", "01003525451", "01065136550", "01010221737", 
                                         "01005134454", "01074681207", "01084464348", "01074470121", "01077280640", 
                                         "01074586056", "01076160842", "01073833260", "01032263388", "01047607543", 
                                         "01026521270", "01055880530", "01082282316", "01053661403", "01037412742", 
                                         "01084242240", "01005335422", "01023721823", "01014108510", "01030885428", 
                                         "01008781055", "01017738405", "01053584725", "01028443314", "01016307382", 
                                         "01076187520", "01036018258", "01007787700", "01023318438", "01035213763", 
                                         "01087247512", "01084464070", "01007235788", "01007247752", "01030680554", 
                                         "01046746553", "01043282768", "01017457383", "01088715248", "01074813404", 
                                         "01077804634", "01045766468", "01003858611", "01002132174", "01018616574"};

    bool gender[PEOPLE_NUM]={1,0,1,0,1,0,1,0,1,1,
                             1,1,1,1,1,0,0,0,0,0,
                             0,1,0,1,0,0,1,0,1,0,
                             0,1,1,0,1,0,1,0,1,0,
                             0,0,0,1,1,1,0,1,0,1,
                             1,0,0,1,0,0,1,1,1,0,
                             1,0,1,0,1,0,1,0,1,0,
                             0,1,0,1,0,1,0,1,0,1,
                             0,0,0,1,1,1,0,0,1,0,
                             1,0,1,0,1,0,1,0,1,1};
    
    //person info setting
    for(int i = 0; i < PEOPLE_NUM; i++){
        people[i].setgender(gender[i]);
        people[i].setphonenumber(phonenumber[i]);
        people[i].setname(names[i]);
    }


    for(int i = 0; i < ZONE_NUM; i++){
        for(int j = 0; j < 25; j++){
            
        }
    }
    Cinema cinema();



    return 0;
}
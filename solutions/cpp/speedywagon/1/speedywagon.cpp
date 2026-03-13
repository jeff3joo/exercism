#include "speedywagon.h"

namespace speedywagon {

    bool connection_check (pillar_men_sensor* Sensor){
        if (Sensor) return true;
        return false;
    }

    int activity_counter(pillar_men_sensor* sensor, int capaci){
        int total = 0;
        for(int i =0;i<capaci;i++){
            total+=sensor[i].activity;
        }
        return total;
    }

    bool alarm_control(pillar_men_sensor* Sensors){
        if(!Sensors) return false;
        if(Sensors->activity > 0) return true;
        return false;
    }
    
    bool uv_alarm (pillar_men_sensor* Sensors){
        if(!Sensors) return false;
        if(uv_light_heuristic(&Sensors->data)>Sensors->activity) return true;
        return false;
    }

int uv_light_heuristic(std::vector<int>* data_array) {
    double avg{};
    for (auto element : *data_array) {
        avg += element;
    }
    avg /= data_array->size();
    int uv_index{};
    for (auto element : *data_array) {
        if (element > avg) ++uv_index;
    }
    return uv_index;
}

}  // namespace speedywagon

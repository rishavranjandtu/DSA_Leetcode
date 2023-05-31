class UndergroundSystem {
public:
  unordered_map<int,pair<string,int>>in;
  unordered_map<string,pair<int,int>>out;
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string s, int t) {
      in[id]={s,t};
        
    }
    
    void checkOut(int id, string s, int t) {
      
      auto x=in[id];
      in.erase(id);
      string a=x.first+"_"+s;
      out[a].first+=t-x.second;
      out[a].second+=1;
    }
    
    double getAverageTime(string a, string b) {
      return (double)out[a+"_"+b].first/(out[a+"_"+b].second);
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */
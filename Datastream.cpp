//sliding window solution
class DataStream {
public:
    int vl, k, i = 0, j = 0;
    vector<int> v;
    unordered_map<int, int> m;
    
    DataStream(int value, int key) {
        vl = value;
        k = key;
    }
    
    bool consec(int num) {
        v.push_back(num);
        m[num]++;
        j++;
        if(v.size() < k) return false;
        if(j - i == k) {
            int f = 0;
            if(m.size() == 1 && m.find(vl) != m.end()) f = 1;
            m[v[i]]--;
            if(!m[v[i]]) m.erase(v[i]);
            i++;
            if(f) return true;
        }
        return false;
    }
};

//counting solution
class DataStream {
public:
    vector<int> data;
    int val;
    int k;
    int i;
    DataStream(int value, int w) {
        val=value;
        k=w; 
        i=0;
    }
    
    bool consec(int num) {
        data.push_back(num);
        if (num==val) i++;
        else i=0;

        if(data.size()<k) return false;
        else if(i>=k) return true;
        return false;   
    }
};
// https://leetcode.com/problems/find-consecutive-integers-from-a-data-stream/submissions/873980769/
class BrowserHistory {
    vector<string>s;
 int i=NULL;
public:
    BrowserHistory(string homepage) {
        s.push_back(homepage);
           i=0;
    }
    
    void visit(string url) {
        s.resize(i+1);
         s.push_back(url);
         i=s.size()-1;
    }
    
    string back(int steps) {
      if(i-steps<0) i=0;
      else i=i-steps;
        return s[i];
    }
    
    string forward(int steps) {
       if(i+steps>=s.size()) i=s.size()-1;
       else i= i+steps;

        return s[i];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
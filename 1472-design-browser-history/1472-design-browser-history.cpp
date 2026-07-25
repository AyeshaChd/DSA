class BrowserHistory {
    vector<string> s;
    int i = NULL;

public:
    BrowserHistory(string homepage) {
        s.push_back(homepage);
        i = 0;
    }

    void visit(string url) {
        s.resize(i + 1); // in browzer history means where i was lasttime
                         // directly comes to last pushed element and those
                         // indexes who were never forwarded totaly deleted
                       //history = ["A", "B", "C", "D"]
                         // i = 1   // Currently at "B"

                          // You want to keep:

                           // ["A", "B"]

                        // which has 2 elements.

                        // Using resize(i + 1) ✅
        s.push_back(url);
        i = s.size() - 1;
    }

    string back(int steps) {
        if (i - steps < 0)
            i = 0;
        else
            i = i - steps;
        return s[i];
    }

    string forward(int steps) {
        if (i + steps >= s.size())
            i = s.size() - 1;
        else
            i = i + steps;

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
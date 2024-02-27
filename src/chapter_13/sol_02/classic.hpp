// base class
class Cd { // represents a CD disk
private:
    char* performers;
    char* label;
    int selections; // number of selections
    double playtime; // playing time in minutes
public:
    Cd(const char *s1, const char *s2, int n, double x);
    Cd(const Cd & d);
    Cd();
    ~Cd();
    virtual void Report() const; // reports all CD data
    Cd & operator=(const Cd & d);
};

// Classic Class
class Classic : public Cd {
    private:
        char* primaryWork; // Added member to hold the primary work on the CD
    public:
        Classic(const char *s1, const char *s2, int n, double x, const char *pw);
        Classic(const Classic &d);
        Classic();
        void Report() const override;
        Classic & operator=(const Classic & d);
        ~Classic();
};
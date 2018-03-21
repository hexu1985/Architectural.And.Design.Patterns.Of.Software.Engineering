#ifndef __holidaycard_h
#define __holidaycard_h

class Holidaycard {
public:
    void writeACard() {
        writeText();
        writeAdditional();
    }

private:
    void writeText();
    virtual void writeAdditional() = 0;
};

#endif

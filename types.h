#include <iostream>
#include <assert.h>
#include <math.h>
#include <string.h>
#ifndef __TYPES_H__
#define __TYPES_H__

using namespace std;

class Variable
{
private:
    string name;
protected:
    Variable(string name)
    {
        this->name = name;
    }
public:
    string getName() const { return name; }
    virtual const string getType() = 0;
};

class NChar : public Variable {
private:
    char value;
public:
    NChar():Variable("0"), value('0')
    {
    }
    NChar(char value):Variable("0")
    {
        this->value = value;
    }
    NChar(string name, char value):Variable(name)
    {
        this->value = value;
    }
    const char getValue()
    {
        return value;
    }
    virtual const string getType() override
    {
        return "char";
    }
    NChar(NChar* a) :Variable(a->getName())
    {
        value = a->getValue();
    }

    NChar* clone() const
    {
        return new NChar(value);
    }
};

class NInt : public Variable {
private:
    int value;
public:

    NInt() :Variable("0"), value('0')
    {
    }
    NInt(int value) :Variable("0")
    {
        this->value = value;
    }
    NInt(string name, int value) :Variable(name)
    {
        this->value = value;
    }
    const int getValue()
    {
        return value;
    }
    virtual const string getType() override
    {
        return "int";
    }
    NInt(NInt* a) :Variable(a->getName())
    {
        value = a->getValue();
    }

    NInt* clone() const
    {
        return new NInt(value);
    }
};

class NFloat : public Variable {
private:
    float value;
public:

    NFloat() :Variable("0"), value('0')
    {
    }
    NFloat(float value) :Variable("0")
    {
        this->value = value;
    }
    NFloat(string name, float value) :Variable(name)
    {
        this->value = value;
    }
    const float getValue()
    {
        return value;
    }
    virtual const string getType() override
    {
        return "float";
    }
    NFloat(NFloat* a) :Variable(a->getName())
    {
        value = a->getValue();
    }

    NFloat* clone() const
    {
        return new NFloat(value);
    }
};

class NDouble : public Variable {
private:
    double value;
public:

    NDouble() :Variable("0"), value('0')
    {
    }
    NDouble(double value) :Variable("0")
    {
        this->value = value;
    }
    NDouble (string name, double value) :Variable(name)
    {
        this->value = value;
    }
    const double getValue()
    {
        return value;
    }
    virtual const string getType() override
    {
        return "double";
    }
    NDouble(NDouble* a) :Variable(a->getName())
    {
        value = a->getValue();
    }

    NDouble* clone() const
    {
        return new NDouble(value);
    }
};

class NBool : public Variable {
private:
    bool value;
public:

    NBool() :Variable("0"), value('0')
    {
    }
    NBool(bool value) :Variable("0")
    {
        this->value = value;
    }
    NBool(string name, bool value) :Variable(name)
    {
        this->value = value;
    }
    const bool getValue()
    {
        return value;
    }
    virtual const string getType() override
    {
        return "bool";
    }
    NBool(NBool* a) :Variable(a->getName())
    {
        value = a->getValue();
    }

    NBool* clone() const
    {
        return new NBool(value);
    }
};


#endif 
#pragma once

/*
 * DO NOT ADAPT THIS FILE!!!
 */

class BlackboardStrategy
{
public:
                        BlackboardStrategy();
    virtual            ~BlackboardStrategy();

public:
    virtual unsigned    fitnessStrategy1()          const;
    virtual unsigned    fitnessStrategy2()          const;
    virtual unsigned    fitnessStrategy3()          const;
    virtual unsigned    fitnessStrategy4()          const;
    virtual unsigned    fitnessStrategy5()          const;
    virtual unsigned    fitnessStrategy6()          const;

public:
    virtual unsigned    resultStrategy1()           const;
    virtual unsigned    resultStrategy2()           const;
    virtual unsigned    resultStrategy3()           const;
    virtual unsigned    resultStrategy4()           const;
    virtual unsigned    resultStrategy5()           const;
    virtual unsigned    resultStrategy6()           const;

public:
    virtual void        initialize();
    virtual void        setBestStrategy( unsigned );    
    virtual void        setBestResult( unsigned );

public:
    virtual unsigned    getBestStrategy()           const;
    virtual unsigned    getBestResult()             const;

private:
    virtual unsigned    fitnessStrategy( unsigned ) const;
    virtual unsigned    resultStrategy( unsigned )  const;

    virtual unsigned    value( unsigned, unsigned ) const;

private:
    unsigned            m_uBestStrategy;    // contains the best strategy, i.e. value 1 to 6
    unsigned            m_uBestResult;      // contains the best (i.e. highest) value of the result
};

#include "BlackboardStrategy.h"

/*
 * DO NOT ADAPT THIS FILE!!!
 */

#include <climits>
#include <ctime>
#include <random>

BlackboardStrategy::BlackboardStrategy()
{
    initialize();
}

BlackboardStrategy::~BlackboardStrategy()
{
}

unsigned BlackboardStrategy::fitnessStrategy1() const   { return fitnessStrategy(1); }
unsigned BlackboardStrategy::fitnessStrategy2() const   { return fitnessStrategy(2); }
unsigned BlackboardStrategy::fitnessStrategy3() const   { return fitnessStrategy(3); }
unsigned BlackboardStrategy::fitnessStrategy4() const   { return fitnessStrategy(4); }
unsigned BlackboardStrategy::fitnessStrategy5() const   { return fitnessStrategy(5); }
unsigned BlackboardStrategy::fitnessStrategy6() const   { return fitnessStrategy(6); }

unsigned BlackboardStrategy::resultStrategy1()  const   { return resultStrategy(1); }
unsigned BlackboardStrategy::resultStrategy2()  const   { return resultStrategy(2); }
unsigned BlackboardStrategy::resultStrategy3()  const   { return resultStrategy(3); }
unsigned BlackboardStrategy::resultStrategy4()  const   { return resultStrategy(4); }
unsigned BlackboardStrategy::resultStrategy5()  const   { return resultStrategy(5); }
unsigned BlackboardStrategy::resultStrategy6()  const   { return resultStrategy(6); }

void     BlackboardStrategy::initialize()
{
    m_uBestStrategy = 0;
    m_uBestResult   = 0;
}

void     BlackboardStrategy::setBestStrategy( unsigned uBestStrategy )
{
    m_uBestStrategy = uBestStrategy;
}

void     BlackboardStrategy::setBestResult( unsigned uBestResult )
{
    m_uBestResult   = uBestResult;
}

unsigned BlackboardStrategy::getBestStrategy() const
{
    return m_uBestStrategy;
}

unsigned BlackboardStrategy::getBestResult() const
{
    return m_uBestResult;
}

unsigned BlackboardStrategy::fitnessStrategy( unsigned uStrategy ) const
{
    return value( uStrategy, 10000 );
}

unsigned BlackboardStrategy::resultStrategy( unsigned uStrategy )  const
{
    return value( uStrategy, 1000000 );
}

unsigned BlackboardStrategy::value( unsigned uStrategy, unsigned uTotal ) const
{
    std::default_random_engine              cRandomEngine( unsigned(time(nullptr))+uStrategy );
    std::uniform_real_distribution<double>  cDistribution( 0, 10 );

    unsigned                                nResult = 0;
    double                                  dStep   = double(0xffffffffUL) / ( uTotal+uStrategy );

    for ( unsigned n = 0; n < uTotal; n++ )
        nResult    += unsigned( dStep * cDistribution( cRandomEngine ) );

    return nResult;
}

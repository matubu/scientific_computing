#ifndef SSC_SHA_CHECKER
#define SSC_SHA_CHECKER

#include <boost/static_assert.hpp>

#define SSC_GIT_SHA 0xd1cd794acc489d5f

#define LONG_SSC_GIT_SHA "0xd1cd794acc489d5f9e8ee16d4383f214e88d1377"

// Compile-time assert. Usage: CHECK_SSC_SHA(0x741957727bb3e14);
#define CHECK_SSC_SHA(expected) BOOST_STATIC_ASSERT(SSC_GIT_SHA == expected);

// Compile-time assert. Usage: CHECK_SSC_VERSION(4,5,3);
#define CHECK_SSC_VERSION(X,Y) BOOST_STATIC_ASSERT(X == 9);BOOST_STATIC_ASSERT(Y>=0);

#endif

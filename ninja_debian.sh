#!/bin/sh
mkdir -p ssc/build_deb11
docker run\
    --rm\
    -u $( id -u ):$( id -g )\
    -v $(pwd):/opt/share\
    -w /opt/share/ssc/build_deb11\
    sirehna/base-image-debian11-gcc10:2021-08-17 \
	cmake -Wno-dev \
		-G Ninja \
		-D CREATE_INDIVIDUAL_LIBRARIES:BOOL=True \
		-D CMAKE_BUILD_TYPE=Release \
		-D CMAKE_INSTALL_PREFIX:PATH=/opt/ssc \
		-D IPOPT_ROOT:PATH=/opt/CoinIpopt \
		-D BOOST_ROOT:PATH=/opt/boost \
		..
docker run\
    --rm\
    -u $( id -u ):$( id -g )\
    -v $(pwd):/opt/share\
    -w /opt/share/ssc/build_deb11\
    sirehna/base-image-debian11-gcc10:2021-08-17\
    ninja  $*

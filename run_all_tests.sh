#!/bin/sh
docker run $TERMINAL \
    --security-opt seccomp=unconfined \
    --rm \
    -u $( id -u $USER ):$( id -g $USER ) \
    -v $(pwd)/ssc/build_deb11:/build \
    -w /build \
    -it \
    sirehna/base-image-debian11-gcc10:2021-08-17 \
    /bin/bash -c "export LD_LIBRARY_PATH=/build; ./run_all_tests `echo $*`"

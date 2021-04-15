#!/bin/sh

for module in csv_file_reader\
              csv_writer\
              data_source\
              decode_unit\
              exception_handling\
              functors_for_optimizer\
              geometry\
              integrate\
              interpolation\
              ipopt_interface\
              json\
              kinematics\
              macros\
              matrix_and_vector_classes\
              numeric\
              optimizer\
              pimpl_idiom\
              random_data_generator\
              solver\
              text_file_reader\
              websocket\
              yaml_parser
          do
                  echo "/*" > ${module}.hpp
                  cat copyright_notice.txt >> ${module}.hpp
                  echo "*/" >> ${module}.hpp
                  echo "#ifndef ${module}_guard" >> ${module}.hpp
                  echo "#define ${module}_guard" >> ${module}.hpp
                  echo "" >> ${module}.hpp
                  for header in `ls ${module}/*.h*`
                  do
                      echo "#include \"ssc/${header}\"" >> ${module}.hpp
                  done
                  echo "" >> ${module}.hpp
                  echo "" >> ${module}.hpp
                  echo "#endif" >> ${module}.hpp
          done

# Compute git version variables
GIT_VERSION=`git describe --tags --dirty=-dirty`
MAJOR=`echo "$GIT_VERSION" | sed 's/v\([0-9]\+\)\.\([0-9]\+\)\.\([0-9]\+\)-\(.*\)/\1/g'`
MINOR=`echo "$GIT_VERSION" | sed 's/v\([0-9]\+\)\.\([0-9]\+\)\.\([0-9]\+\)-\(.*\)/\2/g'`
LONG_SHA=`git rev-parse HEAD`
SHORT_SHA=`git rev-parse --short HEAD`

# Generate SSC version checker
echo "" > check_ssc_version.hpp
echo "#ifndef SSC_SHA_CHECKER" >> check_ssc_version.hpp
echo "#define SSC_SHA_CHECKER" >> check_ssc_version.hpp
echo "" >> check_ssc_version.hpp
echo "#include <boost/static_assert.hpp>" >> check_ssc_version.hpp
echo "#define SSC_GIT_SHA 0x${SHORT_SHA}" >> check_ssc_version.hpp
echo "#define LONG_SSC_GIT_SHA \"0x${LONG_SHA}\"" >> check_ssc_version.hpp
echo "// Compile-time assert. Usage: CHECK_SSC_SHA(0x741957727bb3e14);" >> check_ssc_version.hpp
echo "#define CHECK_SSC_SHA(expected) BOOST_STATIC_ASSERT(SSC_GIT_SHA == expected);" >> check_ssc_version.hpp
echo "// Compile-time assert. Usage: CHECK_SSC_VERSION(4,5,3);" >> check_ssc_version.hpp
echo "#define CHECK_SSC_VERSION(X,Y) BOOST_STATIC_ASSERT(X == ${MAJOR});BOOST_STATIC_ASSERT(Y>=${MINOR});" >> check_ssc_version.hpp
echo "#endif" >> check_ssc_version.hpp


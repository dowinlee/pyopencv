// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "CvFuzzyFunction.pypp.hpp"

namespace bp = boost::python;

void register_CvFuzzyFunction_class(){

    bp::class_< CvFuzzyFunction >( "CvFuzzyFunction" )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvFuzzyFunction >() );

}
// This file has been generated by Py++.

#include "boost/python.hpp"
#include "opencv_headers.hpp"
#include "pyopencvext_free_functions_sq.pypp.hpp"

namespace bp = boost::python;

void register_free_functions_sq(){

    { //::cv::sqrt
    
        typedef void ( *sqrt_function_type )( ::cv::MatND const &,::cv::MatND & );
        
        bp::def( 
            "sqrt"
            , sqrt_function_type( &::cv::sqrt )
            , ( bp::arg("a"), bp::arg("b") )
            , "\nCalculates square root of array elements."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-sqrt" );
    
    }

    { //::cv::sqrt
    
        typedef void ( *sqrt_function_type )( ::cv::Mat const &,::cv::Mat & );
        
        bp::def( 
            "sqrt"
            , sqrt_function_type( &::cv::sqrt )
            , ( bp::arg("a"), bp::arg("b") )
            , "\nCalculates square root of array elements."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-sqrt" );
    
    }

}
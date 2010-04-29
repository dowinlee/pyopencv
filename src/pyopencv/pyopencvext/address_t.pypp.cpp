// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "address_t.pypp.hpp"

namespace bp = boost::python;

void register_address_t_class(){

    bp::class_< sdopencv::address_t >( "address_t" )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< sdopencv::address_t >() )    
        .def_readwrite( "val", &sdopencv::address_t::val );

}

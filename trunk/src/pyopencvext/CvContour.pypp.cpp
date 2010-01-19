// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__array_1.pypp.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "boost/python/object.hpp"
#include "boost/python/str.hpp"
#include "cvcontour.pypp.hpp"

namespace bp = boost::python;

struct CvContour_wrapper : CvContour, bp::wrapper< CvContour > {

    CvContour_wrapper(CvContour const & arg )
    : CvContour( arg )
      , bp::wrapper< CvContour >(){
        // copy constructor
        
    }

    CvContour_wrapper()
    : CvContour()
      , bp::wrapper< CvContour >(){
        // null constructor
        
    }

    static pyplusplus::containers::static_sized::array_1_t< int, 3>
    pyplusplus_reserved_wrapper( ::CvContour & inst ){
        return pyplusplus::containers::static_sized::array_1_t< int, 3>( inst.reserved );
    }

    static bp::object get_h_prev( ::CvContour const & inst ){        
        return inst.h_prev? bp::object(inst.h_prev): bp::object();
    }

    static bp::object get_h_next( ::CvContour const & inst ){        
        return inst.h_next? bp::object(inst.h_next): bp::object();
    }

    static bp::object get_v_prev( ::CvContour const & inst ){        
        return inst.v_prev? bp::object(inst.v_prev): bp::object();
    }

    static bp::object get_v_next( ::CvContour const & inst ){        
        return inst.v_next? bp::object(inst.v_next): bp::object();
    }

    static bp::object get_storage( ::CvContour const & inst ){        
        return inst.storage? bp::object(inst.storage): bp::object();
    }

    static bp::object get_free_blocks( ::CvContour const & inst ){        
        return inst.free_blocks? bp::object(inst.free_blocks): bp::object();
    }

    static bp::object get_first( ::CvContour const & inst ){        
        return inst.first? bp::object(inst.first): bp::object();
    }

    static bp::object get_block_max( ::CvContour const & inst ){        
        return inst.block_max? bp::str(inst.block_max): bp::object();
    }

    static bp::object get_ptr( ::CvContour const & inst ){        
        return inst.ptr? bp::str(inst.ptr): bp::object();
    }

};

void register_CvContour_class(){

    { //::CvContour
        typedef bp::class_< CvContour_wrapper > CvContour_exposer_t;
        CvContour_exposer_t CvContour_exposer = CvContour_exposer_t( "CvContour" );
        bp::scope CvContour_scope( CvContour_exposer );
        CvContour_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< CvContour >() );
        CvContour_exposer.def_readwrite( "color", &CvContour::color );
        CvContour_exposer.def_readwrite( "delta_elems", &CvContour::delta_elems );
        CvContour_exposer.def_readwrite( "elem_size", &CvContour::elem_size );
        CvContour_exposer.def_readwrite( "flags", &CvContour::flags );
        CvContour_exposer.def_readwrite( "header_size", &CvContour::header_size );
        CvContour_exposer.def_readwrite( "rect", &CvContour::rect );
        pyplusplus::containers::static_sized::register_array_1< int, 3 >( "__array_1_int_3" );
        { //CvContour::reserved [variable], type=int[3]
        
            typedef pyplusplus::containers::static_sized::array_1_t< int, 3> ( *array_wrapper_creator )( ::CvContour & );
            
            CvContour_exposer.add_property( "reserved"
                , bp::make_function( array_wrapper_creator(&CvContour_wrapper::pyplusplus_reserved_wrapper)
                                    , bp::with_custodian_and_ward_postcall< 0, 1 >() ) );
        }
        CvContour_exposer.def_readwrite( "total", &CvContour::total );
        CvContour_exposer.add_property( "h_prev", bp::make_function(&::CvContour_wrapper::get_h_prev) );
        CvContour_exposer.add_property( "h_next", bp::make_function(&::CvContour_wrapper::get_h_next) );
        CvContour_exposer.add_property( "v_prev", bp::make_function(&::CvContour_wrapper::get_v_prev) );
        CvContour_exposer.add_property( "v_next", bp::make_function(&::CvContour_wrapper::get_v_next) );
        CvContour_exposer.add_property( "storage", bp::make_function(&::CvContour_wrapper::get_storage) );
        CvContour_exposer.add_property( "free_blocks", bp::make_function(&::CvContour_wrapper::get_free_blocks) );
        CvContour_exposer.add_property( "first", bp::make_function(&::CvContour_wrapper::get_first) );
        CvContour_exposer.add_property( "block_max", bp::make_function(&::CvContour_wrapper::get_block_max) );
        CvContour_exposer.add_property( "ptr", bp::make_function(&::CvContour_wrapper::get_ptr) );
    }

}
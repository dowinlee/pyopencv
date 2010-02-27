// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "__convenience.pypp.hpp"
#include "opencv_converters.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "opencv_converters.hpp"
#include "FernClassifier.pypp.hpp"

namespace bp = boost::python;

struct FernClassifier_wrapper : cv::FernClassifier, bp::wrapper< cv::FernClassifier > {

    FernClassifier_wrapper(cv::FernClassifier const & arg )
    : cv::FernClassifier( arg )
      , bp::wrapper< cv::FernClassifier >(){
        // copy constructor
        
    }

    FernClassifier_wrapper( )
    : cv::FernClassifier( )
      , bp::wrapper< cv::FernClassifier >(){
        // null constructor
    
    }

    FernClassifier_wrapper(::cv::FileNode const & node )
    : cv::FernClassifier( boost::ref(node) )
      , bp::wrapper< cv::FernClassifier >(){
        // constructor
    
    }

    virtual void clear(  ) {
        if( bp::override func_clear = this->get_override( "clear" ) )
            func_clear(  );
        else{
            this->cv::FernClassifier::clear(  );
        }
    }
    
    void default_clear(  ) {
        cv::FernClassifier::clear( );
    }

    virtual int operator()( ::cv::Mat const & img, ::cv::Point2f kpt, ::std::vector< float > & signature ) const  {
        namespace bpl = boost::python;
        if( bpl::override func___call__ = this->get_override( "__call__" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func___call__.ptr(), img, kpt, signature );
            return bpl::extract< int >( pyplus_conv::get_out_argument( py_result, 0 ) );
        }
        else{
            return cv::FernClassifier::operator()( boost::ref(img), kpt, boost::ref(signature) );
        }
    }
    
    static boost::python::tuple default___call___c4d2198033cf380377bb6f32571c2657( ::cv::FernClassifier const & inst, ::cv::Mat const & img, ::cv::Point2f kpt ){
        std::vector<float, std::allocator<float> > signature2;
        cv::Mat signature3;
        int result;
        if( dynamic_cast< FernClassifier_wrapper const* >( boost::addressof( inst ) ) ){
            result = inst.::cv::FernClassifier::operator()(img, kpt, signature2);
        }
        else{
            result = inst.operator()(img, kpt, signature2);
        }
        convert_from_vector_of_T_to_Mat(signature2, signature3);
        return bp::make_tuple( result, signature3 );
    }

    virtual int operator()( ::cv::Mat const & patch, ::std::vector< float > & signature ) const  {
        namespace bpl = boost::python;
        if( bpl::override func___call__ = this->get_override( "__call__" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func___call__.ptr(), patch, signature );
            return bpl::extract< int >( pyplus_conv::get_out_argument( py_result, 0 ) );
        }
        else{
            return cv::FernClassifier::operator()( boost::ref(patch), boost::ref(signature) );
        }
    }
    
    static boost::python::tuple default___call___ddcd7402f4cc50fa35ce4888642630c7( ::cv::FernClassifier const & inst, ::cv::Mat const & patch ){
        std::vector<float, std::allocator<float> > signature2;
        cv::Mat signature3;
        int result;
        if( dynamic_cast< FernClassifier_wrapper const* >( boost::addressof( inst ) ) ){
            result = inst.::cv::FernClassifier::operator()(patch, signature2);
        }
        else{
            result = inst.operator()(patch, signature2);
        }
        convert_from_vector_of_T_to_Mat(signature2, signature3);
        return bp::make_tuple( result, signature3 );
    }

    virtual void read( ::cv::FileNode const & n ) {
        if( bp::override func_read = this->get_override( "read" ) )
            func_read( boost::ref(n) );
        else{
            this->cv::FernClassifier::read( boost::ref(n) );
        }
    }
    
    void default_read( ::cv::FileNode const & n ) {
        cv::FernClassifier::read( boost::ref(n) );
    }

    virtual void trainFromSingleView( ::cv::Mat const & image, ::std::vector< cv::KeyPoint > const & keypoints, int _patchSize=int(::cv::FernClassifier::PATCH_SIZE), int _signatureSize=int(::cv::FernClassifier::DEFAULT_SIGNATURE_SIZE), int _nstructs=int(::cv::FernClassifier::DEFAULT_STRUCTS), int _structSize=int(::cv::FernClassifier::DEFAULT_STRUCT_SIZE), int _nviews=int(::cv::FernClassifier::DEFAULT_VIEWS), int _compressionMethod=int(::cv::FernClassifier::COMPRESSION_NONE), ::cv::PatchGenerator const & patchGenerator=cv::PatchGenerator() ) {
        namespace bpl = boost::python;
        if( bpl::override func_trainFromSingleView = this->get_override( "trainFromSingleView" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_trainFromSingleView.ptr(), image, keypoints, _patchSize, _signatureSize, _nstructs, _structSize, _nviews, _compressionMethod, patchGenerator );
        }
        else{
            cv::FernClassifier::trainFromSingleView( boost::ref(image), boost::ref(keypoints), _patchSize, _signatureSize, _nstructs, _structSize, _nviews, _compressionMethod, boost::ref(patchGenerator) );
        }
    }
    
    static void default_trainFromSingleView( ::cv::FernClassifier & inst, ::cv::Mat const & image, bp::list const & keypoints, int _patchSize=int(::cv::FernClassifier::PATCH_SIZE), int _signatureSize=int(::cv::FernClassifier::DEFAULT_SIGNATURE_SIZE), int _nstructs=int(::cv::FernClassifier::DEFAULT_STRUCTS), int _structSize=int(::cv::FernClassifier::DEFAULT_STRUCT_SIZE), int _nviews=int(::cv::FernClassifier::DEFAULT_VIEWS), int _compressionMethod=int(::cv::FernClassifier::COMPRESSION_NONE), ::cv::PatchGenerator const & patchGenerator=cv::PatchGenerator() ){
        std::vector<cv::KeyPoint, std::allocator<cv::KeyPoint> > keypoints2;
        convert_from_object_to_T(keypoints, keypoints2);
        if( dynamic_cast< FernClassifier_wrapper * >( boost::addressof( inst ) ) ){
            inst.::cv::FernClassifier::trainFromSingleView(image, keypoints2, _patchSize, _signatureSize, _nstructs, _structSize, _nviews, _compressionMethod, patchGenerator);
        }
        else{
            inst.trainFromSingleView(image, keypoints2, _patchSize, _signatureSize, _nstructs, _structSize, _nviews, _compressionMethod, patchGenerator);
        }
    }

    virtual void write( ::cv::FileStorage & fs, ::cv::String const & name=std::string() ) const  {
        if( bp::override func_write = this->get_override( "write" ) )
            func_write( boost::ref(fs), name );
        else{
            this->cv::FernClassifier::write( boost::ref(fs), name );
        }
    }
    
    void default_write( ::cv::FileStorage & fs, ::cv::String const & name=std::string() ) const  {
        cv::FernClassifier::write( boost::ref(fs), name );
    }

};

static void train( ::cv::FernClassifier & inst, cv::Mat const & points, bp::list const & refimgs, cv::Mat const & labels=convert_from_vector_of_T_to_Mat(std::vector<int>()), int _nclasses=0, int _patchSize=int(::cv::FernClassifier::PATCH_SIZE), int _signatureSize=int(::cv::FernClassifier::DEFAULT_SIGNATURE_SIZE), int _nstructs=int(::cv::FernClassifier::DEFAULT_STRUCTS), int _structSize=int(::cv::FernClassifier::DEFAULT_STRUCT_SIZE), int _nviews=int(::cv::FernClassifier::DEFAULT_VIEWS), int _compressionMethod=int(::cv::FernClassifier::COMPRESSION_NONE), ::cv::PatchGenerator const & patchGenerator=cv::PatchGenerator() ){
    std::vector<cv::Point_<float>, std::allocator<cv::Point_<float> > > points2;
    std::vector<cv::Ptr<cv::Mat>,std::allocator<cv::Ptr<cv::Mat> > > refimgs2;
    std::vector<int, std::allocator<int> > labels2;
    convert_from_Mat_to_vector_of_T(points, points2);
    int i, n = bp::len(refimgs); refimgs2.resize(n);
    for(i = 0; i < n; ++i)
    {
        cv::Mat *obj = new cv::Mat();
        *obj = bp::extract<cv::Mat const &>(refimgs[i]);
        refimgs2[i] = cv::Ptr<cv::Mat>(obj);
    }
    convert_from_Mat_to_vector_of_T(labels, labels2);
    inst.train(points2, refimgs2, labels2, _nclasses, _patchSize, _signatureSize, _nstructs, _structSize, _nviews, _compressionMethod, patchGenerator);
}

static boost::shared_ptr<cv::FernClassifier> FernClassifier_init1( cv::Mat const & points, bp::list const & refimgs, cv::Mat const & labels=convert_from_vector_of_T_to_Mat(std::vector<int>()), int _nclasses=0, int _patchSize=int(::cv::FernClassifier::PATCH_SIZE), int _signatureSize=int(::cv::FernClassifier::DEFAULT_SIGNATURE_SIZE), int _nstructs=int(::cv::FernClassifier::DEFAULT_STRUCTS), int _structSize=int(::cv::FernClassifier::DEFAULT_STRUCT_SIZE), int _nviews=int(::cv::FernClassifier::DEFAULT_VIEWS), int _compressionMethod=int(::cv::FernClassifier::COMPRESSION_NONE), ::cv::PatchGenerator const & patchGenerator=cv::PatchGenerator() ){
    cv::FernClassifier *obj = new cv::FernClassifier();
    train(*obj, points, refimgs, labels, _nclasses, _patchSize, _signatureSize, 
        _nstructs, _structSize, _nviews, _compressionMethod, patchGenerator);
    return boost::shared_ptr<cv::FernClassifier>(obj);
}

void register_FernClassifier_class(){

    { //::cv::FernClassifier
        typedef bp::class_< FernClassifier_wrapper > FernClassifier_exposer_t;
        FernClassifier_exposer_t FernClassifier_exposer = FernClassifier_exposer_t( "FernClassifier", bp::init< >() );
        bp::scope FernClassifier_scope( FernClassifier_exposer );
        FernClassifier_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::FernClassifier >() );
        bp::scope().attr("PATCH_SIZE") = (int)cv::FernClassifier::PATCH_SIZE;
        bp::scope().attr("DEFAULT_STRUCTS") = (int)cv::FernClassifier::DEFAULT_STRUCTS;
        bp::scope().attr("DEFAULT_STRUCT_SIZE") = (int)cv::FernClassifier::DEFAULT_STRUCT_SIZE;
        bp::scope().attr("DEFAULT_VIEWS") = (int)cv::FernClassifier::DEFAULT_VIEWS;
        bp::scope().attr("DEFAULT_SIGNATURE_SIZE") = (int)cv::FernClassifier::DEFAULT_SIGNATURE_SIZE;
        bp::scope().attr("COMPRESSION_NONE") = (int)cv::FernClassifier::COMPRESSION_NONE;
        bp::scope().attr("COMPRESSION_RANDOM_PROJ") = (int)cv::FernClassifier::COMPRESSION_RANDOM_PROJ;
        bp::scope().attr("COMPRESSION_PCA") = (int)cv::FernClassifier::COMPRESSION_PCA;
        bp::scope().attr("DEFAULT_COMPRESSION_METHOD") = (int)cv::FernClassifier::DEFAULT_COMPRESSION_METHOD;
        bp::class_< cv::FernClassifier::Feature >( "Feature", bp::init< >() )    
            .add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::FernClassifier::Feature >() )    
            .def( bp::init< int, int, int, int >(( bp::arg("_x1"), bp::arg("_y1"), bp::arg("_x2"), bp::arg("_y2") )) )    
            .def_readwrite( "x1", &cv::FernClassifier::Feature::x1 )    
            .def_readwrite( "x2", &cv::FernClassifier::Feature::x2 )    
            .def_readwrite( "y1", &cv::FernClassifier::Feature::y1 )    
            .def_readwrite( "y2", &cv::FernClassifier::Feature::y2 );
        FernClassifier_exposer.def( bp::init< cv::FileNode const & >(( bp::arg("node") )) );
        bp::implicitly_convertible< cv::FileNode const &, cv::FernClassifier >();
        { //::cv::FernClassifier::clear
        
            typedef void ( ::cv::FernClassifier::*clear_function_type )(  ) ;
            typedef void ( FernClassifier_wrapper::*default_clear_function_type )(  ) ;
            
            FernClassifier_exposer.def( 
                "clear"
                , clear_function_type(&::cv::FernClassifier::clear)
                , default_clear_function_type(&FernClassifier_wrapper::default_clear) );
        
        }
        { //::cv::FernClassifier::getClassCount
        
            typedef int ( ::cv::FernClassifier::*getClassCount_function_type )(  ) const;
            
            FernClassifier_exposer.def( 
                "getClassCount"
                , getClassCount_function_type( &::cv::FernClassifier::getClassCount ) );
        
        }
        { //::cv::FernClassifier::getCompressionMethod
        
            typedef int ( ::cv::FernClassifier::*getCompressionMethod_function_type )(  ) const;
            
            FernClassifier_exposer.def( 
                "getCompressionMethod"
                , getCompressionMethod_function_type( &::cv::FernClassifier::getCompressionMethod ) );
        
        }
        { //::cv::FernClassifier::getPatchSize
        
            typedef ::cv::Size ( ::cv::FernClassifier::*getPatchSize_function_type )(  ) const;
            
            FernClassifier_exposer.def( 
                "getPatchSize"
                , getPatchSize_function_type( &::cv::FernClassifier::getPatchSize ) );
        
        }
        { //::cv::FernClassifier::getSignatureSize
        
            typedef int ( ::cv::FernClassifier::*getSignatureSize_function_type )(  ) const;
            
            FernClassifier_exposer.def( 
                "getSignatureSize"
                , getSignatureSize_function_type( &::cv::FernClassifier::getSignatureSize ) );
        
        }
        { //::cv::FernClassifier::getStructCount
        
            typedef int ( ::cv::FernClassifier::*getStructCount_function_type )(  ) const;
            
            FernClassifier_exposer.def( 
                "getStructCount"
                , getStructCount_function_type( &::cv::FernClassifier::getStructCount ) );
        
        }
        { //::cv::FernClassifier::getStructSize
        
            typedef int ( ::cv::FernClassifier::*getStructSize_function_type )(  ) const;
            
            FernClassifier_exposer.def( 
                "getStructSize"
                , getStructSize_function_type( &::cv::FernClassifier::getStructSize ) );
        
        }
        { //::cv::FernClassifier::operator()
        
            typedef boost::python::tuple ( *default___call___function_type )( ::cv::FernClassifier const &,::cv::Mat const &,::cv::Point2f );
            
            FernClassifier_exposer.def( 
                "__call__"
                , default___call___function_type( &FernClassifier_wrapper::default___call___c4d2198033cf380377bb6f32571c2657 )
                , ( bp::arg("inst"), bp::arg("img"), bp::arg("kpt") )
                , "\nWrapped function: operator()."
    "\nArgument 'signature' is a Mat. You can use function asMat() to convert a Python sequence into a Mat, e.g. asMat([0,1,2]) or asMat((0,1,2))."\
    "\nArgument 'signature' is an output argument and is omitted from the function's calling sequence." );
        
        }
        { //::cv::FernClassifier::operator()
        
            typedef boost::python::tuple ( *default___call___function_type )( ::cv::FernClassifier const &,::cv::Mat const & );
            
            FernClassifier_exposer.def( 
                "__call__"
                , default___call___function_type( &FernClassifier_wrapper::default___call___ddcd7402f4cc50fa35ce4888642630c7 )
                , ( bp::arg("inst"), bp::arg("patch") )
                , "\nWrapped function: operator()."
    "\nArgument 'signature' is a Mat. You can use function asMat() to convert a Python sequence into a Mat, e.g. asMat([0,1,2]) or asMat((0,1,2))."\
    "\nArgument 'signature' is an output argument and is omitted from the function's calling sequence." );
        
        }
        { //::cv::FernClassifier::read
        
            typedef void ( ::cv::FernClassifier::*read_function_type )( ::cv::FileNode const & ) ;
            typedef void ( FernClassifier_wrapper::*default_read_function_type )( ::cv::FileNode const & ) ;
            
            FernClassifier_exposer.def( 
                "read"
                , read_function_type(&::cv::FernClassifier::read)
                , default_read_function_type(&FernClassifier_wrapper::default_read)
                , ( bp::arg("n") ) );
        
        }
        { //::cv::FernClassifier::setVerbose
        
            typedef void ( ::cv::FernClassifier::*setVerbose_function_type )( bool ) ;
            
            FernClassifier_exposer.def( 
                "setVerbose"
                , setVerbose_function_type( &::cv::FernClassifier::setVerbose )
                , ( bp::arg("verbose") ) );
        
        }
        { //::cv::FernClassifier::trainFromSingleView
        
            typedef void ( *default_trainFromSingleView_function_type )( ::cv::FernClassifier &,::cv::Mat const &,bp::list const &,int,int,int,int,int,int,::cv::PatchGenerator const & );
            
            FernClassifier_exposer.def( 
                "trainFromSingleView"
                , default_trainFromSingleView_function_type( &FernClassifier_wrapper::default_trainFromSingleView )
                , ( bp::arg("inst"), bp::arg("image"), bp::arg("keypoints"), bp::arg("_patchSize")=int(::cv::FernClassifier::PATCH_SIZE), bp::arg("_signatureSize")=int(::cv::FernClassifier::DEFAULT_SIGNATURE_SIZE), bp::arg("_nstructs")=int(::cv::FernClassifier::DEFAULT_STRUCTS), bp::arg("_structSize")=int(::cv::FernClassifier::DEFAULT_STRUCT_SIZE), bp::arg("_nviews")=int(::cv::FernClassifier::DEFAULT_VIEWS), bp::arg("_compressionMethod")=int(::cv::FernClassifier::COMPRESSION_NONE), bp::arg("patchGenerator")=cv::PatchGenerator() )
                , "\nArgument 'keypoints' is a list. To convert a Mat into a list, invoke one of Mat's member functions 'to_list_of_...'" );
        
        }
        { //::cv::FernClassifier::write
        
            typedef void ( ::cv::FernClassifier::*write_function_type )( ::cv::FileStorage &,::cv::String const & ) const;
            typedef void ( FernClassifier_wrapper::*default_write_function_type )( ::cv::FileStorage &,::cv::String const & ) const;
            
            FernClassifier_exposer.def( 
                "write"
                , write_function_type(&::cv::FernClassifier::write)
                , default_write_function_type(&FernClassifier_wrapper::default_write)
                , ( bp::arg("fs"), bp::arg("name")=std::string() ) );
        
        }
        FernClassifier_exposer.def("__init__", bp::make_constructor(&FernClassifier_init1, bp::default_call_policies(), ( bp::arg("points"), bp::arg("refimgs"), bp::arg("labels")=cv::Mat(), bp::arg("_nclasses")=0, bp::arg("_patchSize")=int(::cv::FernClassifier::PATCH_SIZE), bp::arg("_signatureSize")=int(::cv::FernClassifier::DEFAULT_SIGNATURE_SIZE), bp::arg("_nstructs")=int(::cv::FernClassifier::DEFAULT_STRUCTS), bp::arg("_structSize")=int(::cv::FernClassifier::DEFAULT_STRUCT_SIZE), bp::arg("_nviews")=int(::cv::FernClassifier::DEFAULT_VIEWS), bp::arg("_compressionMethod")=int(::cv::FernClassifier::COMPRESSION_NONE), bp::arg("patchGenerator")=cv::PatchGenerator() ))  );
        FernClassifier_exposer.def( "train", &train
                , ( bp::arg("inst"), bp::arg("points"), bp::arg("refimgs"), bp::arg("labels")=convert_from_vector_of_T_to_Mat(std::vector<int>()), bp::arg("_nclasses")=(int)(0), bp::arg("_patchSize")=int(::cv::FernClassifier::PATCH_SIZE), bp::arg("_signatureSize")=int(::cv::FernClassifier::DEFAULT_SIGNATURE_SIZE), bp::arg("_nstructs")=int(::cv::FernClassifier::DEFAULT_STRUCTS), bp::arg("_structSize")=int(::cv::FernClassifier::DEFAULT_STRUCT_SIZE), bp::arg("_nviews")=int(::cv::FernClassifier::DEFAULT_VIEWS), bp::arg("_compressionMethod")=int(::cv::FernClassifier::COMPRESSION_NONE), bp::arg("patchGenerator")=cv::PatchGenerator() ) );
    }

}

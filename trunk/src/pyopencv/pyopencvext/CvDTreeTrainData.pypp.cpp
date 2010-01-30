// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "__convenience.pypp.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "boost/python/object.hpp"
#include "CvDTreeTrainData.pypp.hpp"

namespace bp = boost::python;

struct CvDTreeTrainData_wrapper : CvDTreeTrainData, bp::wrapper< CvDTreeTrainData > {

    CvDTreeTrainData_wrapper(CvDTreeTrainData const & arg )
    : CvDTreeTrainData( arg )
      , bp::wrapper< CvDTreeTrainData >(){
        // copy constructor
        
    }

    CvDTreeTrainData_wrapper( )
    : CvDTreeTrainData( )
      , bp::wrapper< CvDTreeTrainData >(){
        // null constructor
    
    }

    virtual void clear(  ) {
        if( bp::override func_clear = this->get_override( "clear" ) )
            func_clear(  );
        else{
            this->CvDTreeTrainData::clear(  );
        }
    }
    
    void default_clear(  ) {
        CvDTreeTrainData::clear( );
    }

    virtual void do_responses_copy(  ) {
        if( bp::override func_do_responses_copy = this->get_override( "do_responses_copy" ) )
            func_do_responses_copy(  );
        else{
            this->CvDTreeTrainData::do_responses_copy(  );
        }
    }
    
    void default_do_responses_copy(  ) {
        CvDTreeTrainData::do_responses_copy( );
    }

    virtual void free_node( ::CvDTreeNode * node ) {
        if( bp::override func_free_node = this->get_override( "free_node" ) )
            func_free_node( boost::python::ptr(node) );
        else{
            this->CvDTreeTrainData::free_node( boost::python::ptr(node) );
        }
    }
    
    void default_free_node( ::CvDTreeNode * node ) {
        CvDTreeTrainData::free_node( boost::python::ptr(node) );
    }

    virtual void free_node_data( ::CvDTreeNode * node ) {
        if( bp::override func_free_node_data = this->get_override( "free_node_data" ) )
            func_free_node_data( boost::python::ptr(node) );
        else{
            this->CvDTreeTrainData::free_node_data( boost::python::ptr(node) );
        }
    }
    
    void default_free_node_data( ::CvDTreeNode * node ) {
        CvDTreeTrainData::free_node_data( boost::python::ptr(node) );
    }

    virtual void free_train_data(  ) {
        if( bp::override func_free_train_data = this->get_override( "free_train_data" ) )
            func_free_train_data(  );
        else{
            this->CvDTreeTrainData::free_train_data(  );
        }
    }
    
    void default_free_train_data(  ) {
        CvDTreeTrainData::free_train_data( );
    }

    virtual int get_cat_var_data( ::CvDTreeNode * n, int vi, int * cat_values_buf, int const * * cat_values ) {
        if( bp::override func_get_cat_var_data = this->get_override( "get_cat_var_data" ) )
            return func_get_cat_var_data( boost::python::ptr(n), vi, cat_values_buf, cat_values );
        else{
            return this->CvDTreeTrainData::get_cat_var_data( boost::python::ptr(n), vi, cat_values_buf, cat_values );
        }
    }
    
    int default_get_cat_var_data( ::CvDTreeNode * n, int vi, int * cat_values_buf, int const * * cat_values ) {
        return CvDTreeTrainData::get_cat_var_data( boost::python::ptr(n), vi, cat_values_buf, cat_values );
    }

    virtual int get_child_buf_idx( ::CvDTreeNode * n ) {
        if( bp::override func_get_child_buf_idx = this->get_override( "get_child_buf_idx" ) )
            return func_get_child_buf_idx( boost::python::ptr(n) );
        else{
            return this->CvDTreeTrainData::get_child_buf_idx( boost::python::ptr(n) );
        }
    }
    
    int default_get_child_buf_idx( ::CvDTreeNode * n ) {
        return CvDTreeTrainData::get_child_buf_idx( boost::python::ptr(n) );
    }

    virtual void get_class_labels( ::CvDTreeNode * n, int * labels_buf, int const * * labels ) {
        if( bp::override func_get_class_labels = this->get_override( "get_class_labels" ) )
            func_get_class_labels( boost::python::ptr(n), labels_buf, labels );
        else{
            this->CvDTreeTrainData::get_class_labels( boost::python::ptr(n), labels_buf, labels );
        }
    }
    
    void default_get_class_labels( ::CvDTreeNode * n, int * labels_buf, int const * * labels ) {
        CvDTreeTrainData::get_class_labels( boost::python::ptr(n), labels_buf, labels );
    }

    virtual void get_cv_labels( ::CvDTreeNode * n, int * labels_buf, int const * * labels ) {
        if( bp::override func_get_cv_labels = this->get_override( "get_cv_labels" ) )
            func_get_cv_labels( boost::python::ptr(n), labels_buf, labels );
        else{
            this->CvDTreeTrainData::get_cv_labels( boost::python::ptr(n), labels_buf, labels );
        }
    }
    
    void default_get_cv_labels( ::CvDTreeNode * n, int * labels_buf, int const * * labels ) {
        CvDTreeTrainData::get_cv_labels( boost::python::ptr(n), labels_buf, labels );
    }

    virtual void get_ord_responses( ::CvDTreeNode * n, float * values_buf, float const * * values ) {
        if( bp::override func_get_ord_responses = this->get_override( "get_ord_responses" ) )
            func_get_ord_responses( boost::python::ptr(n), values_buf, values );
        else{
            this->CvDTreeTrainData::get_ord_responses( boost::python::ptr(n), values_buf, values );
        }
    }
    
    void default_get_ord_responses( ::CvDTreeNode * n, float * values_buf, float const * * values ) {
        CvDTreeTrainData::get_ord_responses( boost::python::ptr(n), values_buf, values );
    }

    virtual int get_ord_var_data( ::CvDTreeNode * n, int vi, float * ord_values_buf, int * indices_buf, float const * * ord_values, int const * * indices ) {
        if( bp::override func_get_ord_var_data = this->get_override( "get_ord_var_data" ) )
            return func_get_ord_var_data( boost::python::ptr(n), vi, ord_values_buf, indices_buf, ord_values, indices );
        else{
            return this->CvDTreeTrainData::get_ord_var_data( boost::python::ptr(n), vi, ord_values_buf, indices_buf, ord_values, indices );
        }
    }
    
    int default_get_ord_var_data( ::CvDTreeNode * n, int vi, float * ord_values_buf, int * indices_buf, float const * * ord_values, int const * * indices ) {
        return CvDTreeTrainData::get_ord_var_data( boost::python::ptr(n), vi, ord_values_buf, indices_buf, ord_values, indices );
    }

    virtual void get_sample_indices( ::CvDTreeNode * n, int * indices_buf, int const * * labels ) {
        if( bp::override func_get_sample_indices = this->get_override( "get_sample_indices" ) )
            func_get_sample_indices( boost::python::ptr(n), indices_buf, labels );
        else{
            this->CvDTreeTrainData::get_sample_indices( boost::python::ptr(n), indices_buf, labels );
        }
    }
    
    void default_get_sample_indices( ::CvDTreeNode * n, int * indices_buf, int const * * labels ) {
        CvDTreeTrainData::get_sample_indices( boost::python::ptr(n), indices_buf, labels );
    }

    virtual ::CvDTreeNode * new_node( ::CvDTreeNode * parent, int count, int storage_idx, int offset ) {
        if( bp::override func_new_node = this->get_override( "new_node" ) )
            return func_new_node( boost::python::ptr(parent), count, storage_idx, offset );
        else{
            return this->CvDTreeTrainData::new_node( boost::python::ptr(parent), count, storage_idx, offset );
        }
    }
    
    ::CvDTreeNode * default_new_node( ::CvDTreeNode * parent, int count, int storage_idx, int offset ) {
        return CvDTreeTrainData::new_node( boost::python::ptr(parent), count, storage_idx, offset );
    }

    virtual ::CvDTreeSplit * new_split_cat( int vi, float quality ) {
        if( bp::override func_new_split_cat = this->get_override( "new_split_cat" ) )
            return func_new_split_cat( vi, quality );
        else{
            return this->CvDTreeTrainData::new_split_cat( vi, quality );
        }
    }
    
    ::CvDTreeSplit * default_new_split_cat( int vi, float quality ) {
        return CvDTreeTrainData::new_split_cat( vi, quality );
    }

    virtual ::CvDTreeSplit * new_split_ord( int vi, float cmp_val, int split_point, int inversed, float quality ) {
        if( bp::override func_new_split_ord = this->get_override( "new_split_ord" ) )
            return func_new_split_ord( vi, cmp_val, split_point, inversed, quality );
        else{
            return this->CvDTreeTrainData::new_split_ord( vi, cmp_val, split_point, inversed, quality );
        }
    }
    
    ::CvDTreeSplit * default_new_split_ord( int vi, float cmp_val, int split_point, int inversed, float quality ) {
        return CvDTreeTrainData::new_split_ord( vi, cmp_val, split_point, inversed, quality );
    }

    virtual void read_params( ::CvFileStorage * fs, ::CvFileNode * node ) {
        namespace bpl = boost::python;
        if( bpl::override func_read_params = this->get_override( "read_params" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_read_params.ptr(), fs, node );
        }
        else{
            CvDTreeTrainData::read_params( boost::python::ptr(fs), boost::python::ptr(node) );
        }
    }
    
    static void default_read_params( ::CvDTreeTrainData & inst, ::cv::FileStorage & fs, ::cv::FileNode & node ){
        if( dynamic_cast< CvDTreeTrainData_wrapper * >( boost::addressof( inst ) ) ){
            inst.::CvDTreeTrainData::read_params(fs.fs, *(node));
        }
        else{
            inst.read_params(fs.fs, *(node));
        }
    }

    virtual bool set_params( ::CvDTreeParams const & params ) {
        if( bp::override func_set_params = this->get_override( "set_params" ) )
            return func_set_params( boost::ref(params) );
        else{
            return this->CvDTreeTrainData::set_params( boost::ref(params) );
        }
    }
    
    bool default_set_params( ::CvDTreeParams const & params ) {
        return CvDTreeTrainData::set_params( boost::ref(params) );
    }

    virtual void write_params( ::CvFileStorage * fs ) const  {
        namespace bpl = boost::python;
        if( bpl::override func_write_params = this->get_override( "write_params" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_write_params.ptr(), fs );
        }
        else{
            CvDTreeTrainData::write_params( boost::python::ptr(fs) );
        }
    }
    
    static void default_write_params( ::CvDTreeTrainData const & inst, ::cv::FileStorage & fs ){
        if( dynamic_cast< CvDTreeTrainData_wrapper const* >( boost::addressof( inst ) ) ){
            inst.::CvDTreeTrainData::write_params(fs.fs);
        }
        else{
            inst.write_params(fs.fs);
        }
    }

    static ::CvMat const * get_responses(CvDTreeTrainData const & inst ){
        return inst.responses;
    }
    
    static void set_responses( CvDTreeTrainData & inst, ::CvMat const * new_value ){ 
        inst.responses = new_value;
    }

    static ::CvMat const * get_train_data(CvDTreeTrainData const & inst ){
        return inst.train_data;
    }
    
    static void set_train_data( CvDTreeTrainData & inst, ::CvMat const * new_value ){ 
        inst.train_data = new_value;
    }

    static bp::object get_responses_copy( ::CvDTreeTrainData const & inst ){        
        return inst.responses_copy? bp::object(inst.responses_copy): bp::object();
    }

    static bp::object get_cat_count( ::CvDTreeTrainData const & inst ){        
        return inst.cat_count? bp::object(inst.cat_count): bp::object();
    }

    static bp::object get_cat_ofs( ::CvDTreeTrainData const & inst ){        
        return inst.cat_ofs? bp::object(inst.cat_ofs): bp::object();
    }

    static bp::object get_cat_map( ::CvDTreeTrainData const & inst ){        
        return inst.cat_map? bp::object(inst.cat_map): bp::object();
    }

    static bp::object get_counts( ::CvDTreeTrainData const & inst ){        
        return inst.counts? bp::object(inst.counts): bp::object();
    }

    static bp::object get_buf( ::CvDTreeTrainData const & inst ){        
        return inst.buf? bp::object(inst.buf): bp::object();
    }

    static bp::object get_direction( ::CvDTreeTrainData const & inst ){        
        return inst.direction? bp::object(inst.direction): bp::object();
    }

    static bp::object get_split_buf( ::CvDTreeTrainData const & inst ){        
        return inst.split_buf? bp::object(inst.split_buf): bp::object();
    }

    static bp::object get_var_idx( ::CvDTreeTrainData const & inst ){        
        return inst.var_idx? bp::object(inst.var_idx): bp::object();
    }

    static bp::object get_var_type( ::CvDTreeTrainData const & inst ){        
        return inst.var_type? bp::object(inst.var_type): bp::object();
    }

    static bp::object get_priors( ::CvDTreeTrainData const & inst ){        
        return inst.priors? bp::object(inst.priors): bp::object();
    }

    static bp::object get_priors_mult( ::CvDTreeTrainData const & inst ){        
        return inst.priors_mult? bp::object(inst.priors_mult): bp::object();
    }

    static bp::object get_tree_storage( ::CvDTreeTrainData const & inst ){        
        return inst.tree_storage? bp::object(inst.tree_storage): bp::object();
    }

    static bp::object get_temp_storage( ::CvDTreeTrainData const & inst ){        
        return inst.temp_storage? bp::object(inst.temp_storage): bp::object();
    }

    static bp::object get_data_root( ::CvDTreeTrainData const & inst ){        
        return inst.data_root? bp::object(inst.data_root): bp::object();
    }

    static bp::object get_node_heap( ::CvDTreeTrainData const & inst ){        
        return inst.node_heap? bp::object(inst.node_heap): bp::object();
    }

    static bp::object get_split_heap( ::CvDTreeTrainData const & inst ){        
        return inst.split_heap? bp::object(inst.split_heap): bp::object();
    }

    static bp::object get_cv_heap( ::CvDTreeTrainData const & inst ){        
        return inst.cv_heap? bp::object(inst.cv_heap): bp::object();
    }

    static bp::object get_nv_heap( ::CvDTreeTrainData const & inst ){        
        return inst.nv_heap? bp::object(inst.nv_heap): bp::object();
    }

    static bp::object get_rng( ::CvDTreeTrainData const & inst ){        
        return inst.rng? bp::object(inst.rng): bp::object();
    }

};

void register_CvDTreeTrainData_class(){

    bp::class_< CvDTreeTrainData_wrapper >( "CvDTreeTrainData", bp::init< >() )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvDTreeTrainData >() )    
        .def( 
            "clear"
            , (void ( ::CvDTreeTrainData::* )(  ) )(&::CvDTreeTrainData::clear)
            , (void ( CvDTreeTrainData_wrapper::* )(  ) )(&CvDTreeTrainData_wrapper::default_clear) )    
        .def( 
            "do_responses_copy"
            , (void ( ::CvDTreeTrainData::* )(  ) )(&::CvDTreeTrainData::do_responses_copy)
            , (void ( CvDTreeTrainData_wrapper::* )(  ) )(&CvDTreeTrainData_wrapper::default_do_responses_copy) )    
        .def( 
            "free_node"
            , (void ( ::CvDTreeTrainData::* )( ::CvDTreeNode * ) )(&::CvDTreeTrainData::free_node)
            , (void ( CvDTreeTrainData_wrapper::* )( ::CvDTreeNode * ) )(&CvDTreeTrainData_wrapper::default_free_node)
            , ( bp::arg("node") ) )    
        .def( 
            "free_node_data"
            , (void ( ::CvDTreeTrainData::* )( ::CvDTreeNode * ) )(&::CvDTreeTrainData::free_node_data)
            , (void ( CvDTreeTrainData_wrapper::* )( ::CvDTreeNode * ) )(&CvDTreeTrainData_wrapper::default_free_node_data)
            , ( bp::arg("node") ) )    
        .def( 
            "free_train_data"
            , (void ( ::CvDTreeTrainData::* )(  ) )(&::CvDTreeTrainData::free_train_data)
            , (void ( CvDTreeTrainData_wrapper::* )(  ) )(&CvDTreeTrainData_wrapper::default_free_train_data) )    
        .def( 
            "get_cat_var_data"
            , (int ( ::CvDTreeTrainData::* )( ::CvDTreeNode *,int,int *,int const * * ) )(&::CvDTreeTrainData::get_cat_var_data)
            , (int ( CvDTreeTrainData_wrapper::* )( ::CvDTreeNode *,int,int *,int const * * ) )(&CvDTreeTrainData_wrapper::default_get_cat_var_data)
            , ( bp::arg("n"), bp::arg("vi"), bp::arg("cat_values_buf"), bp::arg("cat_values") ) )    
        .def( 
            "get_child_buf_idx"
            , (int ( ::CvDTreeTrainData::* )( ::CvDTreeNode * ) )(&::CvDTreeTrainData::get_child_buf_idx)
            , (int ( CvDTreeTrainData_wrapper::* )( ::CvDTreeNode * ) )(&CvDTreeTrainData_wrapper::default_get_child_buf_idx)
            , ( bp::arg("n") ) )    
        .def( 
            "get_class_labels"
            , (void ( ::CvDTreeTrainData::* )( ::CvDTreeNode *,int *,int const * * ) )(&::CvDTreeTrainData::get_class_labels)
            , (void ( CvDTreeTrainData_wrapper::* )( ::CvDTreeNode *,int *,int const * * ) )(&CvDTreeTrainData_wrapper::default_get_class_labels)
            , ( bp::arg("n"), bp::arg("labels_buf"), bp::arg("labels") ) )    
        .def( 
            "get_cv_labels"
            , (void ( ::CvDTreeTrainData::* )( ::CvDTreeNode *,int *,int const * * ) )(&::CvDTreeTrainData::get_cv_labels)
            , (void ( CvDTreeTrainData_wrapper::* )( ::CvDTreeNode *,int *,int const * * ) )(&CvDTreeTrainData_wrapper::default_get_cv_labels)
            , ( bp::arg("n"), bp::arg("labels_buf"), bp::arg("labels") ) )    
        .def( 
            "get_num_classes"
            , (int ( ::CvDTreeTrainData::* )(  ) const)( &::CvDTreeTrainData::get_num_classes ) )    
        .def( 
            "get_ord_responses"
            , (void ( ::CvDTreeTrainData::* )( ::CvDTreeNode *,float *,float const * * ) )(&::CvDTreeTrainData::get_ord_responses)
            , (void ( CvDTreeTrainData_wrapper::* )( ::CvDTreeNode *,float *,float const * * ) )(&CvDTreeTrainData_wrapper::default_get_ord_responses)
            , ( bp::arg("n"), bp::arg("values_buf"), bp::arg("values") ) )    
        .def( 
            "get_ord_var_data"
            , (int ( ::CvDTreeTrainData::* )( ::CvDTreeNode *,int,float *,int *,float const * *,int const * * ) )(&::CvDTreeTrainData::get_ord_var_data)
            , (int ( CvDTreeTrainData_wrapper::* )( ::CvDTreeNode *,int,float *,int *,float const * *,int const * * ) )(&CvDTreeTrainData_wrapper::default_get_ord_var_data)
            , ( bp::arg("n"), bp::arg("vi"), bp::arg("ord_values_buf"), bp::arg("indices_buf"), bp::arg("ord_values"), bp::arg("indices") ) )    
        .def( 
            "get_sample_indices"
            , (void ( ::CvDTreeTrainData::* )( ::CvDTreeNode *,int *,int const * * ) )(&::CvDTreeTrainData::get_sample_indices)
            , (void ( CvDTreeTrainData_wrapper::* )( ::CvDTreeNode *,int *,int const * * ) )(&CvDTreeTrainData_wrapper::default_get_sample_indices)
            , ( bp::arg("n"), bp::arg("indices_buf"), bp::arg("labels") ) )    
        .def( 
            "get_var_type"
            , (int ( ::CvDTreeTrainData::* )( int ) const)( &::CvDTreeTrainData::get_var_type )
            , ( bp::arg("vi") ) )    
        .def( 
            "get_work_var_count"
            , (int ( ::CvDTreeTrainData::* )(  ) const)( &::CvDTreeTrainData::get_work_var_count ) )    
        .def( 
            "new_node"
            , (::CvDTreeNode * ( ::CvDTreeTrainData::* )( ::CvDTreeNode *,int,int,int ) )(&::CvDTreeTrainData::new_node)
            , (::CvDTreeNode * ( CvDTreeTrainData_wrapper::* )( ::CvDTreeNode *,int,int,int ) )(&CvDTreeTrainData_wrapper::default_new_node)
            , ( bp::arg("parent"), bp::arg("count"), bp::arg("storage_idx"), bp::arg("offset") )
            , bp::return_internal_reference< >() )    
        .def( 
            "new_split_cat"
            , (::CvDTreeSplit * ( ::CvDTreeTrainData::* )( int,float ) )(&::CvDTreeTrainData::new_split_cat)
            , (::CvDTreeSplit * ( CvDTreeTrainData_wrapper::* )( int,float ) )(&CvDTreeTrainData_wrapper::default_new_split_cat)
            , ( bp::arg("vi"), bp::arg("quality") )
            , bp::return_internal_reference< >() )    
        .def( 
            "new_split_ord"
            , (::CvDTreeSplit * ( ::CvDTreeTrainData::* )( int,float,int,int,float ) )(&::CvDTreeTrainData::new_split_ord)
            , (::CvDTreeSplit * ( CvDTreeTrainData_wrapper::* )( int,float,int,int,float ) )(&CvDTreeTrainData_wrapper::default_new_split_ord)
            , ( bp::arg("vi"), bp::arg("cmp_val"), bp::arg("split_point"), bp::arg("inversed"), bp::arg("quality") )
            , bp::return_internal_reference< >() )    
        .def( 
            "read_params"
            , (void (*)( ::CvDTreeTrainData &,::cv::FileStorage &,::cv::FileNode & ))( &CvDTreeTrainData_wrapper::default_read_params )
            , ( bp::arg("inst"), bp::arg("fs"), bp::arg("node") ) )    
        .def( 
            "set_params"
            , (bool ( ::CvDTreeTrainData::* )( ::CvDTreeParams const & ) )(&::CvDTreeTrainData::set_params)
            , (bool ( CvDTreeTrainData_wrapper::* )( ::CvDTreeParams const & ) )(&CvDTreeTrainData_wrapper::default_set_params)
            , ( bp::arg("params") ) )    
        .def( 
            "write_params"
            , (void (*)( ::CvDTreeTrainData const &,::cv::FileStorage & ))( &CvDTreeTrainData_wrapper::default_write_params )
            , ( bp::arg("inst"), bp::arg("fs") ) )    
        .def_readwrite( "buf_count", &CvDTreeTrainData::buf_count )    
        .def_readwrite( "buf_size", &CvDTreeTrainData::buf_size )    
        .def_readwrite( "cat_var_count", &CvDTreeTrainData::cat_var_count )    
        .def_readwrite( "cv_lables_buf", &CvDTreeTrainData::cv_lables_buf )    
        .def_readwrite( "have_labels", &CvDTreeTrainData::have_labels )    
        .def_readwrite( "have_priors", &CvDTreeTrainData::have_priors )    
        .def_readwrite( "is_buf_16u", &CvDTreeTrainData::is_buf_16u )    
        .def_readwrite( "is_classifier", &CvDTreeTrainData::is_classifier )    
        .def_readwrite( "max_c_count", &CvDTreeTrainData::max_c_count )    
        .def_readwrite( "ord_var_count", &CvDTreeTrainData::ord_var_count )    
        .def_readwrite( "params", &CvDTreeTrainData::params )    
        .def_readwrite( "pred_float_buf", &CvDTreeTrainData::pred_float_buf )    
        .def_readwrite( "pred_int_buf", &CvDTreeTrainData::pred_int_buf )    
        .def_readwrite( "resp_float_buf", &CvDTreeTrainData::resp_float_buf )    
        .def_readwrite( "resp_int_buf", &CvDTreeTrainData::resp_int_buf )    
        .add_property( "responses"
                    , bp::make_function( (::CvMat const * (*)( ::CvDTreeTrainData const & ))(&CvDTreeTrainData_wrapper::get_responses), bp::return_internal_reference< >() )
                    , bp::make_function( (void (*)( ::CvDTreeTrainData &,::CvMat const * ))(&CvDTreeTrainData_wrapper::set_responses), bp::with_custodian_and_ward_postcall< 1, 2 >() ) )    
        .def_readwrite( "sample_count", &CvDTreeTrainData::sample_count )    
        .def_readwrite( "sample_idx_buf", &CvDTreeTrainData::sample_idx_buf )    
        .def_readwrite( "shared", &CvDTreeTrainData::shared )    
        .def_readwrite( "tflag", &CvDTreeTrainData::tflag )    
        .add_property( "train_data"
                    , bp::make_function( (::CvMat const * (*)( ::CvDTreeTrainData const & ))(&CvDTreeTrainData_wrapper::get_train_data), bp::return_internal_reference< >() )
                    , bp::make_function( (void (*)( ::CvDTreeTrainData &,::CvMat const * ))(&CvDTreeTrainData_wrapper::set_train_data), bp::with_custodian_and_ward_postcall< 1, 2 >() ) )    
        .def_readwrite( "var_all", &CvDTreeTrainData::var_all )    
        .def_readwrite( "var_count", &CvDTreeTrainData::var_count )    
        .def_readwrite( "work_var_count", &CvDTreeTrainData::work_var_count )    
        .add_property( "responses_copy", bp::make_function(&::CvDTreeTrainData_wrapper::get_responses_copy) )    
        .add_property( "cat_count", bp::make_function(&::CvDTreeTrainData_wrapper::get_cat_count) )    
        .add_property( "cat_ofs", bp::make_function(&::CvDTreeTrainData_wrapper::get_cat_ofs) )    
        .add_property( "cat_map", bp::make_function(&::CvDTreeTrainData_wrapper::get_cat_map) )    
        .add_property( "counts", bp::make_function(&::CvDTreeTrainData_wrapper::get_counts) )    
        .add_property( "buf", bp::make_function(&::CvDTreeTrainData_wrapper::get_buf) )    
        .add_property( "direction", bp::make_function(&::CvDTreeTrainData_wrapper::get_direction) )    
        .add_property( "split_buf", bp::make_function(&::CvDTreeTrainData_wrapper::get_split_buf) )    
        .add_property( "var_idx", bp::make_function(&::CvDTreeTrainData_wrapper::get_var_idx) )    
        .add_property( "var_type", bp::make_function(&::CvDTreeTrainData_wrapper::get_var_type) )    
        .add_property( "priors", bp::make_function(&::CvDTreeTrainData_wrapper::get_priors) )    
        .add_property( "priors_mult", bp::make_function(&::CvDTreeTrainData_wrapper::get_priors_mult) )    
        .add_property( "tree_storage", bp::make_function(&::CvDTreeTrainData_wrapper::get_tree_storage) )    
        .add_property( "temp_storage", bp::make_function(&::CvDTreeTrainData_wrapper::get_temp_storage) )    
        .add_property( "data_root", bp::make_function(&::CvDTreeTrainData_wrapper::get_data_root) )    
        .add_property( "node_heap", bp::make_function(&::CvDTreeTrainData_wrapper::get_node_heap) )    
        .add_property( "split_heap", bp::make_function(&::CvDTreeTrainData_wrapper::get_split_heap) )    
        .add_property( "cv_heap", bp::make_function(&::CvDTreeTrainData_wrapper::get_cv_heap) )    
        .add_property( "nv_heap", bp::make_function(&::CvDTreeTrainData_wrapper::get_nv_heap) )    
        .add_property( "rng", bp::make_function(&::CvDTreeTrainData_wrapper::get_rng) );

}

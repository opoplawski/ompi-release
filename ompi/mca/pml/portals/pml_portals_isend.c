/*
 * Copyright (c) 2004-2006 The Trustees of Indiana University and Indiana
 *                         University Research and Technology
 *                         Corporation.  All rights reserved.
 * Copyright (c) 2004-2005 The University of Tennessee and The University
 *                         of Tennessee Research Foundation.  All rights
 *                         reserved.
 * Copyright (c) 2004-2005 High Performance Computing Center Stuttgart,
 *                         University of Stuttgart.  All rights reserved.
 * Copyright (c) 2004-2005 The Regents of the University of California.
 *                         All rights reserved.
 * $COPYRIGHT$
 *
 * Additional copyrights may follow
 *
 * $HEADER$
 */

#include "ompi_config.h"
#include "pml_portals.h"
#include "ompi/datatype/datatype.h"
#include "ompi/communicator/communicator.h"

int mca_pml_portals_isend_init( void* buf,
                            size_t count,
                            ompi_datatype_t* datatype,
                            int dst,
                            int tag,
                            mca_pml_base_send_mode_t sendmode,
                            ompi_communicator_t* comm,
                            ompi_request_t** request )
{
    return OMPI_SUCCESS;
}


int mca_pml_portals_isend( void* buf,
                       size_t count,
                       ompi_datatype_t* datatype,
                       int dst,
                       int tag,
                       mca_pml_base_send_mode_t sendmode,
                       ompi_communicator_t* comm,
                       ompi_request_t** request )
{
    return OMPI_SUCCESS;
}

int mca_pml_portals_send( void *buf,
                      size_t count,
                      ompi_datatype_t* datatype,
                      int dst,
                      int tag,
                      mca_pml_base_send_mode_t sendmode,
                      ompi_communicator_t* comm )
{
    return OMPI_SUCCESS;
}


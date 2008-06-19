/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * Written (W) 1999-2008 Soeren Sonnenburg
 * Copyright (C) 1999-2008 Fraunhofer Institute FIRST and Max-Planck-Society
 */

#ifndef _CNORM_DERIVATIVE_LEM3__H__
#define _CNORM_DERIVATIVE_LEM3__H__

#include "preproc/SimplePreProc.h"
#include "features/Features.h"
#include "lib/common.h"

#include <stdio.h>

/** Preprocessor NormDerivativeLem3, performs the normalization used in Lemma3
 * in Jaakola Hausslers Fischer Kernel paper <b>currently not implemented</b>*/
class CNormDerivativeLem3 : public CSimplePreProc<DREAL>
{
	public:
		/** default constructor */
		CNormDerivativeLem3();
		virtual ~CNormDerivativeLem3();

		/// initialize preprocessor from features
		virtual bool init(CFeatures* f);
		/// cleanup
		virtual void cleanup();
		/// initialize preprocessor from file
		virtual bool load(FILE* f);
		/// save preprocessor init-data to file
		virtual bool save(FILE* f);

		/// apply preproc on feature matrix
		/// result in feature matrix
		/// return pointer to feature_matrix, i.e. f->get_feature_matrix();
		virtual DREAL* apply_to_feature_matrix(CFeatures* f);

		/// apply preproc on single feature vector
		/// result in feature matrix
		virtual DREAL* apply_to_feature_vector(DREAL* f, INT len);
};
#endif

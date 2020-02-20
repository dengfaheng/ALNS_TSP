/* ALNS_Framework - a framework to develop ALNS based solvers
 *
 * Copyright (C) 2012 Renaud Masson
 *
 * This library is free software; you can redistribute it and/or
 * modify it either under the terms of the GNU Lesser General Public
 * License version 3 as published by the Free Software Foundation
 * (the "LGPL"). If you do not alter this notice, a recipient may use
 * your version of this file under the LGPL.
 *
 * You should have received a copy of the LGPL along with this library
 * in the file COPYING-LGPL-3; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Suite 500, Boston, MA 02110-1335, USA
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY
 * OF ANY KIND, either express or implied. See the LGPL for
 * the specific language governing rights and limitations.
 *
 * The Original Code is the ALNS_Framework library.
 *
 *
 * Contributor(s):
 *	Renaud Masson
 */

#ifndef ALNS_INC_H_
#define ALNS_INC_H_
#include "CoolingScheduleFactory.h"
#include "CoolingSchedule_Parameters.h"
#include "CoolingScheduleParametersOptimizable.h"
#include "ExponentialCoolingSchedule.h"
#include "IAcceptanceModule.h"
#include "ICoolingSchedule.h"
#include "LinearCoolingSchedule.h"
#include "MixLinearCoolingSchedule.h"
#include "SimulatedAnnealing.h"
#include "TimeLinearCoolingSchedule.h"
#include "DummyAcceptanceModule.h"
#include "ADestroyOperator.h"
#include "ALNS_Iteration_Status.h"
#include "ALNS_Parameters.h"
#include "ALNSParametersoptimizable.h"
#include "ALNS.h"
#include "AOperator.h"
#include "ARepairOperator.h"
#include "AOperatorManager.h"
#include "IBestSolutionManager.h"
#include "ISolution.h"
#include "IUpdatable.h"
#include "OperatorManager.h"
#include "SimpleBestSolutionManager.h"
#include "ILocalSearch.h"
#include "ILocalSearchManager.h"
#include "SimpleLocalSearchManager.h"
#include "Statistics.h"
#include "ISolverBuilder.h"
#include "ParameterTuning.h"
#endif /* ALNS_INC_H_ */

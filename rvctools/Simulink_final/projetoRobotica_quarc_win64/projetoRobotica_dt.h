/*
 * projetoRobotica_dt.h
 *
 * Code generation for model "projetoRobotica".
 *
 * Model version              : 1.1118
 * Simulink Coder version : 8.8 (R2015a) 09-Feb-2015
 * C source code generated on : Mon Jul 08 13:50:29 2019
 *
 * Target selection: quarc_win64.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ext_types.h"

/* data type size table */
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(pointer_T),
  sizeof(action_T),
  2*sizeof(uint32_T),
  sizeof(t_visualization),
  sizeof(t_denso_properties),
  sizeof(t_pstream),
  sizeof(t_timeout),
  sizeof(uint8_T)
};

/* data type name table */
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T",
  "t_visualization",
  "t_denso_properties",
  "t_pstream",
  "t_timeout",
  "uint8_T"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&projetoRobotica_B.DensoRead_o3[0]), 0, 0, 109 },

  { (char_T *)(&projetoRobotica_B.DensoRead_o1), 15, 0, 1 },

  { (char_T *)(&projetoRobotica_B.todeg[0]), 1, 0, 6 },

  { (char_T *)(&projetoRobotica_B.DataTypeConversion1[0]), 6, 0, 8 },

  { (char_T *)(&projetoRobotica_B.DensoRead_o4[0]), 4, 0, 12 },

  { (char_T *)(&projetoRobotica_B.Compare[0]), 3, 0, 20 },

  { (char_T *)(&projetoRobotica_B.LogicalOperator[0]), 8, 0, 9 },

  { (char_T *)(&projetoRobotica_B.sf_DynamicRouter1.signal), 0, 0, 1 },

  { (char_T *)(&projetoRobotica_B.sf_DynamicRouter.signal), 0, 0, 1 }
  ,

  { (char_T *)(&projetoRobotica_DW.SystemTimebase_PreviousTime), 17, 0, 2 },

  { (char_T *)(&projetoRobotica_DW.VisualizationSetVariables_PrevT), 0, 0, 3 },

  { (char_T *)(&projetoRobotica_DW.VisualizationInitialize_Visuali), 14, 0, 1 },

  { (char_T *)(&projetoRobotica_DW.DensoRead_Denso), 15, 0, 1 },

  { (char_T *)(&projetoRobotica_DW.StreamClient_Stream), 16, 0, 2 },

  { (char_T *)(&projetoRobotica_DW.JointTracking_PWORK.LoggedData), 11, 0, 13 },

  { (char_T *)(&projetoRobotica_DW.MultiportSwitch_DIMS1), 6, 0, 1 },

  { (char_T *)(&projetoRobotica_DW.Integrator1_IWORK.IcNeedsLoading), 10, 0, 1 },

  { (char_T *)(&projetoRobotica_DW.LatchInput_SubsysRanBC), 2, 0, 2 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  18U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&projetoRobotica_P.JointsUpperLimits_const[0]), 0, 0, 49 },

  { (char_T *)(&projetoRobotica_P.VisualizationInitialize_initial[0]), 1, 0, 15
  },

  { (char_T *)(&projetoRobotica_P.VisualizationInitialize_client_), 6, 0, 5 },

  { (char_T *)(&projetoRobotica_P.VisualizationInitialize_variabl[0]), 7, 0, 5 },

  { (char_T *)(&projetoRobotica_P.CompareToConstant2_const), 4, 0, 2 },

  { (char_T *)(&projetoRobotica_P.CompareToConstant_const), 3, 0, 13 },

  { (char_T *)(&projetoRobotica_P.VisualizationInitialize_close_o), 8, 0, 1 },

  { (char_T *)(&projetoRobotica_P.DENSOHOMEPOSITION_Value[0]), 0, 0, 214 },

  { (char_T *)(&projetoRobotica_P.Gain1_Gain_j), 1, 0, 10 },

  { (char_T *)(&projetoRobotica_P.StreamClient_SndPriority), 6, 0, 4 },

  { (char_T *)(&projetoRobotica_P.StreamClient_SndSize), 7, 0, 8 },

  { (char_T *)(&projetoRobotica_P.StreamClient_Optimize), 2, 0, 4 },

  { (char_T *)(&projetoRobotica_P.ManualSwitch_CurrentSetting), 3, 0, 54 },

  { (char_T *)(&projetoRobotica_P.SystemTimebase_StopOnOverrun), 8, 0, 4 },

  { (char_T *)(&projetoRobotica_P.Gain_Gain_dw[0]), 18, 0, 6 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  15U,
  rtPTransitions
};

/* [EOF] projetoRobotica_dt.h */

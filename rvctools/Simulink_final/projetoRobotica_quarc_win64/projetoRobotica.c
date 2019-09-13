/*
 * projetoRobotica.c
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

#include "projetoRobotica.h"
#include "projetoRobotica_private.h"
#include "projetoRobotica_dt.h"

t_denso_properties projetoRobotica_rtZt_denso_properties = NULL;
const real_T projetoRobotica_RGND = 0.0;/* real_T ground */

/* Block signals (auto storage) */
B_projetoRobotica_T projetoRobotica_B;

/* Continuous states */
X_projetoRobotica_T projetoRobotica_X;

/* Block states (auto storage) */
DW_projetoRobotica_T projetoRobotica_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_projetoRobotica_T projetoRobotica_PrevZCX;

/* Real-time model */
RT_MODEL_projetoRobotica_T projetoRobotica_M_;
RT_MODEL_projetoRobotica_T *const projetoRobotica_M = &projetoRobotica_M_;

/*
 * This function updates continuous states using the ODE1 fixed-step
 * solver algorithm
 */
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE1_IntgData *id = (ODE1_IntgData *)rtsiGetSolverData(si);
  real_T *f0 = id->f[0];
  int_T i;
  int_T nXc = 18;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);
  rtsiSetdX(si, f0);
  projetoRobotica_derivatives();
  rtsiSetT(si, tnew);
  for (i = 0; i < nXc; i++) {
    *x += h * f0[i];
    x++;
  }

  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/*
 * Output and update for atomic system:
 *    '<S24>/Dynamic Router'
 *    '<S24>/Dynamic Router1'
 */
void projetoRobotica_DynamicRouter(const real_T rtu_array[6], real_T rtu_index,
  B_DynamicRouter_projetoRoboti_T *localB)
{
  /* MATLAB Function 'Denso Controller/Scope Indexing Subsystem The first two inputs are the vectors to be compared. The third input is an  index to define the elements in each vector to be compared./Dynamic Router': '<S51>:1' */
  /* '<S51>:1:2' */
  localB->signal = rtu_array[(int32_T)rtu_index - 1];
}

/* Model step function */
void projetoRobotica_step(void)
{
  /* local block i/o variables */
  real_T rtb_Switch[6];
  real_T rtb_Clock;
  real_T rtb_DataTypeConversion_a[3];
  real_T rtb_DataTypeConversion2_m[3];
  real_T rtb_DataTypeConversion3_a[3];
  real_T rtb_DataTypeConversion1_h[3];
  real_T rtb_DataTypeConversion4_c[3];
  real_T rtb_Integrator1[6];
  real_T rtb_DataTypeConversion[3];
  real_T rtb_DataTypeConversion2[3];
  real_T rtb_DataTypeConversion3[3];
  real_T rtb_DataTypeConversion1[3];
  real_T rtb_DataTypeConversion4[3];
  real_T rtb_From_densoto_Q_frames[6];
  uint8_T rtb_MultiportSwitch[19];
  static const real_T b[7] = { 0.0, 0.0, -1.5707963267948966, 0.0, 0.0, 0.0, 0.0
  };

  boolean_T exitg1;
  real_T rtb_TmpSignalConversionAttodeg1[7];
  real_T rtb_ManualSwitch[7];
  real_T rtb_SaturationDegsec[6];
  boolean_T rtb_LogicalOperator4;
  int8_T rtb_Compare_l[6];
  real32_T rtb_todeg1[7];
  uint8_T rtb_DataTypeConversion3_h[19];
  int32_T i;
  uint8_T tmp[19];
  real_T u0;
  if (rtmIsMajorTimeStep(projetoRobotica_M)) {
    /* set solver stop time */
    if (!(projetoRobotica_M->Timing.clockTick0+1)) {
      rtsiSetSolverStopTime(&projetoRobotica_M->solverInfo,
                            ((projetoRobotica_M->Timing.clockTickH0 + 1) *
        projetoRobotica_M->Timing.stepSize0 * 4294967296.0));
    } else {
      rtsiSetSolverStopTime(&projetoRobotica_M->solverInfo,
                            ((projetoRobotica_M->Timing.clockTick0 + 1) *
        projetoRobotica_M->Timing.stepSize0 +
        projetoRobotica_M->Timing.clockTickH0 *
        projetoRobotica_M->Timing.stepSize0 * 4294967296.0));
    }
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(projetoRobotica_M)) {
    projetoRobotica_M->Timing.t[0] = rtsiGetT(&projetoRobotica_M->solverInfo);
  }

  /* Reset subsysRan breadcrumbs */
  srClearBC(projetoRobotica_DW.LatchInput_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(projetoRobotica_DW.Subsystem_SubsysRanBC);
  if (rtmIsMajorTimeStep(projetoRobotica_M)) {
    /* S-Function (denso_read_block): '<S15>/Denso Read' */
    /* S-Function Block: projetoRobotica/Denso Controller/Denso I//O/Denso Read (denso_read_block) */
    {
      t_error result;
      projetoRobotica_B.DensoRead_o1 = projetoRobotica_DW.DensoRead_Denso;
      result = denso_read(projetoRobotica_DW.DensoRead_Denso,
                          &rtb_From_densoto_Q_frames[0],
                          &projetoRobotica_B.DensoRead_o4[0],
                          &projetoRobotica_B.DensoRead_o5[0],
                          &projetoRobotica_B.DensoRead_o3[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(projetoRobotica_M, _rt_error_message);
      }
    }

    /* SignalConversion: '<Root>/TmpSignal ConversionAtto deg1Inport1' incorporates:
     *  Constant: '<Root>/gripper'
     *  Constant: '<Root>/theta1'
     *  Constant: '<Root>/theta2'
     *  Constant: '<Root>/theta3'
     *  Constant: '<Root>/theta4'
     *  Constant: '<Root>/theta5'
     *  Constant: '<Root>/theta6'
     */
    rtb_TmpSignalConversionAttodeg1[0] = projetoRobotica_P.theta1_Value;
    rtb_TmpSignalConversionAttodeg1[1] = projetoRobotica_P.theta2_Value;
    rtb_TmpSignalConversionAttodeg1[2] = projetoRobotica_P.theta3_Value;
    rtb_TmpSignalConversionAttodeg1[3] = projetoRobotica_P.theta4_Value;
    rtb_TmpSignalConversionAttodeg1[4] = projetoRobotica_P.theta5_Value;
    rtb_TmpSignalConversionAttodeg1[5] = projetoRobotica_P.theta6_Value;
    rtb_TmpSignalConversionAttodeg1[6] = projetoRobotica_P.gripper_Value;

    /* ManualSwitch: '<Root>/Manual Switch' incorporates:
     *  Constant: '<Root>/DENSO HOME POSITION'
     *  Gain: '<Root>/Gain1'
     */
    for (i = 0; i < 7; i++) {
      if (projetoRobotica_P.ManualSwitch_CurrentSetting == 1) {
        rtb_ManualSwitch[i] = projetoRobotica_P.Gain1_Gain *
          projetoRobotica_P.DENSOHOMEPOSITION_Value[i];
      } else {
        rtb_ManualSwitch[i] = rtb_TmpSignalConversionAttodeg1[i];
      }
    }

    for (i = 0; i < 6; i++) {
      /* Bias: '<S2>/Bias' incorporates:
       *  Gain: '<S2>/Enc_Deg'
       */
      projetoRobotica_B.Bias[i] = projetoRobotica_P.Enc_Deg_Gain[i] *
        rtb_From_densoto_Q_frames[i] + projetoRobotica_P.Bias_Bias[i];

      /* Gain: '<S2>/From_denso to_Q_frames' incorporates:
       *  Gain: '<S14>/Gain1'
       */
      rtb_From_densoto_Q_frames[i] = projetoRobotica_P.Gain1_Gain_e *
        projetoRobotica_B.Bias[i] *
        projetoRobotica_P.From_densoto_Q_frames_Gain[i];
    }

    /* End of ManualSwitch: '<Root>/Manual Switch' */

    /* Gain: '<S23>/Gain' incorporates:
     *  Gain: '<S2>/from Q frames to Denso2'
     *  Saturate: '<Root>/Saturation1'
     */
    for (i = 0; i < 5; i++) {
      /* Gain: '<Root>/Gain' incorporates:
       *  Sum: '<Root>/Sum'
       */
      u0 = (rtb_ManualSwitch[i] - rtb_From_densoto_Q_frames[i]) *
        projetoRobotica_P.Gain_Gain_d;

      /* Saturate: '<Root>/Saturation1' */
      if (u0 > projetoRobotica_P.Saturation1_UpperSat) {
        u0 = projetoRobotica_P.Saturation1_UpperSat;
      } else {
        if (u0 < projetoRobotica_P.Saturation1_LowerSat) {
          u0 = projetoRobotica_P.Saturation1_LowerSat;
        }
      }

      projetoRobotica_B.Gain[i] = projetoRobotica_P.fromQframestoDenso2_Gain[i] *
        u0 * projetoRobotica_P.Gain_Gain_m;
    }

    /* Gain: '<Root>/Gain' incorporates:
     *  Constant: '<Root>/Constant1'
     *  Sum: '<Root>/Sum'
     *  Sum: '<Root>/Sum1'
     */
    u0 = ((rtb_ManualSwitch[5] + projetoRobotica_P.Constant1_Value_k) -
          rtb_From_densoto_Q_frames[5]) * projetoRobotica_P.Gain_Gain_d;

    /* Saturate: '<Root>/Saturation1' */
    if (u0 > projetoRobotica_P.Saturation1_UpperSat) {
      u0 = projetoRobotica_P.Saturation1_UpperSat;
    } else {
      if (u0 < projetoRobotica_P.Saturation1_LowerSat) {
        u0 = projetoRobotica_P.Saturation1_LowerSat;
      }
    }

    /* Gain: '<S23>/Gain' incorporates:
     *  Gain: '<S2>/from Q frames to Denso2'
     *  Saturate: '<Root>/Saturation1'
     */
    projetoRobotica_B.Gain[5] = projetoRobotica_P.fromQframestoDenso2_Gain[5] *
      u0 * projetoRobotica_P.Gain_Gain_m;

    /* Saturate: '<S2>/Saturation Deg//sec' */
    for (i = 0; i < 6; i++) {
      if (projetoRobotica_B.Gain[i] >
          projetoRobotica_P.SaturationDegsec_UpperSat[i]) {
        rtb_SaturationDegsec[i] = projetoRobotica_P.SaturationDegsec_UpperSat[i];
      } else if (projetoRobotica_B.Gain[i] <
                 projetoRobotica_P.SaturationDegsec_LowerSat[i]) {
        rtb_SaturationDegsec[i] = projetoRobotica_P.SaturationDegsec_LowerSat[i];
      } else {
        rtb_SaturationDegsec[i] = projetoRobotica_B.Gain[i];
      }
    }

    /* End of Saturate: '<S2>/Saturation Deg//sec' */

    /* Logic: '<S16>/Logical Operator4' incorporates:
     *  Constant: '<S29>/Constant'
     *  Constant: '<S31>/Constant'
     *  RelationalOperator: '<S29>/Compare'
     *  RelationalOperator: '<S31>/Compare'
     */
    rtb_LogicalOperator4 = ((rtb_SaturationDegsec[2] <=
      projetoRobotica_P.JointsLowerLimits1_const) && (projetoRobotica_B.Bias[2] <=
      projetoRobotica_P.Constant_Value_o));

    /* Gain: '<S2>/Deg_Enc' incorporates:
     *  Constant: '<S27>/Constant'
     *  Constant: '<S28>/Constant'
     *  Constant: '<S30>/Constant'
     *  Constant: '<S32>/Constant'
     *  Gain: '<S16>/Gain'
     *  Gain: '<S2>/Deg//sec 2 deltaDeg'
     *  Logic: '<S16>/Logical Operator'
     *  Logic: '<S16>/Logical Operator1'
     *  Logic: '<S16>/Logical Operator2'
     *  Logic: '<S16>/Logical Operator3'
     *  Product: '<S16>/Product'
     *  RelationalOperator: '<S27>/Compare'
     *  RelationalOperator: '<S28>/Compare'
     *  RelationalOperator: '<S30>/Compare'
     *  RelationalOperator: '<S32>/Compare'
     */
    for (i = 0; i < 6; i++) {
      projetoRobotica_B.Deg_Enc[i] = (real_T)!(((rtb_SaturationDegsec[i] >=
        projetoRobotica_P.Constant_Value_m) && (projetoRobotica_B.Bias[i] >=
        projetoRobotica_P.JointsUpperLimits_const[i])) ||
        ((projetoRobotica_B.Bias[i] <=
          projetoRobotica_P.JointsLowerLimits_const[i]) &&
         (rtb_SaturationDegsec[i] <= projetoRobotica_P.Constant_Value_l)) ||
        ((rtb_LogicalOperator4 ? (int32_T)projetoRobotica_P.Gain_Gain_dw[i] : 0)
         != 0)) * rtb_SaturationDegsec[i] *
        projetoRobotica_P.Degsec2deltaDeg_Gain *
        projetoRobotica_P.Deg_Enc_Gain[i];
    }

    /* End of Gain: '<S2>/Deg_Enc' */

    /* Gain: '<S17>/Gain3' incorporates:
     *  Constant: '<S17>/Constant12'
     *  Gain: '<S33>/Slider Gain'
     */
    u0 = projetoRobotica_P.SliderGain_gain * projetoRobotica_P.Constant12_Value *
      projetoRobotica_P.Gain3_Gain[0];

    /* Saturate: '<S2>/J1 Saturation' */
    if (u0 > projetoRobotica_P.J1Saturation_UpperSat) {
      projetoRobotica_B.J1Saturation[0] =
        projetoRobotica_P.J1Saturation_UpperSat;
    } else if (u0 < projetoRobotica_P.J1Saturation_LowerSat) {
      projetoRobotica_B.J1Saturation[0] =
        projetoRobotica_P.J1Saturation_LowerSat;
    } else {
      projetoRobotica_B.J1Saturation[0] = u0;
    }

    /* Gain: '<S17>/Gain3' incorporates:
     *  Constant: '<S17>/Constant12'
     *  Gain: '<S34>/Slider Gain'
     */
    u0 = projetoRobotica_P.SliderGain1_gain * projetoRobotica_P.Constant12_Value
      * projetoRobotica_P.Gain3_Gain[1];

    /* Saturate: '<S2>/J1 Saturation' */
    if (u0 > projetoRobotica_P.J1Saturation_UpperSat) {
      projetoRobotica_B.J1Saturation[1] =
        projetoRobotica_P.J1Saturation_UpperSat;
    } else if (u0 < projetoRobotica_P.J1Saturation_LowerSat) {
      projetoRobotica_B.J1Saturation[1] =
        projetoRobotica_P.J1Saturation_LowerSat;
    } else {
      projetoRobotica_B.J1Saturation[1] = u0;
    }

    /* Gain: '<S17>/Gain3' incorporates:
     *  Constant: '<S17>/Constant12'
     *  Gain: '<S35>/Slider Gain'
     */
    u0 = projetoRobotica_P.SliderGain2_gain * projetoRobotica_P.Constant12_Value
      * projetoRobotica_P.Gain3_Gain[2];

    /* Saturate: '<S2>/J1 Saturation' */
    if (u0 > projetoRobotica_P.J1Saturation_UpperSat) {
      projetoRobotica_B.J1Saturation[2] =
        projetoRobotica_P.J1Saturation_UpperSat;
    } else if (u0 < projetoRobotica_P.J1Saturation_LowerSat) {
      projetoRobotica_B.J1Saturation[2] =
        projetoRobotica_P.J1Saturation_LowerSat;
    } else {
      projetoRobotica_B.J1Saturation[2] = u0;
    }

    /* Gain: '<S17>/Gain3' incorporates:
     *  Constant: '<S2>/Constant3'
     *  Gain: '<S17>/Gain'
     */
    u0 = projetoRobotica_P.Gain_Gain_mf * projetoRobotica_P.Constant3_Value *
      projetoRobotica_P.Gain3_Gain[3];

    /* Saturate: '<S2>/J1 Saturation' */
    if (u0 > projetoRobotica_P.J1Saturation_UpperSat) {
      projetoRobotica_B.J1Saturation[3] =
        projetoRobotica_P.J1Saturation_UpperSat;
    } else if (u0 < projetoRobotica_P.J1Saturation_LowerSat) {
      projetoRobotica_B.J1Saturation[3] =
        projetoRobotica_P.J1Saturation_LowerSat;
    } else {
      projetoRobotica_B.J1Saturation[3] = u0;
    }

    /* Gain: '<S36>/Slider Gain' incorporates:
     *  Constant: '<S18>/Constant12'
     */
    u0 = projetoRobotica_P.SliderGain_gain_n *
      projetoRobotica_P.Constant12_Value_b;

    /* Saturate: '<S2>/Saturation5' */
    if (u0 > projetoRobotica_P.Saturation5_UpperSat) {
      projetoRobotica_B.Saturation5[0] = projetoRobotica_P.Saturation5_UpperSat;
    } else if (u0 < projetoRobotica_P.Saturation5_LowerSat) {
      projetoRobotica_B.Saturation5[0] = projetoRobotica_P.Saturation5_LowerSat;
    } else {
      projetoRobotica_B.Saturation5[0] = u0;
    }

    /* Gain: '<S37>/Slider Gain' incorporates:
     *  Constant: '<S18>/Constant12'
     */
    u0 = projetoRobotica_P.SliderGain1_gain_c *
      projetoRobotica_P.Constant12_Value_b;

    /* Saturate: '<S2>/Saturation5' */
    if (u0 > projetoRobotica_P.Saturation5_UpperSat) {
      projetoRobotica_B.Saturation5[1] = projetoRobotica_P.Saturation5_UpperSat;
    } else if (u0 < projetoRobotica_P.Saturation5_LowerSat) {
      projetoRobotica_B.Saturation5[1] = projetoRobotica_P.Saturation5_LowerSat;
    } else {
      projetoRobotica_B.Saturation5[1] = u0;
    }

    /* Gain: '<S38>/Slider Gain' incorporates:
     *  Constant: '<S18>/Constant12'
     */
    u0 = projetoRobotica_P.SliderGain2_gain_l *
      projetoRobotica_P.Constant12_Value_b;

    /* Saturate: '<S2>/Saturation5' */
    if (u0 > projetoRobotica_P.Saturation5_UpperSat) {
      projetoRobotica_B.Saturation5[2] = projetoRobotica_P.Saturation5_UpperSat;
    } else if (u0 < projetoRobotica_P.Saturation5_LowerSat) {
      projetoRobotica_B.Saturation5[2] = projetoRobotica_P.Saturation5_LowerSat;
    } else {
      projetoRobotica_B.Saturation5[2] = u0;
    }

    /* Gain: '<S18>/Gain' incorporates:
     *  Constant: '<S2>/Constant4'
     */
    u0 = projetoRobotica_P.Gain_Gain_g * projetoRobotica_P.Constant4_Value;

    /* Saturate: '<S2>/Saturation5' */
    if (u0 > projetoRobotica_P.Saturation5_UpperSat) {
      projetoRobotica_B.Saturation5[3] = projetoRobotica_P.Saturation5_UpperSat;
    } else if (u0 < projetoRobotica_P.Saturation5_LowerSat) {
      projetoRobotica_B.Saturation5[3] = projetoRobotica_P.Saturation5_LowerSat;
    } else {
      projetoRobotica_B.Saturation5[3] = u0;
    }

    /* Gain: '<S39>/Slider Gain' incorporates:
     *  Constant: '<S19>/Constant12'
     */
    u0 = projetoRobotica_P.SliderGain_gain_k *
      projetoRobotica_P.Constant12_Value_n;

    /* Saturate: '<S2>/Saturation4' */
    if (u0 > projetoRobotica_P.Saturation4_UpperSat) {
      projetoRobotica_B.Saturation4[0] = projetoRobotica_P.Saturation4_UpperSat;
    } else if (u0 < projetoRobotica_P.Saturation4_LowerSat) {
      projetoRobotica_B.Saturation4[0] = projetoRobotica_P.Saturation4_LowerSat;
    } else {
      projetoRobotica_B.Saturation4[0] = u0;
    }

    /* Gain: '<S40>/Slider Gain' incorporates:
     *  Constant: '<S19>/Constant12'
     */
    u0 = projetoRobotica_P.SliderGain1_gain_co *
      projetoRobotica_P.Constant12_Value_n;

    /* Saturate: '<S2>/Saturation4' */
    if (u0 > projetoRobotica_P.Saturation4_UpperSat) {
      projetoRobotica_B.Saturation4[1] = projetoRobotica_P.Saturation4_UpperSat;
    } else if (u0 < projetoRobotica_P.Saturation4_LowerSat) {
      projetoRobotica_B.Saturation4[1] = projetoRobotica_P.Saturation4_LowerSat;
    } else {
      projetoRobotica_B.Saturation4[1] = u0;
    }

    /* Gain: '<S41>/Slider Gain' incorporates:
     *  Constant: '<S19>/Constant12'
     */
    u0 = projetoRobotica_P.SliderGain2_gain_b *
      projetoRobotica_P.Constant12_Value_n;

    /* Saturate: '<S2>/Saturation4' */
    if (u0 > projetoRobotica_P.Saturation4_UpperSat) {
      projetoRobotica_B.Saturation4[2] = projetoRobotica_P.Saturation4_UpperSat;
    } else if (u0 < projetoRobotica_P.Saturation4_LowerSat) {
      projetoRobotica_B.Saturation4[2] = projetoRobotica_P.Saturation4_LowerSat;
    } else {
      projetoRobotica_B.Saturation4[2] = u0;
    }

    /* Gain: '<S19>/Gain' incorporates:
     *  Constant: '<S2>/Constant5'
     */
    u0 = projetoRobotica_P.Gain_Gain_e * projetoRobotica_P.Constant5_Value;

    /* Saturate: '<S2>/Saturation4' */
    if (u0 > projetoRobotica_P.Saturation4_UpperSat) {
      projetoRobotica_B.Saturation4[3] = projetoRobotica_P.Saturation4_UpperSat;
    } else if (u0 < projetoRobotica_P.Saturation4_LowerSat) {
      projetoRobotica_B.Saturation4[3] = projetoRobotica_P.Saturation4_LowerSat;
    } else {
      projetoRobotica_B.Saturation4[3] = u0;
    }

    /* Gain: '<S42>/Slider Gain' incorporates:
     *  Constant: '<S20>/Constant12'
     */
    u0 = projetoRobotica_P.SliderGain_gain_k4 *
      projetoRobotica_P.Constant12_Value_c;

    /* Saturate: '<S2>/Saturation3' */
    if (u0 > projetoRobotica_P.Saturation3_UpperSat) {
      projetoRobotica_B.Saturation3[0] = projetoRobotica_P.Saturation3_UpperSat;
    } else if (u0 < projetoRobotica_P.Saturation3_LowerSat) {
      projetoRobotica_B.Saturation3[0] = projetoRobotica_P.Saturation3_LowerSat;
    } else {
      projetoRobotica_B.Saturation3[0] = u0;
    }

    /* Gain: '<S43>/Slider Gain' incorporates:
     *  Constant: '<S20>/Constant12'
     */
    u0 = projetoRobotica_P.SliderGain1_gain_d *
      projetoRobotica_P.Constant12_Value_c;

    /* Saturate: '<S2>/Saturation3' */
    if (u0 > projetoRobotica_P.Saturation3_UpperSat) {
      projetoRobotica_B.Saturation3[1] = projetoRobotica_P.Saturation3_UpperSat;
    } else if (u0 < projetoRobotica_P.Saturation3_LowerSat) {
      projetoRobotica_B.Saturation3[1] = projetoRobotica_P.Saturation3_LowerSat;
    } else {
      projetoRobotica_B.Saturation3[1] = u0;
    }

    /* Gain: '<S44>/Slider Gain' incorporates:
     *  Constant: '<S20>/Constant12'
     */
    u0 = projetoRobotica_P.SliderGain2_gain_h *
      projetoRobotica_P.Constant12_Value_c;

    /* Saturate: '<S2>/Saturation3' */
    if (u0 > projetoRobotica_P.Saturation3_UpperSat) {
      projetoRobotica_B.Saturation3[2] = projetoRobotica_P.Saturation3_UpperSat;
    } else if (u0 < projetoRobotica_P.Saturation3_LowerSat) {
      projetoRobotica_B.Saturation3[2] = projetoRobotica_P.Saturation3_LowerSat;
    } else {
      projetoRobotica_B.Saturation3[2] = u0;
    }

    /* Gain: '<S20>/Gain' incorporates:
     *  Constant: '<S2>/Constant6'
     */
    u0 = projetoRobotica_P.Gain_Gain_i * projetoRobotica_P.Constant6_Value;

    /* Saturate: '<S2>/Saturation3' */
    if (u0 > projetoRobotica_P.Saturation3_UpperSat) {
      projetoRobotica_B.Saturation3[3] = projetoRobotica_P.Saturation3_UpperSat;
    } else if (u0 < projetoRobotica_P.Saturation3_LowerSat) {
      projetoRobotica_B.Saturation3[3] = projetoRobotica_P.Saturation3_LowerSat;
    } else {
      projetoRobotica_B.Saturation3[3] = u0;
    }

    /* Gain: '<S45>/Slider Gain' incorporates:
     *  Constant: '<S21>/Constant12'
     */
    u0 = projetoRobotica_P.SliderGain_gain_kc *
      projetoRobotica_P.Constant12_Value_d;

    /* Saturate: '<S2>/Saturation2' */
    if (u0 > projetoRobotica_P.Saturation2_UpperSat) {
      projetoRobotica_B.Saturation2[0] = projetoRobotica_P.Saturation2_UpperSat;
    } else if (u0 < projetoRobotica_P.Saturation2_LowerSat) {
      projetoRobotica_B.Saturation2[0] = projetoRobotica_P.Saturation2_LowerSat;
    } else {
      projetoRobotica_B.Saturation2[0] = u0;
    }

    /* Gain: '<S46>/Slider Gain' incorporates:
     *  Constant: '<S21>/Constant12'
     */
    u0 = projetoRobotica_P.SliderGain1_gain_f *
      projetoRobotica_P.Constant12_Value_d;

    /* Saturate: '<S2>/Saturation2' */
    if (u0 > projetoRobotica_P.Saturation2_UpperSat) {
      projetoRobotica_B.Saturation2[1] = projetoRobotica_P.Saturation2_UpperSat;
    } else if (u0 < projetoRobotica_P.Saturation2_LowerSat) {
      projetoRobotica_B.Saturation2[1] = projetoRobotica_P.Saturation2_LowerSat;
    } else {
      projetoRobotica_B.Saturation2[1] = u0;
    }

    /* Gain: '<S47>/Slider Gain' incorporates:
     *  Constant: '<S21>/Constant12'
     */
    u0 = projetoRobotica_P.SliderGain2_gain_lg *
      projetoRobotica_P.Constant12_Value_d;

    /* Saturate: '<S2>/Saturation2' */
    if (u0 > projetoRobotica_P.Saturation2_UpperSat) {
      projetoRobotica_B.Saturation2[2] = projetoRobotica_P.Saturation2_UpperSat;
    } else if (u0 < projetoRobotica_P.Saturation2_LowerSat) {
      projetoRobotica_B.Saturation2[2] = projetoRobotica_P.Saturation2_LowerSat;
    } else {
      projetoRobotica_B.Saturation2[2] = u0;
    }

    /* Gain: '<S21>/Gain' incorporates:
     *  Constant: '<S2>/Constant7'
     */
    u0 = projetoRobotica_P.Gain_Gain_c * projetoRobotica_P.Constant7_Value;

    /* Saturate: '<S2>/Saturation2' */
    if (u0 > projetoRobotica_P.Saturation2_UpperSat) {
      projetoRobotica_B.Saturation2[3] = projetoRobotica_P.Saturation2_UpperSat;
    } else if (u0 < projetoRobotica_P.Saturation2_LowerSat) {
      projetoRobotica_B.Saturation2[3] = projetoRobotica_P.Saturation2_LowerSat;
    } else {
      projetoRobotica_B.Saturation2[3] = u0;
    }

    /* Gain: '<S48>/Slider Gain' incorporates:
     *  Constant: '<S22>/Constant12'
     */
    u0 = projetoRobotica_P.SliderGain_gain_l *
      projetoRobotica_P.Constant12_Value_c2;

    /* Saturate: '<S2>/Saturation1' */
    if (u0 > projetoRobotica_P.Saturation1_UpperSat_n) {
      projetoRobotica_B.Saturation1[0] =
        projetoRobotica_P.Saturation1_UpperSat_n;
    } else if (u0 < projetoRobotica_P.Saturation1_LowerSat_j) {
      projetoRobotica_B.Saturation1[0] =
        projetoRobotica_P.Saturation1_LowerSat_j;
    } else {
      projetoRobotica_B.Saturation1[0] = u0;
    }

    /* Gain: '<S49>/Slider Gain' incorporates:
     *  Constant: '<S22>/Constant12'
     */
    u0 = projetoRobotica_P.SliderGain1_gain_ci *
      projetoRobotica_P.Constant12_Value_c2;

    /* Saturate: '<S2>/Saturation1' */
    if (u0 > projetoRobotica_P.Saturation1_UpperSat_n) {
      projetoRobotica_B.Saturation1[1] =
        projetoRobotica_P.Saturation1_UpperSat_n;
    } else if (u0 < projetoRobotica_P.Saturation1_LowerSat_j) {
      projetoRobotica_B.Saturation1[1] =
        projetoRobotica_P.Saturation1_LowerSat_j;
    } else {
      projetoRobotica_B.Saturation1[1] = u0;
    }

    /* Gain: '<S50>/Slider Gain' incorporates:
     *  Constant: '<S22>/Constant12'
     */
    u0 = projetoRobotica_P.SliderGain2_gain_j *
      projetoRobotica_P.Constant12_Value_c2;

    /* Saturate: '<S2>/Saturation1' */
    if (u0 > projetoRobotica_P.Saturation1_UpperSat_n) {
      projetoRobotica_B.Saturation1[2] =
        projetoRobotica_P.Saturation1_UpperSat_n;
    } else if (u0 < projetoRobotica_P.Saturation1_LowerSat_j) {
      projetoRobotica_B.Saturation1[2] =
        projetoRobotica_P.Saturation1_LowerSat_j;
    } else {
      projetoRobotica_B.Saturation1[2] = u0;
    }

    /* Gain: '<S22>/Gain' incorporates:
     *  Constant: '<S2>/Constant8'
     */
    u0 = projetoRobotica_P.Gain_Gain_j * projetoRobotica_P.Constant8_Value;

    /* Saturate: '<S2>/Saturation1' */
    if (u0 > projetoRobotica_P.Saturation1_UpperSat_n) {
      projetoRobotica_B.Saturation1[3] =
        projetoRobotica_P.Saturation1_UpperSat_n;
    } else if (u0 < projetoRobotica_P.Saturation1_LowerSat_j) {
      projetoRobotica_B.Saturation1[3] =
        projetoRobotica_P.Saturation1_LowerSat_j;
    } else {
      projetoRobotica_B.Saturation1[3] = u0;
    }

    /* S-Function (denso_write_block): '<S15>/Denso Write' */
    /* S-Function Block: projetoRobotica/Denso Controller/Denso I//O/Denso Write (denso_write_block) */
    {
      t_error result;
      result = denso_write(projetoRobotica_B.DensoRead_o1,
                           &projetoRobotica_B.Deg_Enc[0],
                           &projetoRobotica_B.J1Saturation[0],
                           &projetoRobotica_B.Saturation5[0],
                           &projetoRobotica_B.Saturation4[0],
                           &projetoRobotica_B.Saturation3[0],
                           &projetoRobotica_B.Saturation2[0],
                           &projetoRobotica_B.Saturation1[0], (t_boolean)1);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(projetoRobotica_M, _rt_error_message);
      }
    }

    /* Constant: '<S2>/Constant2' */
    projetoRobotica_B.Constant2 = projetoRobotica_P.Constant2_Value;

    /* RelationalOperator: '<S13>/Compare' incorporates:
     *  Constant: '<S13>/Constant'
     */
    for (i = 0; i < 6; i++) {
      rtb_Compare_l[i] = (int8_T)(projetoRobotica_B.DensoRead_o4[i] >=
        projetoRobotica_P.CompareToConstant2_const);
    }

    /* End of RelationalOperator: '<S13>/Compare' */

    /* Outputs for Triggered SubSystem: '<S26>/Latch Input' incorporates:
     *  TriggerPort: '<S53>/Trigger'
     */
    if (rtmIsMajorTimeStep(projetoRobotica_M)) {
      rtb_LogicalOperator4 = false;
      for (i = 0; i < 6; i++) {
        rtb_LogicalOperator4 = (rtb_LogicalOperator4 || ((rtb_Compare_l[i] > 0) &&
          (projetoRobotica_PrevZCX.LatchInput_Trig_ZCE[i] != POS_ZCSIG)));
      }

      if (rtb_LogicalOperator4) {
        /* Inport: '<S53>/Input' */
        for (i = 0; i < 6; i++) {
          projetoRobotica_B.Input[i] = projetoRobotica_B.Bias[i];
        }

        /* End of Inport: '<S53>/Input' */

        /* Constant: '<S53>/Constant' */
        projetoRobotica_B.Constant = projetoRobotica_P.Constant_Value;
        projetoRobotica_DW.LatchInput_SubsysRanBC = 4;
      }

      for (i = 0; i < 6; i++) {
        projetoRobotica_PrevZCX.LatchInput_Trig_ZCE[i] = (uint8_T)
          (rtb_Compare_l[i] > 0);
      }
    }

    /* End of Outputs for SubSystem: '<S26>/Latch Input' */
    for (i = 0; i < 6; i++) {
      /* Switch: '<S26>/Switch' incorporates:
       *  Constant: '<S2>/Constant1'
       */
      if (projetoRobotica_B.Constant >= projetoRobotica_P.Switch_Threshold) {
        projetoRobotica_B.Switch[i] = projetoRobotica_B.Input[i];
      } else {
        projetoRobotica_B.Switch[i] = projetoRobotica_P.Constant1_Value[i];
      }

      /* End of Switch: '<S26>/Switch' */

      /* DataTypeConversion: '<S2>/Data Type Conversion1' */
      u0 = floor(projetoRobotica_B.Switch[i]);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 4.294967296E+9);
      }

      projetoRobotica_B.DataTypeConversion1[i] = u0 < 0.0 ? -(int32_T)(uint32_T)
        -u0 : (int32_T)(uint32_T)u0;

      /* End of DataTypeConversion: '<S2>/Data Type Conversion1' */

      /* RelationalOperator: '<S12>/Compare' incorporates:
       *  Constant: '<S12>/Constant'
       */
      projetoRobotica_B.Compare[i] = (uint8_T)(projetoRobotica_B.DensoRead_o4[i]
        >= projetoRobotica_P.CompareToConstant1_const_m);

      /* Logic: '<S2>/Logical Operator' */
      projetoRobotica_B.LogicalOperator[i] = !(projetoRobotica_B.Compare[i] != 0);
    }
  }

  /* Integrator: '<S2>/Integrator2' */
  if (rtmIsMajorTimeStep(projetoRobotica_M)) {
    ZCEventType zcEvent;

    {
      int_T i1;
      uint8_T *pzc0= &projetoRobotica_PrevZCX.Integrator2_Reset_ZCE[0];
      real_T *xc = &projetoRobotica_X.Integrator2_CSTATE[0];
      const boolean_T *u1 = &projetoRobotica_B.LogicalOperator[0];
      for (i1=0; i1 < 6; i1++) {
        zcEvent = ((ZCEventType) ((u1[i1] != (pzc0[i1] == POS_ZCSIG)) &&
                    (pzc0[i1] != UNINITIALIZED_ZCSIG)));
        pzc0[i1] = (ZCSigState) u1[i1];
        if (zcEvent || u1[i1]) {
          xc[i1] = projetoRobotica_P.Integrator2_IC;
        }
      }
    }
  }

  {
    int_T i1;
    real_T *y0 = &rtb_Integrator1[0];
    real_T *xc = &projetoRobotica_X.Integrator2_CSTATE[0];
    for (i1=0; i1 < 6; i1++) {
      y0[i1] = xc[i1];
    }
  }

  for (i = 0; i < 6; i++) {
    /* Sum: '<S2>/Sum' */
    rtb_Integrator1[i] += projetoRobotica_B.Switch[i];

    /* Switch: '<S2>/Switch' */
    if (projetoRobotica_B.Compare[i] >= projetoRobotica_P.Switch_Threshold_g) {
      /* Saturate: '<S2>/Saturation' */
      if (rtb_Integrator1[i] > projetoRobotica_P.Saturation_UpperSat[i]) {
        rtb_Switch[i] = projetoRobotica_P.Saturation_UpperSat[i];
      } else if (rtb_Integrator1[i] < projetoRobotica_P.Saturation_LowerSat[i])
      {
        rtb_Switch[i] = projetoRobotica_P.Saturation_LowerSat[i];
      } else {
        rtb_Switch[i] = rtb_Integrator1[i];
      }

      /* End of Saturate: '<S2>/Saturation' */
    } else {
      rtb_Switch[i] = projetoRobotica_B.Switch[i];
    }

    /* End of Switch: '<S2>/Switch' */
  }

  projetoRobotica_DynamicRouter(rtb_Switch, projetoRobotica_B.Constant2,
    &projetoRobotica_B.sf_DynamicRouter);
  if (rtmIsMajorTimeStep(projetoRobotica_M)) {
    /* MATLAB Function: '<S24>/Dynamic Router1' */
    projetoRobotica_DynamicRouter(projetoRobotica_B.Bias,
      projetoRobotica_B.Constant2, &projetoRobotica_B.sf_DynamicRouter1);

    /* Constant: '<S25>/x0' */
    projetoRobotica_B.x0 = projetoRobotica_P.x0_Value;
  }

  /* Integrator: '<S25>/Integrator1' */
  if (projetoRobotica_DW.Integrator1_IWORK.IcNeedsLoading) {
    {
      int_T i1;
      real_T *xc = &projetoRobotica_X.Integrator1_CSTATE[0];
      for (i1=0; i1 < 6; i1++) {
        xc[i1] = projetoRobotica_B.x0;
      }
    }
  }

  {
    int_T i1;
    real_T *y0 = &rtb_Integrator1[0];
    real_T *xc = &projetoRobotica_X.Integrator1_CSTATE[0];
    for (i1=0; i1 < 6; i1++) {
      y0[i1] = xc[i1];
    }
  }

  for (i = 0; i < 6; i++) {
    /* Product: '<S25>/Product' incorporates:
     *  Constant: '<S25>/Constant'
     *  Constant: '<S25>/wn'
     *  Constant: '<S25>/zt'
     *  Integrator: '<S25>/Integrator2'
     *  Product: '<S25>/Product2'
     *  Sum: '<S25>/Sum'
     *  Sum: '<S25>/Sum1'
     */
    projetoRobotica_B.Product[i] = ((projetoRobotica_B.Bias[i] -
      rtb_Integrator1[i]) - projetoRobotica_X.Integrator2_CSTATE_l[i] *
      projetoRobotica_P.Constant_Value_d *
      projetoRobotica_P.SecondOrderLowPassFilter_inpu_a) *
      projetoRobotica_P.SecondOrderLowPassFilter_input_;

    /* Product: '<S25>/Product1' incorporates:
     *  Constant: '<S25>/wn'
     *  Integrator: '<S25>/Integrator2'
     */
    projetoRobotica_B.Product1[i] =
      projetoRobotica_P.SecondOrderLowPassFilter_input_ *
      projetoRobotica_X.Integrator2_CSTATE_l[i];
  }

  if (rtmIsMajorTimeStep(projetoRobotica_M)) {
    /* Gain: '<Root>/to deg1' */
    for (i = 0; i < 7; i++) {
      rtb_todeg1[i] = (real32_T)(projetoRobotica_P.todeg1_Gain *
        rtb_TmpSignalConversionAttodeg1[i]);
    }

    /* End of Gain: '<Root>/to deg1' */

    /* DataTypeConversion: '<S1>/Data Type Conversion' incorporates:
     *  Gain: '<S7>/Gain1'
     */
    rtb_DataTypeConversion[0] = projetoRobotica_P.Gain1_Gain_be * 0.0F;
    rtb_DataTypeConversion[1] = projetoRobotica_P.Gain1_Gain_be * 0.0F;
    rtb_DataTypeConversion[2] = projetoRobotica_P.Gain1_Gain_be * rtb_todeg1[0];

    /* DataTypeConversion: '<S1>/Data Type Conversion2' incorporates:
     *  Gain: '<S8>/Gain1'
     */
    rtb_DataTypeConversion2[0] = projetoRobotica_P.Gain1_Gain_fy * 0.0F;
    rtb_DataTypeConversion2[1] = projetoRobotica_P.Gain1_Gain_fy * rtb_todeg1[1];
    rtb_DataTypeConversion2[2] = projetoRobotica_P.Gain1_Gain_fy * 0.0F;

    /* DataTypeConversion: '<S1>/Data Type Conversion3' incorporates:
     *  Gain: '<S9>/Gain1'
     */
    rtb_DataTypeConversion3[0] = projetoRobotica_P.Gain1_Gain_ld * 0.0F;
    rtb_DataTypeConversion3[1] = projetoRobotica_P.Gain1_Gain_ld * rtb_todeg1[2];
    rtb_DataTypeConversion3[2] = projetoRobotica_P.Gain1_Gain_ld * 0.0F;

    /* DataTypeConversion: '<S1>/Data Type Conversion1' incorporates:
     *  Gain: '<S10>/Gain1'
     */
    rtb_DataTypeConversion1[0] = projetoRobotica_P.Gain1_Gain_g * 0.0F;
    rtb_DataTypeConversion1[1] = projetoRobotica_P.Gain1_Gain_g * 0.0F;
    rtb_DataTypeConversion1[2] = projetoRobotica_P.Gain1_Gain_g * rtb_todeg1[3];

    /* DataTypeConversion: '<S1>/Data Type Conversion4' incorporates:
     *  Gain: '<S11>/Gain1'
     */
    rtb_DataTypeConversion4[0] = projetoRobotica_P.Gain1_Gain_k * 0.0F;
    rtb_DataTypeConversion4[1] = projetoRobotica_P.Gain1_Gain_k * rtb_todeg1[4];
    rtb_DataTypeConversion4[2] = projetoRobotica_P.Gain1_Gain_k * 0.0F;

    /* S-Function (visualization_set_variables_block): '<S1>/Visualization Set Variables' */

    /* S-Function Block: projetoRobotica/Denso Set_JointAngles_In_3D_Visualization1/Visualization Set Variables (visualization_set_variables_block) */
    {
      t_error result;
      t_uint32 memory_size;
      t_single * memory_data;
      t_double current_time;
      current_time = (((projetoRobotica_M->Timing.clockTick1+
                        projetoRobotica_M->Timing.clockTickH1* 4294967296.0)) *
                      0.001);
      result = visualization_get_memory
        (projetoRobotica_DW.VisualizationInitialize_Visuali, &memory_data,
         &memory_size);
      if (result == 0 && memory_data != NULL) {
        t_single * data;
        if (3 > memory_size) {
          rtmSetErrorStatus(projetoRobotica_M,
                            "Variable offset + length exceeds size of visualization memory!");
          return;
        }

        data = &memory_data[0];
        data[0] = (t_single) rtb_DataTypeConversion[0];
        data[1] = (t_single) rtb_DataTypeConversion[1];
        data[2] = (t_single) rtb_DataTypeConversion[2];
        if (6 > memory_size) {
          rtmSetErrorStatus(projetoRobotica_M,
                            "Variable offset + length exceeds size of visualization memory!");
          return;
        }

        data = &memory_data[3];
        data[0] = (t_single) rtb_DataTypeConversion2[0];
        data[1] = (t_single) rtb_DataTypeConversion2[1];
        data[2] = (t_single) rtb_DataTypeConversion2[2];
        if (9 > memory_size) {
          rtmSetErrorStatus(projetoRobotica_M,
                            "Variable offset + length exceeds size of visualization memory!");
          return;
        }

        data = &memory_data[6];
        data[0] = (t_single) rtb_DataTypeConversion3[0];
        data[1] = (t_single) rtb_DataTypeConversion3[1];
        data[2] = (t_single) rtb_DataTypeConversion3[2];
        if (12 > memory_size) {
          rtmSetErrorStatus(projetoRobotica_M,
                            "Variable offset + length exceeds size of visualization memory!");
          return;
        }

        data = &memory_data[9];
        data[0] = (t_single) rtb_DataTypeConversion1[0];
        data[1] = (t_single) rtb_DataTypeConversion1[1];
        data[2] = (t_single) rtb_DataTypeConversion1[2];
        if (15 > memory_size) {
          rtmSetErrorStatus(projetoRobotica_M,
                            "Variable offset + length exceeds size of visualization memory!");
          return;
        }

        data = &memory_data[12];
        data[0] = (t_single) rtb_DataTypeConversion4[0];
        data[1] = (t_single) rtb_DataTypeConversion4[1];
        data[2] = (t_single) rtb_DataTypeConversion4[2];
        result = visualization_release_memory
          (projetoRobotica_DW.VisualizationInitialize_Visuali);
        if (result == 0) {
          if (current_time - projetoRobotica_DW.VisualizationSetVariables_PrevT >=
              0.033) {
            projetoRobotica_DW.VisualizationSetVariables_PrevT = current_time;
            result = visualization_flush
              (projetoRobotica_DW.VisualizationInitialize_Visuali);
          }
        }
      }

      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(projetoRobotica_M, _rt_error_message);
        return;
      }
    }

    /* DataTypeConversion: '<S69>/Data Type Conversion3' incorporates:
     *  Constant: '<S69>/Constant44'
     *  Constant: '<S69>/Constant45'
     *  Constant: '<S69>/Constant46'
     *  Constant: '<S69>/Constant47'
     *  Constant: '<S69>/Constant48'
     *  Constant: '<S69>/Constant49'
     *  Constant: '<S69>/Constant50'
     *  Constant: '<S69>/Constant51'
     *  Constant: '<S69>/Constant52'
     *  Constant: '<S69>/Constant53'
     *  Constant: '<S69>/Constant54'
     *  Constant: '<S69>/Constant55'
     *  Constant: '<S69>/Constant56'
     *  Constant: '<S69>/Constant57'
     *  Constant: '<S69>/Constant58'
     *  Constant: '<S69>/Constant59'
     */
    u0 = floor(projetoRobotica_P.Constant46_Value_e);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    rtb_DataTypeConversion3_h[0] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);
    u0 = floor(projetoRobotica_P.Constant47_Value_h);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    rtb_DataTypeConversion3_h[1] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);
    u0 = floor(projetoRobotica_P.Constant44_Value_k);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    rtb_DataTypeConversion3_h[2] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);
    u0 = floor(projetoRobotica_P.Constant48_Value_p);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    rtb_DataTypeConversion3_h[3] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);
    u0 = floor(projetoRobotica_P.Constant49_Value_b);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    rtb_DataTypeConversion3_h[4] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);
    u0 = floor(projetoRobotica_P.Constant50_Value_b);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    rtb_DataTypeConversion3_h[5] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);
    u0 = floor(projetoRobotica_P.Constant51_Value_f);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    rtb_DataTypeConversion3_h[6] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);
    u0 = floor(projetoRobotica_P.Constant52_Value_c);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    rtb_DataTypeConversion3_h[7] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);
    u0 = floor(projetoRobotica_P.Constant53_Value_p);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    rtb_DataTypeConversion3_h[8] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);
    u0 = floor(projetoRobotica_P.Constant54_Value_e);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    rtb_DataTypeConversion3_h[9] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);
    u0 = floor(projetoRobotica_P.Constant55_Value_h);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    rtb_DataTypeConversion3_h[10] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);
    u0 = floor(projetoRobotica_P.Constant45_Value_j);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    rtb_DataTypeConversion3_h[11] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);
    u0 = floor(projetoRobotica_P.Constant56_Value_f);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    rtb_DataTypeConversion3_h[12] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);
    u0 = floor(projetoRobotica_P.Constant57_Value_h);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    rtb_DataTypeConversion3_h[13] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);
    u0 = floor(projetoRobotica_P.Constant58_Value_i);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    rtb_DataTypeConversion3_h[14] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);
    u0 = floor(projetoRobotica_P.Constant59_Value_i);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    rtb_DataTypeConversion3_h[15] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* ManualSwitch: '<S3>/Manual Switch3' incorporates:
     *  Constant: '<S3>/Constant9'
     *  Gain: '<S55>/Slider Gain'
     */
    if (projetoRobotica_P.ManualSwitch3_CurrentSetting == 1) {
      u0 = rtb_ManualSwitch[6];
    } else {
      u0 = projetoRobotica_P.SliderGain_gain_h *
        projetoRobotica_P.Constant9_Value;
    }

    /* End of ManualSwitch: '<S3>/Manual Switch3' */

    /* DataTypeConversion: '<S69>/Data Type Conversion3' incorporates:
     *  Constant: '<S3>/Constant10'
     *  Constant: '<S54>/Constant1'
     *  Constant: '<S54>/Constant2'
     *  Constant: '<S54>/Constant3'
     *  Gain: '<S56>/Slider Gain'
     *  Gain: '<S64>/Slider Gain'
     *  Product: '<S54>/Product'
     *  Product: '<S54>/Product1'
     */
    u0 = floor(projetoRobotica_P.Constant1_Value_m * u0);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    rtb_DataTypeConversion3_h[16] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);
    u0 = floor(projetoRobotica_P.SliderGain1_gain_g *
               projetoRobotica_P.Constant10_Value *
               projetoRobotica_P.Constant2_Value_f);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    rtb_DataTypeConversion3_h[17] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);
    u0 = floor(projetoRobotica_P.Slider7_gain *
               projetoRobotica_P.Constant3_Value_k);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    rtb_DataTypeConversion3_h[18] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* MultiPortSwitch: '<S57>/Multiport Switch' incorporates:
     *  Constant: '<S3>/Constant82'
     */
    switch ((int32_T)projetoRobotica_P.Constant82_Value) {
     case 1:
      projetoRobotica_DW.MultiportSwitch_DIMS1 = 19;

      /* DataTypeConversion: '<S67>/Data Type Conversion1' incorporates:
       *  Constant: '<S67>/Constant13'
       *  Constant: '<S67>/Constant14'
       *  Constant: '<S67>/Constant15'
       *  Constant: '<S67>/Constant16'
       *  Constant: '<S67>/Constant17'
       *  Constant: '<S67>/Constant18'
       *  Constant: '<S67>/Constant19'
       *  Constant: '<S67>/Constant20'
       *  Constant: '<S67>/Constant21'
       *  Constant: '<S67>/Constant22'
       *  Constant: '<S67>/Constant23'
       *  Constant: '<S67>/Constant24'
       *  Constant: '<S67>/Constant25'
       *  Constant: '<S67>/Constant26'
       *  Constant: '<S67>/Constant27'
       *  Constant: '<S67>/Constant28'
       *  Constant: '<S67>/Constant29'
       *  Constant: '<S67>/Constant30'
       *  Constant: '<S67>/Constant31'
       */
      u0 = floor(projetoRobotica_P.Constant15_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[0] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                         (int32_T)(uint8_T)u0);
      u0 = floor(projetoRobotica_P.Constant16_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[1] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                         (int32_T)(uint8_T)u0);
      u0 = floor(projetoRobotica_P.Constant13_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[2] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                         (int32_T)(uint8_T)u0);
      u0 = floor(projetoRobotica_P.Constant17_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[3] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                         (int32_T)(uint8_T)u0);
      u0 = floor(projetoRobotica_P.Constant18_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[4] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                         (int32_T)(uint8_T)u0);
      u0 = floor(projetoRobotica_P.Constant19_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[5] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                         (int32_T)(uint8_T)u0);
      u0 = floor(projetoRobotica_P.Constant20_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[6] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                         (int32_T)(uint8_T)u0);
      u0 = floor(projetoRobotica_P.Constant21_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[7] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                         (int32_T)(uint8_T)u0);
      u0 = floor(projetoRobotica_P.Constant22_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[8] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                         (int32_T)(uint8_T)u0);
      u0 = floor(projetoRobotica_P.Constant23_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[9] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                         (int32_T)(uint8_T)u0);
      u0 = floor(projetoRobotica_P.Constant24_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[10] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                          (int32_T)(uint8_T)u0);
      u0 = floor(projetoRobotica_P.Constant14_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[11] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                          (int32_T)(uint8_T)u0);
      u0 = floor(projetoRobotica_P.Constant25_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[12] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                          (int32_T)(uint8_T)u0);
      u0 = floor(projetoRobotica_P.Constant26_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[13] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                          (int32_T)(uint8_T)u0);
      u0 = floor(projetoRobotica_P.Constant27_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[14] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                          (int32_T)(uint8_T)u0);
      u0 = floor(projetoRobotica_P.Constant28_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[15] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                          (int32_T)(uint8_T)u0);
      u0 = floor(projetoRobotica_P.Constant29_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[16] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                          (int32_T)(uint8_T)u0);
      u0 = floor(projetoRobotica_P.Constant30_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[17] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                          (int32_T)(uint8_T)u0);
      u0 = floor(projetoRobotica_P.Constant31_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[18] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                          (int32_T)(uint8_T)u0);

      /* End of DataTypeConversion: '<S67>/Data Type Conversion1' */
      for (i = 0; i < 19; i++) {
        rtb_MultiportSwitch[i] = tmp[i];
      }
      break;

     case 2:
      projetoRobotica_DW.MultiportSwitch_DIMS1 = 19;

      /* DataTypeConversion: '<S68>/Data Type Conversion3' incorporates:
       *  Constant: '<S54>/Constant60'
       *  Constant: '<S54>/Constant61'
       *  Constant: '<S54>/Constant62'
       *  Constant: '<S68>/Constant44'
       *  Constant: '<S68>/Constant45'
       *  Constant: '<S68>/Constant46'
       *  Constant: '<S68>/Constant47'
       *  Constant: '<S68>/Constant48'
       *  Constant: '<S68>/Constant49'
       *  Constant: '<S68>/Constant50'
       *  Constant: '<S68>/Constant51'
       *  Constant: '<S68>/Constant52'
       *  Constant: '<S68>/Constant53'
       *  Constant: '<S68>/Constant54'
       *  Constant: '<S68>/Constant55'
       *  Constant: '<S68>/Constant56'
       *  Constant: '<S68>/Constant57'
       *  Constant: '<S68>/Constant58'
       *  Constant: '<S68>/Constant59'
       *  Gain: '<S58>/Slider Gain'
       *  Gain: '<S59>/Slider Gain'
       *  Gain: '<S63>/Slider Gain'
       */
      u0 = floor(projetoRobotica_P.Constant46_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[0] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                         (int32_T)(uint8_T)u0);
      u0 = floor(projetoRobotica_P.Constant47_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[1] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                         (int32_T)(uint8_T)u0);
      u0 = floor(projetoRobotica_P.Constant44_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[2] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                         (int32_T)(uint8_T)u0);
      u0 = floor(projetoRobotica_P.Constant48_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[3] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                         (int32_T)(uint8_T)u0);
      u0 = floor(projetoRobotica_P.Constant49_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[4] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                         (int32_T)(uint8_T)u0);
      u0 = floor(projetoRobotica_P.Constant50_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[5] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                         (int32_T)(uint8_T)u0);
      u0 = floor(projetoRobotica_P.Constant51_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[6] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                         (int32_T)(uint8_T)u0);
      u0 = floor(projetoRobotica_P.Constant52_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[7] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                         (int32_T)(uint8_T)u0);
      u0 = floor(projetoRobotica_P.Constant53_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[8] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                         (int32_T)(uint8_T)u0);
      u0 = floor(projetoRobotica_P.Constant54_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[9] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                         (int32_T)(uint8_T)u0);
      u0 = floor(projetoRobotica_P.Constant55_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[10] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                          (int32_T)(uint8_T)u0);
      u0 = floor(projetoRobotica_P.Constant45_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[11] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                          (int32_T)(uint8_T)u0);
      u0 = floor(projetoRobotica_P.Constant56_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[12] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                          (int32_T)(uint8_T)u0);
      u0 = floor(projetoRobotica_P.Constant57_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[13] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                          (int32_T)(uint8_T)u0);
      u0 = floor(projetoRobotica_P.Constant58_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[14] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                          (int32_T)(uint8_T)u0);
      u0 = floor(projetoRobotica_P.Constant59_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[15] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                          (int32_T)(uint8_T)u0);
      u0 = floor(projetoRobotica_P.Slider6_gain *
                 projetoRobotica_P.Constant60_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[16] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                          (int32_T)(uint8_T)u0);
      u0 = floor(projetoRobotica_P.Slider1_gain *
                 projetoRobotica_P.Constant61_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[17] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                          (int32_T)(uint8_T)u0);
      u0 = floor(projetoRobotica_P.Slider2_gain *
                 projetoRobotica_P.Constant62_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[18] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                          (int32_T)(uint8_T)u0);

      /* End of DataTypeConversion: '<S68>/Data Type Conversion3' */
      for (i = 0; i < 19; i++) {
        rtb_MultiportSwitch[i] = tmp[i];
      }
      break;

     case 3:
      projetoRobotica_DW.MultiportSwitch_DIMS1 = 19;

      /* DataTypeConversion: '<S70>/Data Type Conversion4' incorporates:
       *  Constant: '<S54>/Constant79'
       *  Constant: '<S54>/Constant80'
       *  Constant: '<S54>/Constant81'
       *  Constant: '<S70>/Constant63'
       *  Constant: '<S70>/Constant64'
       *  Constant: '<S70>/Constant65'
       *  Constant: '<S70>/Constant66'
       *  Constant: '<S70>/Constant67'
       *  Constant: '<S70>/Constant68'
       *  Constant: '<S70>/Constant69'
       *  Constant: '<S70>/Constant70'
       *  Constant: '<S70>/Constant71'
       *  Constant: '<S70>/Constant72'
       *  Constant: '<S70>/Constant73'
       *  Constant: '<S70>/Constant74'
       *  Constant: '<S70>/Constant75'
       *  Constant: '<S70>/Constant76'
       *  Constant: '<S70>/Constant77'
       *  Constant: '<S70>/Constant78'
       *  Gain: '<S60>/Slider Gain'
       *  Gain: '<S61>/Slider Gain'
       *  Gain: '<S62>/Slider Gain'
       */
      u0 = floor(projetoRobotica_P.Constant65_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[0] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                         (int32_T)(uint8_T)u0);
      u0 = floor(projetoRobotica_P.Constant66_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[1] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                         (int32_T)(uint8_T)u0);
      u0 = floor(projetoRobotica_P.Constant63_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[2] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                         (int32_T)(uint8_T)u0);
      u0 = floor(projetoRobotica_P.Constant67_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[3] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                         (int32_T)(uint8_T)u0);
      u0 = floor(projetoRobotica_P.Constant68_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[4] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                         (int32_T)(uint8_T)u0);
      u0 = floor(projetoRobotica_P.Constant69_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[5] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                         (int32_T)(uint8_T)u0);
      u0 = floor(projetoRobotica_P.Constant70_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[6] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                         (int32_T)(uint8_T)u0);
      u0 = floor(projetoRobotica_P.Constant71_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[7] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                         (int32_T)(uint8_T)u0);
      u0 = floor(projetoRobotica_P.Constant72_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[8] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                         (int32_T)(uint8_T)u0);
      u0 = floor(projetoRobotica_P.Constant73_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[9] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                         (int32_T)(uint8_T)u0);
      u0 = floor(projetoRobotica_P.Constant74_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[10] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                          (int32_T)(uint8_T)u0);
      u0 = floor(projetoRobotica_P.Constant64_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[11] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                          (int32_T)(uint8_T)u0);
      u0 = floor(projetoRobotica_P.Constant75_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[12] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                          (int32_T)(uint8_T)u0);
      u0 = floor(projetoRobotica_P.Constant76_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[13] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                          (int32_T)(uint8_T)u0);
      u0 = floor(projetoRobotica_P.Constant77_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[14] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                          (int32_T)(uint8_T)u0);
      u0 = floor(projetoRobotica_P.Constant78_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[15] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                          (int32_T)(uint8_T)u0);
      u0 = floor(projetoRobotica_P.Slider5_gain *
                 projetoRobotica_P.Constant79_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[16] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                          (int32_T)(uint8_T)u0);
      u0 = floor(projetoRobotica_P.Slider3_gain *
                 projetoRobotica_P.Constant80_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[17] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                          (int32_T)(uint8_T)u0);
      u0 = floor(projetoRobotica_P.Slider4_gain *
                 projetoRobotica_P.Constant81_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      tmp[18] = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                          (int32_T)(uint8_T)u0);

      /* End of DataTypeConversion: '<S70>/Data Type Conversion4' */
      for (i = 0; i < 19; i++) {
        rtb_MultiportSwitch[i] = tmp[i];
      }
      break;

     case 4:
      projetoRobotica_DW.MultiportSwitch_DIMS1 = 19;
      for (i = 0; i < 19; i++) {
        rtb_MultiportSwitch[i] = rtb_DataTypeConversion3_h[i];
      }
      break;

     default:
      projetoRobotica_DW.MultiportSwitch_DIMS1 = 19;
      for (i = 0; i < 19; i++) {
        rtb_MultiportSwitch[i] = rtb_DataTypeConversion3_h[i];
      }
      break;
    }

    /* End of MultiPortSwitch: '<S57>/Multiport Switch' */

    /* S-Function (stream_client_block): '<S57>/Stream Client' */

    /* S-Function Block: projetoRobotica/GRIPPER CONTROL/RobotiQ Gripper Control/RobotiQ/Stream Client (stream_client_block) */
    {
      t_pstream_state state;
      t_error send_result;
      t_error receive_result;
      if (projetoRobotica_P.Enable_Value) {
        send_result = pstream_send(projetoRobotica_DW.StreamClient_Stream,
          &rtb_MultiportSwitch[0]);
      } else {
        send_result = 0;
      }

      receive_result = pstream_receive(projetoRobotica_DW.StreamClient_Stream,
        &projetoRobotica_B.StreamClient_o4[0]);
      projetoRobotica_B.StreamClient_o2 = 0;
      if (send_result < 0 && send_result != -QERR_WOULD_BLOCK) {
        projetoRobotica_B.StreamClient_o2 = send_result;
      } else if (receive_result < 0 && receive_result != -QERR_WOULD_BLOCK) {
        projetoRobotica_B.StreamClient_o2 = receive_result;
      }

      pstream_get_state(projetoRobotica_DW.StreamClient_Stream, &state);
      projetoRobotica_B.StreamClient_o1 = state;
    }

    /* Logic: '<S57>/Logical Operator' incorporates:
     *  Constant: '<S65>/Constant'
     *  Constant: '<S66>/Constant'
     *  RelationalOperator: '<S65>/Compare'
     *  RelationalOperator: '<S66>/Compare'
     */
    projetoRobotica_B.LogicalOperator_g = ((projetoRobotica_B.StreamClient_o1 ==
      projetoRobotica_P.CompareToConstant_const) &&
      (projetoRobotica_B.StreamClient_o2 ==
       projetoRobotica_P.CompareToConstant1_const));

    /* Gain: '<Root>/to deg' */
    for (i = 0; i < 6; i++) {
      projetoRobotica_B.todeg[i] = (real32_T)(projetoRobotica_P.todeg_Gain_k *
        rtb_From_densoto_Q_frames[i]);
    }

    /* End of Gain: '<Root>/to deg' */

    /* S-Function (stream_server_block): '<Root>/Stream Server' */

    /* S-Function Block: projetoRobotica/Stream Server (stream_server_block) */
    {
      t_pstream_state state;
      t_error send_result;
      t_error receive_result;
      if (projetoRobotica_P.Constant_Value_a) {
        send_result = pstream_send(projetoRobotica_DW.StreamServer_Stream,
          (real_T*)&projetoRobotica_RGND);
      } else {
        send_result = 0;
      }

      projetoRobotica_B.StreamServer_o3 = (send_result > 0);
      receive_result = pstream_receive(projetoRobotica_DW.StreamServer_Stream,
        &projetoRobotica_B.StreamServer_o4[0]);
      projetoRobotica_B.StreamServer_o5 = (receive_result > 0);
      projetoRobotica_B.StreamServer_o2 = 0;
      if (send_result < 0 && send_result != -QERR_WOULD_BLOCK) {
        projetoRobotica_B.StreamServer_o2 = send_result;
      } else if (receive_result < 0 && receive_result != -QERR_WOULD_BLOCK) {
        projetoRobotica_B.StreamServer_o2 = receive_result;
      }

      pstream_get_state(projetoRobotica_DW.StreamServer_Stream, &state);
      projetoRobotica_B.StreamServer_o1 = state;
    }

    /* Outputs for Triggered SubSystem: '<Root>/Subsystem' incorporates:
     *  TriggerPort: '<S6>/Trigger'
     */
    if (rtmIsMajorTimeStep(projetoRobotica_M)) {
      if (projetoRobotica_B.StreamServer_o5 &&
          (projetoRobotica_PrevZCX.Subsystem_Trig_ZCE != POS_ZCSIG)) {
        /* Inport: '<S6>/In1' */
        for (i = 0; i < 7; i++) {
          projetoRobotica_B.In1[i] = projetoRobotica_B.StreamServer_o4[i];
        }

        /* End of Inport: '<S6>/In1' */

        /* Gain: '<S6>/Gain1' */
        projetoRobotica_B.Gain1 = projetoRobotica_P.Gain1_Gain_n *
          projetoRobotica_B.In1[1];

        /* Gain: '<S6>/Gain' */
        projetoRobotica_B.Gain_h = projetoRobotica_P.Gain_Gain *
          projetoRobotica_B.In1[2];

        /* Gain: '<S6>/Gain2' */
        projetoRobotica_B.Gain2 = projetoRobotica_P.Gain2_Gain *
          projetoRobotica_B.In1[4];

        /* SignalConversion: '<S6>/TmpSignal ConversionAtTCP//IP SendInport1' */
        projetoRobotica_B.TmpSignalConversionAtTCPIPSendI[0] =
          projetoRobotica_B.In1[0];
        projetoRobotica_B.TmpSignalConversionAtTCPIPSendI[1] =
          projetoRobotica_B.Gain1;
        projetoRobotica_B.TmpSignalConversionAtTCPIPSendI[2] =
          projetoRobotica_B.Gain_h;
        projetoRobotica_B.TmpSignalConversionAtTCPIPSendI[3] =
          projetoRobotica_B.In1[3];
        projetoRobotica_B.TmpSignalConversionAtTCPIPSendI[4] =
          projetoRobotica_B.Gain2;
        projetoRobotica_B.TmpSignalConversionAtTCPIPSendI[5] =
          projetoRobotica_B.In1[5];
        projetoRobotica_B.TmpSignalConversionAtTCPIPSendI[6] =
          projetoRobotica_B.In1[6];

        /* Gain: '<S6>/to deg' */
        for (i = 0; i < 7; i++) {
          rtb_todeg1[i] = (real32_T)(projetoRobotica_P.todeg_Gain *
            projetoRobotica_B.TmpSignalConversionAtTCPIPSendI[i]);
        }

        /* End of Gain: '<S6>/to deg' */

        /* DataTypeConversion: '<S72>/Data Type Conversion' incorporates:
         *  Gain: '<S73>/Gain1'
         */
        rtb_DataTypeConversion_a[0] = projetoRobotica_P.Gain1_Gain_j * 0.0F;
        rtb_DataTypeConversion_a[1] = projetoRobotica_P.Gain1_Gain_j * 0.0F;
        rtb_DataTypeConversion_a[2] = projetoRobotica_P.Gain1_Gain_j *
          rtb_todeg1[0];

        /* DataTypeConversion: '<S72>/Data Type Conversion2' incorporates:
         *  Gain: '<S74>/Gain1'
         */
        rtb_DataTypeConversion2_m[0] = projetoRobotica_P.Gain1_Gain_b * 0.0F;
        rtb_DataTypeConversion2_m[1] = projetoRobotica_P.Gain1_Gain_b *
          rtb_todeg1[1];
        rtb_DataTypeConversion2_m[2] = projetoRobotica_P.Gain1_Gain_b * 0.0F;

        /* DataTypeConversion: '<S72>/Data Type Conversion3' incorporates:
         *  Gain: '<S75>/Gain1'
         */
        rtb_DataTypeConversion3_a[0] = projetoRobotica_P.Gain1_Gain_f * 0.0F;
        rtb_DataTypeConversion3_a[1] = projetoRobotica_P.Gain1_Gain_f *
          rtb_todeg1[2];
        rtb_DataTypeConversion3_a[2] = projetoRobotica_P.Gain1_Gain_f * 0.0F;

        /* DataTypeConversion: '<S72>/Data Type Conversion1' incorporates:
         *  Gain: '<S76>/Gain1'
         */
        rtb_DataTypeConversion1_h[0] = projetoRobotica_P.Gain1_Gain_a * 0.0F;
        rtb_DataTypeConversion1_h[1] = projetoRobotica_P.Gain1_Gain_a * 0.0F;
        rtb_DataTypeConversion1_h[2] = projetoRobotica_P.Gain1_Gain_a *
          rtb_todeg1[3];

        /* DataTypeConversion: '<S72>/Data Type Conversion4' incorporates:
         *  Gain: '<S77>/Gain1'
         */
        rtb_DataTypeConversion4_c[0] = projetoRobotica_P.Gain1_Gain_l * 0.0F;
        rtb_DataTypeConversion4_c[1] = projetoRobotica_P.Gain1_Gain_l *
          rtb_todeg1[4];
        rtb_DataTypeConversion4_c[2] = projetoRobotica_P.Gain1_Gain_l * 0.0F;

        /* S-Function (visualization_set_variables_block): '<S72>/Visualization Set Variables' */

        /* S-Function Block: projetoRobotica/Subsystem/Denso Set_JointAngles_In_3D_Visualization/Visualization Set Variables (visualization_set_variables_block) */
        {
          t_error result;
          t_uint32 memory_size;
          t_single * memory_data;
          t_double current_time;
          current_time = projetoRobotica_M->Timing.t[0];
          result = visualization_get_memory
            (projetoRobotica_DW.VisualizationInitialize_Visuali, &memory_data,
             &memory_size);
          if (result == 0 && memory_data != NULL) {
            t_single * data;
            if (3 > memory_size) {
              rtmSetErrorStatus(projetoRobotica_M,
                                "Variable offset + length exceeds size of visualization memory!");
              return;
            }

            data = &memory_data[0];
            data[0] = (t_single) rtb_DataTypeConversion_a[0];
            data[1] = (t_single) rtb_DataTypeConversion_a[1];
            data[2] = (t_single) rtb_DataTypeConversion_a[2];
            if (6 > memory_size) {
              rtmSetErrorStatus(projetoRobotica_M,
                                "Variable offset + length exceeds size of visualization memory!");
              return;
            }

            data = &memory_data[3];
            data[0] = (t_single) rtb_DataTypeConversion2_m[0];
            data[1] = (t_single) rtb_DataTypeConversion2_m[1];
            data[2] = (t_single) rtb_DataTypeConversion2_m[2];
            if (9 > memory_size) {
              rtmSetErrorStatus(projetoRobotica_M,
                                "Variable offset + length exceeds size of visualization memory!");
              return;
            }

            data = &memory_data[6];
            data[0] = (t_single) rtb_DataTypeConversion3_a[0];
            data[1] = (t_single) rtb_DataTypeConversion3_a[1];
            data[2] = (t_single) rtb_DataTypeConversion3_a[2];
            if (12 > memory_size) {
              rtmSetErrorStatus(projetoRobotica_M,
                                "Variable offset + length exceeds size of visualization memory!");
              return;
            }

            data = &memory_data[9];
            data[0] = (t_single) rtb_DataTypeConversion1_h[0];
            data[1] = (t_single) rtb_DataTypeConversion1_h[1];
            data[2] = (t_single) rtb_DataTypeConversion1_h[2];
            if (15 > memory_size) {
              rtmSetErrorStatus(projetoRobotica_M,
                                "Variable offset + length exceeds size of visualization memory!");
              return;
            }

            data = &memory_data[12];
            data[0] = (t_single) rtb_DataTypeConversion4_c[0];
            data[1] = (t_single) rtb_DataTypeConversion4_c[1];
            data[2] = (t_single) rtb_DataTypeConversion4_c[2];
            result = visualization_release_memory
              (projetoRobotica_DW.VisualizationInitialize_Visuali);
            if (result == 0) {
              if (current_time -
                  projetoRobotica_DW.VisualizationSetVariables_Pre_o >= 0.033) {
                projetoRobotica_DW.VisualizationSetVariables_Pre_o =
                  current_time;
                result = visualization_flush
                  (projetoRobotica_DW.VisualizationInitialize_Visuali);
              }
            }
          }

          if (result < 0) {
            msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
              (_rt_error_message));
            rtmSetErrorStatus(projetoRobotica_M, _rt_error_message);
            return;
          }
        }

        projetoRobotica_DW.Subsystem_SubsysRanBC = 4;
      }

      projetoRobotica_PrevZCX.Subsystem_Trig_ZCE =
        projetoRobotica_B.StreamServer_o5;
    }

    /* End of Outputs for SubSystem: '<Root>/Subsystem' */

    /* SignalConversion: '<S4>/TmpSignal ConversionAt SFunction Inport1' incorporates:
     *  MATLAB Function: '<Root>/MATLAB Function'
     */
    rtb_TmpSignalConversionAttodeg1[0] = projetoRobotica_B.In1[0];
    rtb_TmpSignalConversionAttodeg1[1] = projetoRobotica_B.Gain1;
    rtb_TmpSignalConversionAttodeg1[2] = projetoRobotica_B.Gain_h;
    rtb_TmpSignalConversionAttodeg1[3] = projetoRobotica_B.In1[3];
    rtb_TmpSignalConversionAttodeg1[4] = projetoRobotica_B.Gain2;
    rtb_TmpSignalConversionAttodeg1[5] = projetoRobotica_B.In1[5];
    rtb_TmpSignalConversionAttodeg1[6] = projetoRobotica_B.In1[6];

    /* MATLAB Function: '<Root>/MATLAB Function' */
    /* MATLAB Function 'MATLAB Function': '<S4>:1' */
    rtb_LogicalOperator4 = true;
    i = 0;
    exitg1 = false;
    while ((!exitg1) && (i < 7)) {
      if (!(rtb_TmpSignalConversionAttodeg1[i] == 0.0)) {
        rtb_LogicalOperator4 = false;
        exitg1 = true;
      } else {
        i++;
      }
    }

    if (rtb_LogicalOperator4) {
      /* '<S4>:1:4' */
      for (i = 0; i < 7; i++) {
        projetoRobotica_B.y[i] = b[i];
      }
    } else {
      /* '<S4>:1:6' */
      for (i = 0; i < 7; i++) {
        projetoRobotica_B.y[i] = rtb_TmpSignalConversionAttodeg1[i];
      }
    }

    /* S-Function (sample_time_block): '<S5>/Sample Time' */

    /* S-Function Block: projetoRobotica/Sample Time Monitoring/Sample Time (sample_time_block) */
    {
      t_error result;
      t_timeout current_time;
      t_timeout time_difference;
      result = timeout_get_high_resolution_time(&current_time);
      if (result == 0) {
        result = timeout_subtract(&time_difference, &current_time,
          &projetoRobotica_DW.SampleTime_PreviousTime);
        projetoRobotica_B.SampleTime = time_difference.seconds +
          time_difference.nanoseconds * 1e-9;
        memcpy(&projetoRobotica_DW.SampleTime_PreviousTime, &current_time,
               sizeof(t_timeout));
      }

      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(projetoRobotica_M, _rt_error_message);
        return;
      }
    }

    /* Sum: '<S5>/Sum1' incorporates:
     *  Memory: '<S5>/Memory'
     */
    projetoRobotica_B.Sum1 = projetoRobotica_B.SampleTime +
      projetoRobotica_DW.Memory_PreviousInput;
  }

  /* Clock: '<S5>/Clock' */
  rtb_Clock = projetoRobotica_M->Timing.t[0];

  /* Sum: '<S5>/Sum2' */
  projetoRobotica_B.Sum2 = projetoRobotica_B.Sum1 - rtb_Clock;
  if (rtmIsMajorTimeStep(projetoRobotica_M)) {
  }

  if (rtmIsMajorTimeStep(projetoRobotica_M)) {
    /* Update for Integrator: '<S25>/Integrator1' */
    projetoRobotica_DW.Integrator1_IWORK.IcNeedsLoading = 0;
    if (rtmIsMajorTimeStep(projetoRobotica_M)) {
      /* Update for Memory: '<S5>/Memory' */
      projetoRobotica_DW.Memory_PreviousInput = projetoRobotica_B.Sum1;
    }

    /* External mode */
    rtExtModeUploadCheckTrigger(2);

    {                                  /* Sample time: [0.0s, 0.0s] */
      rtExtModeUpload(0, projetoRobotica_M->Timing.t[0]);
    }

    if (rtmIsMajorTimeStep(projetoRobotica_M)) {/* Sample time: [0.001s, 0.0s] */
      rtExtModeUpload(1, (((projetoRobotica_M->Timing.clockTick1+
                            projetoRobotica_M->Timing.clockTickH1* 4294967296.0))
                          * 0.001));
    }
  }                                    /* end MajorTimeStep */

  if (rtmIsMajorTimeStep(projetoRobotica_M)) {
    /* signal main to stop simulation */
    {                                  /* Sample time: [0.0s, 0.0s] */
      if ((rtmGetTFinal(projetoRobotica_M)!=-1) &&
          !((rtmGetTFinal(projetoRobotica_M)-
             (((projetoRobotica_M->Timing.clockTick1+
                projetoRobotica_M->Timing.clockTickH1* 4294967296.0)) * 0.001)) >
            (((projetoRobotica_M->Timing.clockTick1+
               projetoRobotica_M->Timing.clockTickH1* 4294967296.0)) * 0.001) *
            (DBL_EPSILON))) {
        rtmSetErrorStatus(projetoRobotica_M, "Simulation finished");
      }

      if (rtmGetStopRequested(projetoRobotica_M)) {
        rtmSetErrorStatus(projetoRobotica_M, "Simulation finished");
      }
    }

    rt_ertODEUpdateContinuousStates(&projetoRobotica_M->solverInfo);

    /* Update absolute time for base rate */
    /* The "clockTick0" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick0"
     * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick0 and the high bits
     * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++projetoRobotica_M->Timing.clockTick0)) {
      ++projetoRobotica_M->Timing.clockTickH0;
    }

    projetoRobotica_M->Timing.t[0] = rtsiGetSolverStopTime
      (&projetoRobotica_M->solverInfo);

    {
      /* Update absolute timer for sample time: [0.001s, 0.0s] */
      /* The "clockTick1" counts the number of times the code of this task has
       * been executed. The resolution of this integer timer is 0.001, which is the step size
       * of the task. Size of "clockTick1" ensures timer will not overflow during the
       * application lifespan selected.
       * Timer of this task consists of two 32 bit unsigned integers.
       * The two integers represent the low bits Timing.clockTick1 and the high bits
       * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
       */
      projetoRobotica_M->Timing.clockTick1++;
      if (!projetoRobotica_M->Timing.clockTick1) {
        projetoRobotica_M->Timing.clockTickH1++;
      }
    }
  }                                    /* end MajorTimeStep */
}

/* Derivatives for root system: '<Root>' */
void projetoRobotica_derivatives(void)
{
  int32_T i;
  XDot_projetoRobotica_T *_rtXdot;
  _rtXdot = ((XDot_projetoRobotica_T *) projetoRobotica_M->ModelData.derivs);

  /* Derivatives for Integrator: '<S2>/Integrator2' */
  {
    {
      int_T i1;
      const real_T *u0 = &projetoRobotica_B.Gain[0];
      const boolean_T *u1 = &projetoRobotica_B.LogicalOperator[0];
      real_T *xdot = &((XDot_projetoRobotica_T *)
                       projetoRobotica_M->ModelData.derivs)->Integrator2_CSTATE
        [0];
      for (i1=0; i1 < 6; i1++) {
        if (!u1[i1]) {
          xdot[i1] = u0[i1];
        } else {
          /* level reset is active*/
          xdot[i1] = 0.0;
        }
      }
    }
  }

  /* Derivatives for Integrator: '<S25>/Integrator1' */
  {
    {
      int_T i1;
      const real_T *u0 = &projetoRobotica_B.Product1[0];
      real_T *xdot = &((XDot_projetoRobotica_T *)
                       projetoRobotica_M->ModelData.derivs)->Integrator1_CSTATE
        [0];
      for (i1=0; i1 < 6; i1++) {
        xdot[i1] = u0[i1];
      }
    }
  }

  /* Derivatives for Integrator: '<S25>/Integrator2' */
  for (i = 0; i < 6; i++) {
    _rtXdot->Integrator2_CSTATE_l[i] = projetoRobotica_B.Product[i];
  }

  /* End of Derivatives for Integrator: '<S25>/Integrator2' */
}

/* Model initialize function */
void projetoRobotica_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)projetoRobotica_M, 0,
                sizeof(RT_MODEL_projetoRobotica_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&projetoRobotica_M->solverInfo,
                          &projetoRobotica_M->Timing.simTimeStep);
    rtsiSetTPtr(&projetoRobotica_M->solverInfo, &rtmGetTPtr(projetoRobotica_M));
    rtsiSetStepSizePtr(&projetoRobotica_M->solverInfo,
                       &projetoRobotica_M->Timing.stepSize0);
    rtsiSetdXPtr(&projetoRobotica_M->solverInfo,
                 &projetoRobotica_M->ModelData.derivs);
    rtsiSetContStatesPtr(&projetoRobotica_M->solverInfo, (real_T **)
                         &projetoRobotica_M->ModelData.contStates);
    rtsiSetNumContStatesPtr(&projetoRobotica_M->solverInfo,
      &projetoRobotica_M->Sizes.numContStates);
    rtsiSetErrorStatusPtr(&projetoRobotica_M->solverInfo, (&rtmGetErrorStatus
      (projetoRobotica_M)));
    rtsiSetRTModelPtr(&projetoRobotica_M->solverInfo, projetoRobotica_M);
  }

  rtsiSetSimTimeStep(&projetoRobotica_M->solverInfo, MAJOR_TIME_STEP);
  projetoRobotica_M->ModelData.intgData.f[0] = projetoRobotica_M->
    ModelData.odeF[0];
  projetoRobotica_M->ModelData.contStates = ((X_projetoRobotica_T *)
    &projetoRobotica_X);
  rtsiSetSolverData(&projetoRobotica_M->solverInfo, (void *)
                    &projetoRobotica_M->ModelData.intgData);
  rtsiSetSolverName(&projetoRobotica_M->solverInfo,"ode1");
  rtmSetTPtr(projetoRobotica_M, &projetoRobotica_M->Timing.tArray[0]);
  rtmSetTFinal(projetoRobotica_M, -1);
  projetoRobotica_M->Timing.stepSize0 = 0.001;
  rtmSetFirstInitCond(projetoRobotica_M, 1);

  /* External mode info */
  projetoRobotica_M->Sizes.checksums[0] = (1735054020U);
  projetoRobotica_M->Sizes.checksums[1] = (3684069023U);
  projetoRobotica_M->Sizes.checksums[2] = (2710751782U);
  projetoRobotica_M->Sizes.checksums[3] = (2681552377U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[11];
    projetoRobotica_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = &rtAlwaysEnabled;
    systemRan[5] = (sysRanDType *)&projetoRobotica_DW.LatchInput_SubsysRanBC;
    systemRan[6] = &rtAlwaysEnabled;
    systemRan[7] = &rtAlwaysEnabled;
    systemRan[8] = &rtAlwaysEnabled;
    systemRan[9] = &rtAlwaysEnabled;
    systemRan[10] = (sysRanDType *)&projetoRobotica_DW.Subsystem_SubsysRanBC;
    rteiSetModelMappingInfoPtr(projetoRobotica_M->extModeInfo,
      &projetoRobotica_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(projetoRobotica_M->extModeInfo,
                        projetoRobotica_M->Sizes.checksums);
    rteiSetTPtr(projetoRobotica_M->extModeInfo, rtmGetTPtr(projetoRobotica_M));
  }

  /* block I/O */
  (void) memset(((void *) &projetoRobotica_B), 0,
                sizeof(B_projetoRobotica_T));

  {
    int32_T i;
    for (i = 0; i < 6; i++) {
      projetoRobotica_B.DensoRead_o3[i] = 0.0;
    }

    for (i = 0; i < 6; i++) {
      projetoRobotica_B.Bias[i] = 0.0;
    }

    for (i = 0; i < 6; i++) {
      projetoRobotica_B.Gain[i] = 0.0;
    }

    for (i = 0; i < 6; i++) {
      projetoRobotica_B.Deg_Enc[i] = 0.0;
    }

    for (i = 0; i < 6; i++) {
      projetoRobotica_B.Switch[i] = 0.0;
    }

    for (i = 0; i < 6; i++) {
      projetoRobotica_B.Product[i] = 0.0;
    }

    for (i = 0; i < 6; i++) {
      projetoRobotica_B.Product1[i] = 0.0;
    }

    for (i = 0; i < 7; i++) {
      projetoRobotica_B.StreamServer_o4[i] = 0.0;
    }

    for (i = 0; i < 7; i++) {
      projetoRobotica_B.In1[i] = 0.0;
    }

    for (i = 0; i < 7; i++) {
      projetoRobotica_B.TmpSignalConversionAtTCPIPSendI[i] = 0.0;
    }

    for (i = 0; i < 7; i++) {
      projetoRobotica_B.y[i] = 0.0;
    }

    for (i = 0; i < 6; i++) {
      projetoRobotica_B.Input[i] = 0.0;
    }

    for (i = 0; i < 6; i++) {
      projetoRobotica_B.todeg[i] = 0.0F;
    }

    projetoRobotica_B.J1Saturation[0] = 0.0;
    projetoRobotica_B.J1Saturation[1] = 0.0;
    projetoRobotica_B.J1Saturation[2] = 0.0;
    projetoRobotica_B.J1Saturation[3] = 0.0;
    projetoRobotica_B.Saturation5[0] = 0.0;
    projetoRobotica_B.Saturation5[1] = 0.0;
    projetoRobotica_B.Saturation5[2] = 0.0;
    projetoRobotica_B.Saturation5[3] = 0.0;
    projetoRobotica_B.Saturation4[0] = 0.0;
    projetoRobotica_B.Saturation4[1] = 0.0;
    projetoRobotica_B.Saturation4[2] = 0.0;
    projetoRobotica_B.Saturation4[3] = 0.0;
    projetoRobotica_B.Saturation3[0] = 0.0;
    projetoRobotica_B.Saturation3[1] = 0.0;
    projetoRobotica_B.Saturation3[2] = 0.0;
    projetoRobotica_B.Saturation3[3] = 0.0;
    projetoRobotica_B.Saturation2[0] = 0.0;
    projetoRobotica_B.Saturation2[1] = 0.0;
    projetoRobotica_B.Saturation2[2] = 0.0;
    projetoRobotica_B.Saturation2[3] = 0.0;
    projetoRobotica_B.Saturation1[0] = 0.0;
    projetoRobotica_B.Saturation1[1] = 0.0;
    projetoRobotica_B.Saturation1[2] = 0.0;
    projetoRobotica_B.Saturation1[3] = 0.0;
    projetoRobotica_B.Constant2 = 0.0;
    projetoRobotica_B.x0 = 0.0;
    projetoRobotica_B.SampleTime = 0.0;
    projetoRobotica_B.Sum1 = 0.0;
    projetoRobotica_B.Sum2 = 0.0;
    projetoRobotica_B.Gain1 = 0.0;
    projetoRobotica_B.Gain_h = 0.0;
    projetoRobotica_B.Gain2 = 0.0;
    projetoRobotica_B.Constant = 0.0;
    projetoRobotica_B.DensoRead_o1 = projetoRobotica_rtZt_denso_properties;
    projetoRobotica_B.sf_DynamicRouter1.signal = 0.0;
    projetoRobotica_B.sf_DynamicRouter.signal = 0.0;
  }

  /* states (continuous) */
  {
    (void) memset((void *)&projetoRobotica_X, 0,
                  sizeof(X_projetoRobotica_T));
  }

  /* states (dwork) */
  (void) memset((void *)&projetoRobotica_DW, 0,
                sizeof(DW_projetoRobotica_T));
  projetoRobotica_DW.VisualizationSetVariables_PrevT = 0.0;
  projetoRobotica_DW.Memory_PreviousInput = 0.0;
  projetoRobotica_DW.VisualizationSetVariables_Pre_o = 0.0;

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    projetoRobotica_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 19;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.B = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.P = &rtPTransTable;
  }

  /* Start for S-Function (denso_read_block): '<S15>/Denso Read' */
  /* S-Function Block: projetoRobotica/Denso Controller/Denso I//O/Denso Read (denso_read_block) */
  {
    t_error result;
    result = denso_open(&projetoRobotica_DW.DensoRead_Denso,
                        "udp://192.168.0.1:1000");
    if (result < 0) {
      denso_close(projetoRobotica_DW.DensoRead_Denso);
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(projetoRobotica_M, _rt_error_message);
    }
  }

  /* Start for Constant: '<S2>/Constant2' */
  projetoRobotica_B.Constant2 = projetoRobotica_P.Constant2_Value;

  /* Start for Constant: '<S25>/x0' */
  projetoRobotica_B.x0 = projetoRobotica_P.x0_Value;

  /* Start for S-Function (visualization_initialize_block): '<Root>/Visualization Initialize' */

  /* S-Function Block: projetoRobotica/Visualization Initialize (visualization_initialize_block) */
  {
    t_error result;
    result = visualization_open("shmem://projetoRobotica:2", "", 0,
      projetoRobotica_P.VisualizationInitialize_variabl, 5,
      projetoRobotica_P.VisualizationInitialize_initial, 15,
      projetoRobotica_P.VisualizationInitialize_serve_h,
      projetoRobotica_P.VisualizationInitialize_server_,
      &projetoRobotica_DW.VisualizationInitialize_Visuali);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(projetoRobotica_M, _rt_error_message);
      return;
    }
  }

  /* Start for S-Function (stream_client_block): '<S57>/Stream Client' */

  /* S-Function Block: projetoRobotica/GRIPPER CONTROL/RobotiQ Gripper Control/RobotiQ/Stream Client (stream_client_block) */
  {
    qthread_attr_t send_thread_attributes;
    qthread_attr_t receive_thread_attributes;
    struct qsched_param scheduling_parameters;
    int min_priority = qsched_get_priority_min(QSCHED_FIFO);
    int max_priority = qsched_get_priority_max(QSCHED_FIFO);
    t_pstream_options options;
    t_error result;
    projetoRobotica_DW.StreamClient_Stream = NULL;

    {
      int_T i1;
      uint8_T *y3 = &projetoRobotica_B.StreamClient_o4[0];
      const uint8_T *p_StreamClient_default_value =
        projetoRobotica_P.StreamClient_default_value;
      for (i1=0; i1 < 12; i1++) {
        y3[i1] = p_StreamClient_default_value[i1];
      }
    }

    result = 0;
    options.size = sizeof(options);
    options.flags = projetoRobotica_P.StreamClient_Endian &
      PSTREAM_FLAG_ENDIAN_MASK;
    if (projetoRobotica_P.StreamClient_Implementation ==
        STREAM_CLIENT_IMPLEMENTATION_THREAD) {
      options.flags |= PSTREAM_FLAG_MULTITHREADED;
    }

    if (projetoRobotica_P.StreamClient_Optimize ==
        STREAM_CLIENT_OPTIMIZE_LATENCY) {
      options.flags |= PSTREAM_FLAG_MINIMIZE_LATENCY;
    }

    options.flags |= PSTREAM_FLAG_SEND_MOST_RECENT;
    options.send_unit_size = 1;
    options.num_send_units = 19;
    options.send_buffer_size = projetoRobotica_P.StreamClient_SndSize;
    options.send_fifo_size = projetoRobotica_P.StreamClient_SndFIFO;
    options.num_send_dimensions = 0;
    options.max_send_dimensions = NULL;
    if (projetoRobotica_P.StreamClient_SndPriority < min_priority) {
      scheduling_parameters.sched_priority = min_priority;
    } else if (projetoRobotica_P.StreamClient_SndPriority > max_priority) {
      scheduling_parameters.sched_priority = max_priority;
    } else {
      scheduling_parameters.sched_priority =
        projetoRobotica_P.StreamClient_SndPriority;
    }

    qthread_attr_init(&send_thread_attributes);
    result = qthread_attr_setschedpolicy(&send_thread_attributes, QSCHED_FIFO);
    if (result == 0) {
      result = qthread_attr_setschedparam(&send_thread_attributes,
        &scheduling_parameters);
      if (result == 0) {
        result = qthread_attr_setinheritsched(&send_thread_attributes,
          QTHREAD_EXPLICIT_SCHED);
        if (result < 0) {
          rtmSetErrorStatus(projetoRobotica_M,
                            "Unable to set scheduling inheritance for Stream Client sending thread");
        }
      } else {
        rtmSetErrorStatus(projetoRobotica_M,
                          "The specified thread priority for the Stream Client sending thread is not valid for this target");
      }
    } else {
      rtmSetErrorStatus(projetoRobotica_M,
                        "Unable to set scheduling policy for Stream Client sending thread");
    }

    options.send_thread_attributes = &send_thread_attributes;
    options.receive_unit_size = 1;
    options.num_receive_units = 12;
    options.receive_buffer_size = projetoRobotica_P.StreamClient_RcvSize;
    options.receive_fifo_size = projetoRobotica_P.StreamClient_RcvFIFO;
    options.num_receive_dimensions = 0;
    options.max_receive_dimensions = NULL;
    if (projetoRobotica_P.StreamClient_RcvPriority < min_priority) {
      scheduling_parameters.sched_priority = min_priority;
    } else if (projetoRobotica_P.StreamClient_RcvPriority > max_priority) {
      scheduling_parameters.sched_priority = max_priority;
    } else {
      scheduling_parameters.sched_priority =
        projetoRobotica_P.StreamClient_RcvPriority;
    }

    qthread_attr_init(&receive_thread_attributes);
    if (result == 0) {
      result = qthread_attr_setschedpolicy(&receive_thread_attributes,
        QSCHED_FIFO);
      if (result == 0) {
        result = qthread_attr_setschedparam(&receive_thread_attributes,
          &scheduling_parameters);
        if (result == 0) {
          result = qthread_attr_setinheritsched(&receive_thread_attributes,
            QTHREAD_EXPLICIT_SCHED);
          if (result < 0) {
            rtmSetErrorStatus(projetoRobotica_M,
                              "Unable to set scheduling inheritance for Stream Client receiving thread");
          }
        } else {
          rtmSetErrorStatus(projetoRobotica_M,
                            "The specified thread priority for the Stream Client receiving thread is not valid for this target");
        }
      } else {
        rtmSetErrorStatus(projetoRobotica_M,
                          "Unable to set scheduling policy for Stream Client receiving thread");
      }
    }

    options.receive_thread_attributes = &receive_thread_attributes;
    if (result == 0) {
      result = pstream_connect((const char *) projetoRobotica_P.StreamClient_URI,
        &options, &projetoRobotica_DW.StreamClient_Stream);
      if (result < 0 && result != -QERR_WOULD_BLOCK) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(projetoRobotica_M, _rt_error_message);
      }
    }

    qthread_attr_destroy(&send_thread_attributes);
    qthread_attr_destroy(&receive_thread_attributes);
  }

  /* Start for S-Function (stream_server_block): '<Root>/Stream Server' */

  /* S-Function Block: projetoRobotica/Stream Server (stream_server_block) */
  {
    qthread_attr_t send_thread_attributes;
    qthread_attr_t receive_thread_attributes;
    struct qsched_param scheduling_parameters;
    int min_priority = qsched_get_priority_min(QSCHED_FIFO);
    int max_priority = qsched_get_priority_max(QSCHED_FIFO);
    t_pstream_options options;
    t_error result;
    projetoRobotica_DW.StreamServer_Stream = NULL;

    {
      int_T i1;
      real_T *y3 = &projetoRobotica_B.StreamServer_o4[0];
      const real_T *p_StreamServer_default_value =
        projetoRobotica_P.StreamServer_default_value;
      for (i1=0; i1 < 7; i1++) {
        y3[i1] = p_StreamServer_default_value[i1];
      }
    }

    result = 0;
    options.size = sizeof(options);
    options.flags = projetoRobotica_P.StreamServer_Endian &
      PSTREAM_FLAG_ENDIAN_MASK;
    if (projetoRobotica_P.StreamServer_Implementation ==
        STREAM_SERVER_IMPLEMENTATION_THREAD) {
      options.flags |= PSTREAM_FLAG_MULTITHREADED;
    }

    if (projetoRobotica_P.StreamServer_Optimize ==
        STREAM_SERVER_OPTIMIZE_LATENCY) {
      options.flags |= PSTREAM_FLAG_MINIMIZE_LATENCY;
    }

    options.flags |= PSTREAM_FLAG_SEND_MOST_RECENT;
    options.flags |= PSTREAM_FLAG_RECEIVE_MOST_RECENT;
    options.send_unit_size = 8;
    options.num_send_units = 1;
    options.send_buffer_size = projetoRobotica_P.StreamServer_SndSize;
    options.send_fifo_size = projetoRobotica_P.StreamServer_SndFIFO;
    options.num_send_dimensions = 0;
    options.max_send_dimensions = NULL;
    if (projetoRobotica_P.StreamServer_SndPriority < min_priority) {
      scheduling_parameters.sched_priority = min_priority;
    } else if (projetoRobotica_P.StreamServer_SndPriority > max_priority) {
      scheduling_parameters.sched_priority = max_priority;
    } else {
      scheduling_parameters.sched_priority =
        projetoRobotica_P.StreamServer_SndPriority;
    }

    qthread_attr_init(&send_thread_attributes);
    result = qthread_attr_setschedpolicy(&send_thread_attributes, QSCHED_FIFO);
    if (result == 0) {
      result = qthread_attr_setschedparam(&send_thread_attributes,
        &scheduling_parameters);
      if (result == 0) {
        result = qthread_attr_setinheritsched(&send_thread_attributes,
          QTHREAD_EXPLICIT_SCHED);
        if (result < 0) {
          rtmSetErrorStatus(projetoRobotica_M,
                            "Unable to set scheduling inheritance for Stream Client sending thread");
        }
      } else {
        rtmSetErrorStatus(projetoRobotica_M,
                          "The specified thread priority for the Stream Client sending thread is not valid for this target");
      }
    } else {
      rtmSetErrorStatus(projetoRobotica_M,
                        "Unable to set scheduling policy for Stream Client sending thread");
    }

    options.send_thread_attributes = &send_thread_attributes;
    options.receive_unit_size = 8;
    options.num_receive_units = 7;
    options.receive_buffer_size = projetoRobotica_P.StreamServer_RcvSize;
    options.receive_fifo_size = projetoRobotica_P.StreamServer_RcvFIFO;
    options.num_receive_dimensions = 0;
    options.max_receive_dimensions = NULL;
    if (projetoRobotica_P.StreamServer_RcvPriority < min_priority) {
      scheduling_parameters.sched_priority = min_priority;
    } else if (projetoRobotica_P.StreamServer_RcvPriority > max_priority) {
      scheduling_parameters.sched_priority = max_priority;
    } else {
      scheduling_parameters.sched_priority =
        projetoRobotica_P.StreamServer_RcvPriority;
    }

    qthread_attr_init(&receive_thread_attributes);
    if (result == 0) {
      result = qthread_attr_setschedpolicy(&receive_thread_attributes,
        QSCHED_FIFO);
      if (result == 0) {
        result = qthread_attr_setschedparam(&receive_thread_attributes,
          &scheduling_parameters);
        if (result == 0) {
          result = qthread_attr_setinheritsched(&receive_thread_attributes,
            QTHREAD_EXPLICIT_SCHED);
          if (result < 0) {
            rtmSetErrorStatus(projetoRobotica_M,
                              "Unable to set scheduling inheritance for Stream Client receiving thread");
          }
        } else {
          rtmSetErrorStatus(projetoRobotica_M,
                            "The specified thread priority for the Stream Client receiving thread is not valid for this target");
        }
      } else {
        rtmSetErrorStatus(projetoRobotica_M,
                          "Unable to set scheduling policy for Stream Client receiving thread");
      }
    }

    options.receive_thread_attributes = &receive_thread_attributes;
    if (result == 0) {
      result = pstream_listen((const char *) projetoRobotica_P.StreamServer_URI,
        &options, &projetoRobotica_DW.StreamServer_Stream);
      if (result < 0 && result != -QERR_WOULD_BLOCK) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(projetoRobotica_M, _rt_error_message);
      }
    }

    qthread_attr_destroy(&send_thread_attributes);
    qthread_attr_destroy(&receive_thread_attributes);
  }

  /* Start for S-Function (sample_time_block): '<S5>/Sample Time' */

  /* S-Function Block: projetoRobotica/Sample Time Monitoring/Sample Time (sample_time_block) */
  {
    t_error result;
    result = timeout_get_high_resolution_time
      (&projetoRobotica_DW.SampleTime_PreviousTime);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(projetoRobotica_M, _rt_error_message);
      return;
    }
  }

  {
    int32_T i;
    for (i = 0; i < 6; i++) {
      projetoRobotica_PrevZCX.Integrator2_Reset_ZCE[i] = UNINITIALIZED_ZCSIG;
      projetoRobotica_PrevZCX.LatchInput_Trig_ZCE[i] = POS_ZCSIG;
    }

    projetoRobotica_PrevZCX.Subsystem_Trig_ZCE = POS_ZCSIG;
  }

  {
    int32_T i;

    /* InitializeConditions for Integrator: '<S2>/Integrator2' */
    {
      int_T i1;
      real_T *xc = &projetoRobotica_X.Integrator2_CSTATE[0];
      for (i1=0; i1 < 6; i1++) {
        xc[i1] = projetoRobotica_P.Integrator2_IC;
      }
    }

    /* InitializeConditions for Integrator: '<S25>/Integrator1' */
    if (rtmIsFirstInitCond(projetoRobotica_M)) {
      projetoRobotica_X.Integrator1_CSTATE[0] = 0.0;
      projetoRobotica_X.Integrator1_CSTATE[1] = 0.0;
      projetoRobotica_X.Integrator1_CSTATE[2] = 0.0;
      projetoRobotica_X.Integrator1_CSTATE[3] = 0.0;
      projetoRobotica_X.Integrator1_CSTATE[4] = 0.0;
      projetoRobotica_X.Integrator1_CSTATE[5] = 0.0;
    }

    projetoRobotica_DW.Integrator1_IWORK.IcNeedsLoading = 1;

    /* InitializeConditions for Integrator: '<S25>/Integrator2' */
    for (i = 0; i < 6; i++) {
      projetoRobotica_X.Integrator2_CSTATE_l[i] =
        projetoRobotica_P.Integrator2_IC_b;
    }

    /* End of InitializeConditions for Integrator: '<S25>/Integrator2' */

    /* InitializeConditions for Memory: '<S5>/Memory' */
    projetoRobotica_DW.Memory_PreviousInput = projetoRobotica_P.Memory_X0;

    /* set "at time zero" to false */
    if (rtmIsFirstInitCond(projetoRobotica_M)) {
      rtmSetFirstInitCond(projetoRobotica_M, 0);
    }
  }
}

/* Model terminate function */
void projetoRobotica_terminate(void)
{
  /* Terminate for S-Function (denso_read_block): '<S15>/Denso Read' */
  /* S-Function Block: projetoRobotica/Denso Controller/Denso I//O/Denso Read (denso_read_block) */
  {
    t_error result;
    if ((result = denso_close(projetoRobotica_DW.DensoRead_Denso)) < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(projetoRobotica_M, _rt_error_message);
    }
  }

  /* Terminate for S-Function (visualization_initialize_block): '<Root>/Visualization Initialize' */

  /* S-Function Block: projetoRobotica/Visualization Initialize (visualization_initialize_block) */
  {
    if (projetoRobotica_DW.VisualizationInitialize_Visuali != NULL) {
      visualization_close(projetoRobotica_DW.VisualizationInitialize_Visuali);
      projetoRobotica_DW.VisualizationInitialize_Visuali = NULL;
    }
  }

  /* Terminate for S-Function (stream_client_block): '<S57>/Stream Client' */

  /* S-Function Block: projetoRobotica/GRIPPER CONTROL/RobotiQ Gripper Control/RobotiQ/Stream Client (stream_client_block) */
  {
    if (projetoRobotica_DW.StreamClient_Stream != NULL) {
      pstream_close(projetoRobotica_DW.StreamClient_Stream);
    }

    projetoRobotica_DW.StreamClient_Stream = NULL;
  }

  /* Terminate for S-Function (stream_server_block): '<Root>/Stream Server' */

  /* S-Function Block: projetoRobotica/Stream Server (stream_server_block) */
  {
    if (projetoRobotica_DW.StreamServer_Stream != NULL) {
      pstream_close(projetoRobotica_DW.StreamServer_Stream);
    }

    projetoRobotica_DW.StreamServer_Stream = NULL;
  }
}

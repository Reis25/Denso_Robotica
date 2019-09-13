/*
 * projetoRobotica.h
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

#ifndef RTW_HEADER_projetoRobotica_h_
#define RTW_HEADER_projetoRobotica_h_
#include <math.h>
#include <float.h>
#include <string.h>
#ifndef projetoRobotica_COMMON_INCLUDES_
# define projetoRobotica_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "dt_info.h"
#include "ext_work.h"
#include "quanser_visualization.h"
#include "quanser_messages.h"
#include "quanser_denso.h"
#include "quanser_timer.h"
#include "quanser_thread.h"
#include "quanser_memory.h"
#include "quanser_string.h"
#include "stream_client_block.h"
#include "stream_server_block.h"
#include "quanser_time.h"
#include "quanser_extern.h"
#endif                                 /* projetoRobotica_COMMON_INCLUDES_ */

#include "projetoRobotica_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlkStateChangeFlag
# define rtmGetBlkStateChangeFlag(rtm) ((rtm)->ModelData.blkStateChange)
#endif

#ifndef rtmSetBlkStateChangeFlag
# define rtmSetBlkStateChangeFlag(rtm, val) ((rtm)->ModelData.blkStateChange = (val))
#endif

#ifndef rtmGetContStateDisabled
# define rtmGetContStateDisabled(rtm)  ((rtm)->ModelData.contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
# define rtmSetContStateDisabled(rtm, val) ((rtm)->ModelData.contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
# define rtmGetContStates(rtm)         ((rtm)->ModelData.contStates)
#endif

#ifndef rtmSetContStates
# define rtmSetContStates(rtm, val)    ((rtm)->ModelData.contStates = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->ModelData.derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->ModelData.derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ((rtm)->ModelData.intgData)
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ((rtm)->ModelData.intgData = (val))
#endif

#ifndef rtmGetOdeF
# define rtmGetOdeF(rtm)               ((rtm)->ModelData.odeF)
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ((rtm)->ModelData.odeF = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
# define rtmGetPeriodicContStateIndices(rtm) ((rtm)->ModelData.periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
# define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->ModelData.periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
# define rtmGetPeriodicContStateRanges(rtm) ((rtm)->ModelData.periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
# define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->ModelData.periodicContStateRanges = (val))
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->ModelData.zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->ModelData.zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetdX
# define rtmGetdX(rtm)                 ((rtm)->ModelData.derivs)
#endif

#ifndef rtmSetdX
# define rtmSetdX(rtm, val)            ((rtm)->ModelData.derivs = (val))
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

/* Block signals for system '<S24>/Dynamic Router' */
typedef struct {
  real_T signal;                       /* '<S24>/Dynamic Router' */
} B_DynamicRouter_projetoRoboti_T;

/* Block signals (auto storage) */
typedef struct {
  real_T DensoRead_o3[6];              /* '<S15>/Denso Read' */
  real_T Bias[6];                      /* '<S2>/Bias' */
  real_T Gain[6];                      /* '<S23>/Gain' */
  real_T Deg_Enc[6];                   /* '<S2>/Deg_Enc' */
  real_T J1Saturation[4];              /* '<S2>/J1 Saturation' */
  real_T Saturation5[4];               /* '<S2>/Saturation5' */
  real_T Saturation4[4];               /* '<S2>/Saturation4' */
  real_T Saturation3[4];               /* '<S2>/Saturation3' */
  real_T Saturation2[4];               /* '<S2>/Saturation2' */
  real_T Saturation1[4];               /* '<S2>/Saturation1' */
  real_T Constant2;                    /* '<S2>/Constant2' */
  real_T Switch[6];                    /* '<S26>/Switch' */
  real_T x0;                           /* '<S25>/x0' */
  real_T Product[6];                   /* '<S25>/Product' */
  real_T Product1[6];                  /* '<S25>/Product1' */
  real_T StreamServer_o4[7];           /* '<Root>/Stream Server' */
  real_T SampleTime;                   /* '<S5>/Sample Time' */
  real_T Sum1;                         /* '<S5>/Sum1' */
  real_T Sum2;                         /* '<S5>/Sum2' */
  real_T In1[7];                       /* '<S6>/In1' */
  real_T Gain1;                        /* '<S6>/Gain1' */
  real_T Gain_h;                       /* '<S6>/Gain' */
  real_T Gain2;                        /* '<S6>/Gain2' */
  real_T TmpSignalConversionAtTCPIPSendI[7];
  real_T y[7];                         /* '<Root>/MATLAB Function' */
  real_T Input[6];                     /* '<S53>/Input' */
  real_T Constant;                     /* '<S53>/Constant' */
  t_denso_properties DensoRead_o1;     /* '<S15>/Denso Read' */
  real32_T todeg[6];                   /* '<Root>/to deg' */
  int32_T DataTypeConversion1[6];      /* '<S2>/Data Type Conversion1' */
  int32_T StreamClient_o2;             /* '<S57>/Stream Client' */
  int32_T StreamServer_o2;             /* '<Root>/Stream Server' */
  int16_T DensoRead_o4[6];             /* '<S15>/Denso Read' */
  int16_T DensoRead_o5[6];             /* '<S15>/Denso Read' */
  uint8_T Compare[6];                  /* '<S12>/Compare' */
  uint8_T StreamClient_o1;             /* '<S57>/Stream Client' */
  uint8_T StreamClient_o4[12];         /* '<S57>/Stream Client' */
  uint8_T StreamServer_o1;             /* '<Root>/Stream Server' */
  boolean_T LogicalOperator[6];        /* '<S2>/Logical Operator' */
  boolean_T LogicalOperator_g;         /* '<S57>/Logical Operator' */
  boolean_T StreamServer_o3;           /* '<Root>/Stream Server' */
  boolean_T StreamServer_o5;           /* '<Root>/Stream Server' */
  B_DynamicRouter_projetoRoboti_T sf_DynamicRouter1;/* '<S24>/Dynamic Router1' */
  B_DynamicRouter_projetoRoboti_T sf_DynamicRouter;/* '<S24>/Dynamic Router' */
} B_projetoRobotica_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  t_timeout SystemTimebase_PreviousTime;/* '<Root>/System Timebase' */
  t_timeout SampleTime_PreviousTime;   /* '<S5>/Sample Time' */
  real_T VisualizationSetVariables_PrevT;/* '<S1>/Visualization Set Variables' */
  real_T Memory_PreviousInput;         /* '<S5>/Memory' */
  real_T VisualizationSetVariables_Pre_o;/* '<S72>/Visualization Set Variables' */
  t_visualization VisualizationInitialize_Visuali;/* '<Root>/Visualization Initialize' */
  t_denso_properties DensoRead_Denso;  /* '<S15>/Denso Read' */
  t_pstream StreamClient_Stream;       /* '<S57>/Stream Client' */
  t_pstream StreamServer_Stream;       /* '<Root>/Stream Server' */
  struct {
    void *LoggedData;
  } JointTracking_PWORK;               /* '<S2>/Joint Tracking' */

  struct {
    void *LoggedData;
  } efforts_PWORK;                     /* '<S2>/efforts' */

  void *VisualizationInitialize_PWORK[2];/* '<Root>/Visualization Initialize' */
  void *VisualizationSetVariables_PWORK;/* '<S1>/Visualization Set Variables' */
  struct {
    void *LoggedData;
  } Error_PWORK;                       /* '<Root>/Error' */

  struct {
    void *LoggedData;
  } NewDataFlag_PWORK;                 /* '<Root>/New Data Flag' */

  struct {
    void *LoggedData;
  } ReceivedDataServer_PWORK;          /* '<Root>/Received Data - Server' */

  struct {
    void *LoggedData;
  } SentFlag_PWORK;                    /* '<Root>/Sent Flag' */

  struct {
    void *LoggedData;
  } State_PWORK;                       /* '<Root>/State' */

  struct {
    void *LoggedData;
  } RunningTime_PWORK;                 /* '<S5>/Running Time' */

  struct {
    void *LoggedData;
  } SampleTime_PWORK;                  /* '<S5>/Sample Time ' */

  void *VisualizationSetVariables_PWO_d;/* '<S72>/Visualization Set Variables' */
  int32_T MultiportSwitch_DIMS1;       /* '<S57>/Multiport Switch' */
  struct {
    int_T IcNeedsLoading;
  } Integrator1_IWORK;                 /* '<S25>/Integrator1' */

  int8_T LatchInput_SubsysRanBC;       /* '<S26>/Latch Input' */
  int8_T Subsystem_SubsysRanBC;        /* '<Root>/Subsystem' */
} DW_projetoRobotica_T;

/* Continuous states (auto storage) */
typedef struct {
  real_T Integrator2_CSTATE[6];        /* '<S2>/Integrator2' */
  real_T Integrator1_CSTATE[6];        /* '<S25>/Integrator1' */
  real_T Integrator2_CSTATE_l[6];      /* '<S25>/Integrator2' */
} X_projetoRobotica_T;

/* State derivatives (auto storage) */
typedef struct {
  real_T Integrator2_CSTATE[6];        /* '<S2>/Integrator2' */
  real_T Integrator1_CSTATE[6];        /* '<S25>/Integrator1' */
  real_T Integrator2_CSTATE_l[6];      /* '<S25>/Integrator2' */
} XDot_projetoRobotica_T;

/* State disabled  */
typedef struct {
  boolean_T Integrator2_CSTATE[6];     /* '<S2>/Integrator2' */
  boolean_T Integrator1_CSTATE[6];     /* '<S25>/Integrator1' */
  boolean_T Integrator2_CSTATE_l[6];   /* '<S25>/Integrator2' */
} XDis_projetoRobotica_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState Integrator2_Reset_ZCE[6]; /* '<S2>/Integrator2' */
  ZCSigState Subsystem_Trig_ZCE;       /* '<Root>/Subsystem' */
  ZCSigState LatchInput_Trig_ZCE[6];   /* '<S26>/Latch Input' */
} PrevZCX_projetoRobotica_T;

#ifndef ODE1_INTG
#define ODE1_INTG

/* ODE1 Integration Data */
typedef struct {
  real_T *f[1];                        /* derivatives */
} ODE1_IntgData;

#endif

/* Parameters (auto storage) */
struct P_projetoRobotica_T_ {
  real_T JointsUpperLimits_const[6];   /* Mask Parameter: JointsUpperLimits_const
                                        * Referenced by: '<S32>/Constant'
                                        */
  real_T JointsLowerLimits_const[6];   /* Mask Parameter: JointsLowerLimits_const
                                        * Referenced by: '<S30>/Constant'
                                        */
  real_T JointsLowerLimits1_const;     /* Mask Parameter: JointsLowerLimits1_const
                                        * Referenced by: '<S31>/Constant'
                                        */
  real_T StreamServer_default_value[7];/* Mask Parameter: StreamServer_default_value
                                        * Referenced by: '<Root>/Stream Server'
                                        */
  real_T SliderGain_gain;              /* Mask Parameter: SliderGain_gain
                                        * Referenced by: '<S33>/Slider Gain'
                                        */
  real_T SliderGain1_gain;             /* Mask Parameter: SliderGain1_gain
                                        * Referenced by: '<S34>/Slider Gain'
                                        */
  real_T SliderGain2_gain;             /* Mask Parameter: SliderGain2_gain
                                        * Referenced by: '<S35>/Slider Gain'
                                        */
  real_T SliderGain_gain_n;            /* Mask Parameter: SliderGain_gain_n
                                        * Referenced by: '<S36>/Slider Gain'
                                        */
  real_T SliderGain1_gain_c;           /* Mask Parameter: SliderGain1_gain_c
                                        * Referenced by: '<S37>/Slider Gain'
                                        */
  real_T SliderGain2_gain_l;           /* Mask Parameter: SliderGain2_gain_l
                                        * Referenced by: '<S38>/Slider Gain'
                                        */
  real_T SliderGain_gain_k;            /* Mask Parameter: SliderGain_gain_k
                                        * Referenced by: '<S39>/Slider Gain'
                                        */
  real_T SliderGain1_gain_co;          /* Mask Parameter: SliderGain1_gain_co
                                        * Referenced by: '<S40>/Slider Gain'
                                        */
  real_T SliderGain2_gain_b;           /* Mask Parameter: SliderGain2_gain_b
                                        * Referenced by: '<S41>/Slider Gain'
                                        */
  real_T SliderGain_gain_k4;           /* Mask Parameter: SliderGain_gain_k4
                                        * Referenced by: '<S42>/Slider Gain'
                                        */
  real_T SliderGain1_gain_d;           /* Mask Parameter: SliderGain1_gain_d
                                        * Referenced by: '<S43>/Slider Gain'
                                        */
  real_T SliderGain2_gain_h;           /* Mask Parameter: SliderGain2_gain_h
                                        * Referenced by: '<S44>/Slider Gain'
                                        */
  real_T SliderGain_gain_kc;           /* Mask Parameter: SliderGain_gain_kc
                                        * Referenced by: '<S45>/Slider Gain'
                                        */
  real_T SliderGain1_gain_f;           /* Mask Parameter: SliderGain1_gain_f
                                        * Referenced by: '<S46>/Slider Gain'
                                        */
  real_T SliderGain2_gain_lg;          /* Mask Parameter: SliderGain2_gain_lg
                                        * Referenced by: '<S47>/Slider Gain'
                                        */
  real_T SliderGain_gain_l;            /* Mask Parameter: SliderGain_gain_l
                                        * Referenced by: '<S48>/Slider Gain'
                                        */
  real_T SliderGain1_gain_ci;          /* Mask Parameter: SliderGain1_gain_ci
                                        * Referenced by: '<S49>/Slider Gain'
                                        */
  real_T SliderGain2_gain_j;           /* Mask Parameter: SliderGain2_gain_j
                                        * Referenced by: '<S50>/Slider Gain'
                                        */
  real_T Slider6_gain;                 /* Mask Parameter: Slider6_gain
                                        * Referenced by: '<S63>/Slider Gain'
                                        */
  real_T Slider1_gain;                 /* Mask Parameter: Slider1_gain
                                        * Referenced by: '<S58>/Slider Gain'
                                        */
  real_T Slider2_gain;                 /* Mask Parameter: Slider2_gain
                                        * Referenced by: '<S59>/Slider Gain'
                                        */
  real_T Slider5_gain;                 /* Mask Parameter: Slider5_gain
                                        * Referenced by: '<S62>/Slider Gain'
                                        */
  real_T Slider3_gain;                 /* Mask Parameter: Slider3_gain
                                        * Referenced by: '<S60>/Slider Gain'
                                        */
  real_T Slider4_gain;                 /* Mask Parameter: Slider4_gain
                                        * Referenced by: '<S61>/Slider Gain'
                                        */
  real_T SliderGain_gain_h;            /* Mask Parameter: SliderGain_gain_h
                                        * Referenced by: '<S55>/Slider Gain'
                                        */
  real_T SliderGain1_gain_g;           /* Mask Parameter: SliderGain1_gain_g
                                        * Referenced by: '<S56>/Slider Gain'
                                        */
  real_T Slider7_gain;                 /* Mask Parameter: Slider7_gain
                                        * Referenced by: '<S64>/Slider Gain'
                                        */
  real_T SecondOrderLowPassFilter_input_;/* Mask Parameter: SecondOrderLowPassFilter_input_
                                          * Referenced by: '<S25>/wn'
                                          */
  real_T SecondOrderLowPassFilter_inpu_a;/* Mask Parameter: SecondOrderLowPassFilter_inpu_a
                                          * Referenced by: '<S25>/zt'
                                          */
  real32_T VisualizationInitialize_initial[15];/* Mask Parameter: VisualizationInitialize_initial
                                                * Referenced by: '<Root>/Visualization Initialize'
                                                */
  int32_T VisualizationInitialize_client_;/* Mask Parameter: VisualizationInitialize_client_
                                           * Referenced by: '<Root>/Visualization Initialize'
                                           */
  int32_T VisualizationInitialize_clien_e;/* Mask Parameter: VisualizationInitialize_clien_e
                                           * Referenced by: '<Root>/Visualization Initialize'
                                           */
  int32_T CompareToConstant1_const;    /* Mask Parameter: CompareToConstant1_const
                                        * Referenced by: '<S66>/Constant'
                                        */
  int32_T VisualizationInitialize_server_;/* Mask Parameter: VisualizationInitialize_server_
                                           * Referenced by: '<Root>/Visualization Initialize'
                                           */
  int32_T VisualizationInitialize_serve_h;/* Mask Parameter: VisualizationInitialize_serve_h
                                           * Referenced by: '<Root>/Visualization Initialize'
                                           */
  uint32_T VisualizationInitialize_variabl[5];/* Mask Parameter: VisualizationInitialize_variabl
                                               * Referenced by: '<Root>/Visualization Initialize'
                                               */
  int16_T CompareToConstant2_const;    /* Mask Parameter: CompareToConstant2_const
                                        * Referenced by: '<S13>/Constant'
                                        */
  int16_T CompareToConstant1_const_m;  /* Mask Parameter: CompareToConstant1_const_m
                                        * Referenced by: '<S12>/Constant'
                                        */
  uint8_T CompareToConstant_const;     /* Mask Parameter: CompareToConstant_const
                                        * Referenced by: '<S65>/Constant'
                                        */
  uint8_T StreamClient_default_value[12];/* Mask Parameter: StreamClient_default_value
                                          * Referenced by: '<S57>/Stream Client'
                                          */
  boolean_T VisualizationInitialize_close_o;/* Mask Parameter: VisualizationInitialize_close_o
                                             * Referenced by: '<Root>/Visualization Initialize'
                                             */
  real_T DENSOHOMEPOSITION_Value[7];   /* Expression: [0,0,-90,0,0,-120, 0]
                                        * Referenced by: '<Root>/DENSO HOME POSITION'
                                        */
  real_T Gain1_Gain;                   /* Expression: pi/180
                                        * Referenced by: '<Root>/Gain1'
                                        */
  real_T Constant1_Value[6];           /* Expression: zeros(1,6)
                                        * Referenced by: '<S2>/Constant1'
                                        */
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<S53>/Constant'
                                        */
  real_T Constant78_Value;             /* Expression: 0
                                        * Referenced by: '<S70>/Constant78'
                                        */
  real_T Constant77_Value;             /* Expression: 0
                                        * Referenced by: '<S70>/Constant77'
                                        */
  real_T Constant76_Value;             /* Expression: 9
                                        * Referenced by: '<S70>/Constant76'
                                        */
  real_T Constant75_Value;             /* Expression: 6
                                        * Referenced by: '<S70>/Constant75'
                                        */
  real_T Constant64_Value;             /* Expression: 3
                                        * Referenced by: '<S70>/Constant64'
                                        */
  real_T Constant74_Value;             /* Expression: 0
                                        * Referenced by: '<S70>/Constant74'
                                        */
  real_T Constant73_Value;             /* Expression: 0
                                        * Referenced by: '<S70>/Constant73'
                                        */
  real_T Constant72_Value;             /* Expression: 0
                                        * Referenced by: '<S70>/Constant72'
                                        */
  real_T Constant71_Value;             /* Expression: 16
                                        * Referenced by: '<S70>/Constant71'
                                        */
  real_T Constant70_Value;             /* Expression: 2
                                        * Referenced by: '<S70>/Constant70'
                                        */
  real_T Constant69_Value;             /* Expression: 13
                                        * Referenced by: '<S70>/Constant69'
                                        */
  real_T Constant68_Value;             /* Expression: 0
                                        * Referenced by: '<S70>/Constant68'
                                        */
  real_T Constant67_Value;             /* Expression: 0
                                        * Referenced by: '<S70>/Constant67'
                                        */
  real_T Constant63_Value;             /* Expression: 0
                                        * Referenced by: '<S70>/Constant63'
                                        */
  real_T Constant66_Value;             /* Expression: 171
                                        * Referenced by: '<S70>/Constant66'
                                        */
  real_T Constant65_Value;             /* Expression: 34
                                        * Referenced by: '<S70>/Constant65'
                                        */
  real_T Constant59_Value;             /* Expression: 0
                                        * Referenced by: '<S68>/Constant59'
                                        */
  real_T Constant58_Value;             /* Expression: 0
                                        * Referenced by: '<S68>/Constant58'
                                        */
  real_T Constant57_Value;             /* Expression: 9
                                        * Referenced by: '<S68>/Constant57'
                                        */
  real_T Constant56_Value;             /* Expression: 6
                                        * Referenced by: '<S68>/Constant56'
                                        */
  real_T Constant45_Value;             /* Expression: 3
                                        * Referenced by: '<S68>/Constant45'
                                        */
  real_T Constant55_Value;             /* Expression: 0
                                        * Referenced by: '<S68>/Constant55'
                                        */
  real_T Constant54_Value;             /* Expression: 0
                                        * Referenced by: '<S68>/Constant54'
                                        */
  real_T Constant53_Value;             /* Expression: 0
                                        * Referenced by: '<S68>/Constant53'
                                        */
  real_T Constant52_Value;             /* Expression: 16
                                        * Referenced by: '<S68>/Constant52'
                                        */
  real_T Constant51_Value;             /* Expression: 2
                                        * Referenced by: '<S68>/Constant51'
                                        */
  real_T Constant50_Value;             /* Expression: 13
                                        * Referenced by: '<S68>/Constant50'
                                        */
  real_T Constant49_Value;             /* Expression: 0
                                        * Referenced by: '<S68>/Constant49'
                                        */
  real_T Constant48_Value;             /* Expression: 0
                                        * Referenced by: '<S68>/Constant48'
                                        */
  real_T Constant44_Value;             /* Expression: 0
                                        * Referenced by: '<S68>/Constant44'
                                        */
  real_T Constant47_Value;             /* Expression: 238
                                        * Referenced by: '<S68>/Constant47'
                                        */
  real_T Constant46_Value;             /* Expression: 71
                                        * Referenced by: '<S68>/Constant46'
                                        */
  real_T Constant31_Value;             /* Expression: 0
                                        * Referenced by: '<S67>/Constant31'
                                        */
  real_T Constant30_Value;             /* Expression: 0
                                        * Referenced by: '<S67>/Constant30'
                                        */
  real_T Constant29_Value;             /* Expression: 0
                                        * Referenced by: '<S67>/Constant29'
                                        */
  real_T Constant28_Value;             /* Expression: 0
                                        * Referenced by: '<S67>/Constant28'
                                        */
  real_T Constant27_Value;             /* Expression: 0
                                        * Referenced by: '<S67>/Constant27'
                                        */
  real_T Constant26_Value;             /* Expression: 1
                                        * Referenced by: '<S67>/Constant26'
                                        */
  real_T Constant25_Value;             /* Expression: 6
                                        * Referenced by: '<S67>/Constant25'
                                        */
  real_T Constant14_Value;             /* Expression: 3
                                        * Referenced by: '<S67>/Constant14'
                                        */
  real_T Constant24_Value;             /* Expression: 0
                                        * Referenced by: '<S67>/Constant24'
                                        */
  real_T Constant23_Value;             /* Expression: 0
                                        * Referenced by: '<S67>/Constant23'
                                        */
  real_T Constant22_Value;             /* Expression: 0
                                        * Referenced by: '<S67>/Constant22'
                                        */
  real_T Constant21_Value;             /* Expression: 16
                                        * Referenced by: '<S67>/Constant21'
                                        */
  real_T Constant20_Value;             /* Expression: 2
                                        * Referenced by: '<S67>/Constant20'
                                        */
  real_T Constant19_Value;             /* Expression: 13
                                        * Referenced by: '<S67>/Constant19'
                                        */
  real_T Constant18_Value;             /* Expression: 0
                                        * Referenced by: '<S67>/Constant18'
                                        */
  real_T Constant17_Value;             /* Expression: 0
                                        * Referenced by: '<S67>/Constant17'
                                        */
  real_T Constant13_Value;             /* Expression: 0
                                        * Referenced by: '<S67>/Constant13'
                                        */
  real_T Constant16_Value;             /* Expression: 154
                                        * Referenced by: '<S67>/Constant16'
                                        */
  real_T Constant15_Value;             /* Expression: 33
                                        * Referenced by: '<S67>/Constant15'
                                        */
  real_T Gain1_Gain_n;                 /* Expression: -1
                                        * Referenced by: '<S6>/Gain1'
                                        */
  real_T Gain_Gain;                    /* Expression: -1
                                        * Referenced by: '<S6>/Gain'
                                        */
  real_T Gain2_Gain;                   /* Expression: -1
                                        * Referenced by: '<S6>/Gain2'
                                        */
  real_T todeg_Gain;                   /* Expression: 180/pi
                                        * Referenced by: '<S6>/to deg'
                                        */
  real_T theta1_Value;                 /* Expression: -0.19201
                                        * Referenced by: '<Root>/theta1'
                                        */
  real_T theta2_Value;                 /* Expression: -1.1468
                                        * Referenced by: '<Root>/theta2'
                                        */
  real_T theta3_Value;                 /* Expression: -1.3915
                                        * Referenced by: '<Root>/theta3'
                                        */
  real_T theta4_Value;                 /* Expression: -0.018925
                                        * Referenced by: '<Root>/theta4'
                                        */
  real_T theta5_Value;                 /* Expression: -0.58622
                                        * Referenced by: '<Root>/theta5'
                                        */
  real_T theta6_Value;                 /* Expression: -1.9388
                                        * Referenced by: '<Root>/theta6'
                                        */
  real_T gripper_Value;                /* Expression: 0
                                        * Referenced by: '<Root>/gripper'
                                        */
  real_T Constant1_Value_k;            /* Expression: -2*pi/3
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real_T Enc_Deg_Gain[6];              /* Expression: 1./[ 43690.66667 58254.22222 43690.66667 36408.88889 36408.88889 36408.88889]
                                        * Referenced by: '<S2>/Enc_Deg'
                                        */
  real_T Bias_Bias[6];                 /* Expression: [0 0 0 0 0 0]
                                        * Referenced by: '<S2>/Bias'
                                        */
  real_T Gain1_Gain_e;                 /* Expression: pi/180
                                        * Referenced by: '<S14>/Gain1'
                                        */
  real_T From_densoto_Q_frames_Gain[6];/* Expression: [1 -1 -1 1 -1 1]
                                        * Referenced by: '<S2>/From_denso to_Q_frames'
                                        */
  real_T Gain_Gain_d;                  /* Expression: 2
                                        * Referenced by: '<Root>/Gain'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: 200*pi/180
                                        * Referenced by: '<Root>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: -200*pi/180
                                        * Referenced by: '<Root>/Saturation1'
                                        */
  real_T fromQframestoDenso2_Gain[6];  /* Expression: [1 -1 -1 1 -1 1]
                                        * Referenced by: '<S2>/from Q frames to Denso2'
                                        */
  real_T Gain_Gain_m;                  /* Expression: 180/pi
                                        * Referenced by: '<S23>/Gain'
                                        */
  real_T SaturationDegsec_UpperSat[6]; /* Expression: 1e3*[1.1444    0.8583    1.1444    1.3733    1.3733    1.3733]
                                        * Referenced by: '<S2>/Saturation Deg//sec'
                                        */
  real_T SaturationDegsec_LowerSat[6]; /* Expression: -1e3*[1.1444    0.8583    1.1444    1.3733    1.3733    1.3733]
                                        * Referenced by: '<S2>/Saturation Deg//sec'
                                        */
  real_T Constant_Value_m;             /* Expression: 0
                                        * Referenced by: '<S27>/Constant'
                                        */
  real_T Constant_Value_l;             /* Expression: 0
                                        * Referenced by: '<S28>/Constant'
                                        */
  real_T Constant_Value_o;             /* Expression: 0
                                        * Referenced by: '<S29>/Constant'
                                        */
  real_T Degsec2deltaDeg_Gain;         /* Expression: qc_get_step_size
                                        * Referenced by: '<S2>/Deg//sec 2 deltaDeg'
                                        */
  real_T Deg_Enc_Gain[6];              /* Expression: [ 43690.66667 58254.22222 43690.66667 36408.88889 36408.88889 36408.88889]
                                        * Referenced by: '<S2>/Deg_Enc'
                                        */
  real_T Constant12_Value;             /* Expression: 1
                                        * Referenced by: '<S17>/Constant12'
                                        */
  real_T Constant3_Value;              /* Expression: 0
                                        * Referenced by: '<S2>/Constant3'
                                        */
  real_T Gain_Gain_mf;                 /* Expression: 1/.38*120
                                        * Referenced by: '<S17>/Gain'
                                        */
  real_T Gain3_Gain[4];                /* Expression: [1 1 1   1]
                                        * Referenced by: '<S17>/Gain3'
                                        */
  real_T J1Saturation_UpperSat;        /* Expression: 3.7
                                        * Referenced by: '<S2>/J1 Saturation'
                                        */
  real_T J1Saturation_LowerSat;        /* Expression: -3.7
                                        * Referenced by: '<S2>/J1 Saturation'
                                        */
  real_T Constant12_Value_b;           /* Expression: 1
                                        * Referenced by: '<S18>/Constant12'
                                        */
  real_T Constant4_Value;              /* Expression: 0
                                        * Referenced by: '<S2>/Constant4'
                                        */
  real_T Gain_Gain_g;                  /* Expression: 1/.38*160
                                        * Referenced by: '<S18>/Gain'
                                        */
  real_T Saturation5_UpperSat;         /* Expression: 3.7
                                        * Referenced by: '<S2>/Saturation5'
                                        */
  real_T Saturation5_LowerSat;         /* Expression: -3.7
                                        * Referenced by: '<S2>/Saturation5'
                                        */
  real_T Constant12_Value_n;           /* Expression: 1
                                        * Referenced by: '<S19>/Constant12'
                                        */
  real_T Constant5_Value;              /* Expression: 0
                                        * Referenced by: '<S2>/Constant5'
                                        */
  real_T Gain_Gain_e;                  /* Expression: 1/.38*120
                                        * Referenced by: '<S19>/Gain'
                                        */
  real_T Saturation4_UpperSat;         /* Expression: 3.7
                                        * Referenced by: '<S2>/Saturation4'
                                        */
  real_T Saturation4_LowerSat;         /* Expression: -3.7
                                        * Referenced by: '<S2>/Saturation4'
                                        */
  real_T Constant12_Value_c;           /* Expression: 1
                                        * Referenced by: '<S20>/Constant12'
                                        */
  real_T Constant6_Value;              /* Expression: 0
                                        * Referenced by: '<S2>/Constant6'
                                        */
  real_T Gain_Gain_i;                  /* Expression: 1/.22*100
                                        * Referenced by: '<S20>/Gain'
                                        */
  real_T Saturation3_UpperSat;         /* Expression: 3.7
                                        * Referenced by: '<S2>/Saturation3'
                                        */
  real_T Saturation3_LowerSat;         /* Expression: -3.7
                                        * Referenced by: '<S2>/Saturation3'
                                        */
  real_T Constant12_Value_d;           /* Expression: 1
                                        * Referenced by: '<S21>/Constant12'
                                        */
  real_T Constant7_Value;              /* Expression: 0
                                        * Referenced by: '<S2>/Constant7'
                                        */
  real_T Gain_Gain_c;                  /* Expression: 1/.21*100
                                        * Referenced by: '<S21>/Gain'
                                        */
  real_T Saturation2_UpperSat;         /* Expression: 3.7
                                        * Referenced by: '<S2>/Saturation2'
                                        */
  real_T Saturation2_LowerSat;         /* Expression: -3.7
                                        * Referenced by: '<S2>/Saturation2'
                                        */
  real_T Constant12_Value_c2;          /* Expression: 1
                                        * Referenced by: '<S22>/Constant12'
                                        */
  real_T Constant8_Value;              /* Expression: 0
                                        * Referenced by: '<S2>/Constant8'
                                        */
  real_T Gain_Gain_j;                  /* Expression: 1/.21*100
                                        * Referenced by: '<S22>/Gain'
                                        */
  real_T Saturation1_UpperSat_n;       /* Expression: 3.7
                                        * Referenced by: '<S2>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_j;       /* Expression: -3.7
                                        * Referenced by: '<S2>/Saturation1'
                                        */
  real_T Constant2_Value;              /* Expression: 5
                                        * Referenced by: '<S2>/Constant2'
                                        */
  real_T Switch_Threshold;             /* Expression: 0.5
                                        * Referenced by: '<S26>/Switch'
                                        */
  real_T Integrator2_IC;               /* Expression: 0
                                        * Referenced by: '<S2>/Integrator2'
                                        */
  real_T Saturation_UpperSat[6];       /* Expression: [160 65 162 162 100 365]
                                        * Referenced by: '<S2>/Saturation'
                                        */
  real_T Saturation_LowerSat[6];       /* Expression: -[160 122 20 162 100 365]
                                        * Referenced by: '<S2>/Saturation'
                                        */
  real_T Constant_Value_d;             /* Expression: 2
                                        * Referenced by: '<S25>/Constant'
                                        */
  real_T x0_Value;                     /* Expression: input_init
                                        * Referenced by: '<S25>/x0'
                                        */
  real_T Integrator2_IC_b;             /* Expression: 0
                                        * Referenced by: '<S25>/Integrator2'
                                        */
  real_T todeg1_Gain;                  /* Expression: 180/pi
                                        * Referenced by: '<Root>/to deg1'
                                        */
  real_T Constant82_Value;             /* Expression: 4
                                        * Referenced by: '<S3>/Constant82'
                                        */
  real_T Constant60_Value;             /* Expression: 255
                                        * Referenced by: '<S54>/Constant60'
                                        */
  real_T Constant61_Value;             /* Expression: 255
                                        * Referenced by: '<S54>/Constant61'
                                        */
  real_T Constant62_Value;             /* Expression: 255
                                        * Referenced by: '<S54>/Constant62'
                                        */
  real_T Constant79_Value;             /* Expression: 255
                                        * Referenced by: '<S54>/Constant79'
                                        */
  real_T Constant80_Value;             /* Expression: 255
                                        * Referenced by: '<S54>/Constant80'
                                        */
  real_T Constant81_Value;             /* Expression: 255
                                        * Referenced by: '<S54>/Constant81'
                                        */
  real_T Constant46_Value_e;           /* Expression: 55
                                        * Referenced by: '<S69>/Constant46'
                                        */
  real_T Constant47_Value_h;           /* Expression: 210
                                        * Referenced by: '<S69>/Constant47'
                                        */
  real_T Constant44_Value_k;           /* Expression: 0
                                        * Referenced by: '<S69>/Constant44'
                                        */
  real_T Constant48_Value_p;           /* Expression: 0
                                        * Referenced by: '<S69>/Constant48'
                                        */
  real_T Constant49_Value_b;           /* Expression: 0
                                        * Referenced by: '<S69>/Constant49'
                                        */
  real_T Constant50_Value_b;           /* Expression: 13
                                        * Referenced by: '<S69>/Constant50'
                                        */
  real_T Constant51_Value_f;           /* Expression: 2
                                        * Referenced by: '<S69>/Constant51'
                                        */
  real_T Constant52_Value_c;           /* Expression: 16
                                        * Referenced by: '<S69>/Constant52'
                                        */
  real_T Constant53_Value_p;           /* Expression: 0
                                        * Referenced by: '<S69>/Constant53'
                                        */
  real_T Constant54_Value_e;           /* Expression: 0
                                        * Referenced by: '<S69>/Constant54'
                                        */
  real_T Constant55_Value_h;           /* Expression: 0
                                        * Referenced by: '<S69>/Constant55'
                                        */
  real_T Constant45_Value_j;           /* Expression: 3
                                        * Referenced by: '<S69>/Constant45'
                                        */
  real_T Constant56_Value_f;           /* Expression: 6
                                        * Referenced by: '<S69>/Constant56'
                                        */
  real_T Constant57_Value_h;           /* Expression: 9
                                        * Referenced by: '<S69>/Constant57'
                                        */
  real_T Constant58_Value_i;           /* Expression: 0
                                        * Referenced by: '<S69>/Constant58'
                                        */
  real_T Constant59_Value_i;           /* Expression: 0
                                        * Referenced by: '<S69>/Constant59'
                                        */
  real_T Constant1_Value_m;            /* Expression: 255
                                        * Referenced by: '<S54>/Constant1'
                                        */
  real_T Constant9_Value;              /* Expression: 1
                                        * Referenced by: '<S3>/Constant9'
                                        */
  real_T Constant2_Value_f;            /* Expression: 255
                                        * Referenced by: '<S54>/Constant2'
                                        */
  real_T Constant10_Value;             /* Expression: 1
                                        * Referenced by: '<S3>/Constant10'
                                        */
  real_T Constant3_Value_k;            /* Expression: 255
                                        * Referenced by: '<S54>/Constant3'
                                        */
  real_T Enable_Value;                 /* Expression: 1
                                        * Referenced by: '<S57>/Enable'
                                        */
  real_T todeg_Gain_k;                 /* Expression: 180/pi
                                        * Referenced by: '<Root>/to deg'
                                        */
  real_T Constant_Value_a;             /* Expression: 1
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T Memory_X0;                    /* Expression: 0
                                        * Referenced by: '<S5>/Memory'
                                        */
  real32_T Gain1_Gain_j;               /* Computed Parameter: Gain1_Gain_j
                                        * Referenced by: '<S73>/Gain1'
                                        */
  real32_T Gain1_Gain_b;               /* Computed Parameter: Gain1_Gain_b
                                        * Referenced by: '<S74>/Gain1'
                                        */
  real32_T Gain1_Gain_f;               /* Computed Parameter: Gain1_Gain_f
                                        * Referenced by: '<S75>/Gain1'
                                        */
  real32_T Gain1_Gain_a;               /* Computed Parameter: Gain1_Gain_a
                                        * Referenced by: '<S76>/Gain1'
                                        */
  real32_T Gain1_Gain_l;               /* Computed Parameter: Gain1_Gain_l
                                        * Referenced by: '<S77>/Gain1'
                                        */
  real32_T Gain1_Gain_be;              /* Computed Parameter: Gain1_Gain_be
                                        * Referenced by: '<S7>/Gain1'
                                        */
  real32_T Gain1_Gain_fy;              /* Computed Parameter: Gain1_Gain_fy
                                        * Referenced by: '<S8>/Gain1'
                                        */
  real32_T Gain1_Gain_ld;              /* Computed Parameter: Gain1_Gain_ld
                                        * Referenced by: '<S9>/Gain1'
                                        */
  real32_T Gain1_Gain_g;               /* Computed Parameter: Gain1_Gain_g
                                        * Referenced by: '<S10>/Gain1'
                                        */
  real32_T Gain1_Gain_k;               /* Computed Parameter: Gain1_Gain_k
                                        * Referenced by: '<S11>/Gain1'
                                        */
  int32_T StreamClient_SndPriority;    /* Computed Parameter: StreamClient_SndPriority
                                        * Referenced by: '<S57>/Stream Client'
                                        */
  int32_T StreamClient_RcvPriority;    /* Computed Parameter: StreamClient_RcvPriority
                                        * Referenced by: '<S57>/Stream Client'
                                        */
  int32_T StreamServer_SndPriority;    /* Computed Parameter: StreamServer_SndPriority
                                        * Referenced by: '<Root>/Stream Server'
                                        */
  int32_T StreamServer_RcvPriority;    /* Computed Parameter: StreamServer_RcvPriority
                                        * Referenced by: '<Root>/Stream Server'
                                        */
  uint32_T StreamClient_SndSize;       /* Computed Parameter: StreamClient_SndSize
                                        * Referenced by: '<S57>/Stream Client'
                                        */
  uint32_T StreamClient_RcvSize;       /* Computed Parameter: StreamClient_RcvSize
                                        * Referenced by: '<S57>/Stream Client'
                                        */
  uint32_T StreamClient_SndFIFO;       /* Computed Parameter: StreamClient_SndFIFO
                                        * Referenced by: '<S57>/Stream Client'
                                        */
  uint32_T StreamClient_RcvFIFO;       /* Computed Parameter: StreamClient_RcvFIFO
                                        * Referenced by: '<S57>/Stream Client'
                                        */
  uint32_T StreamServer_SndSize;       /* Computed Parameter: StreamServer_SndSize
                                        * Referenced by: '<Root>/Stream Server'
                                        */
  uint32_T StreamServer_RcvSize;       /* Computed Parameter: StreamServer_RcvSize
                                        * Referenced by: '<Root>/Stream Server'
                                        */
  uint32_T StreamServer_SndFIFO;       /* Computed Parameter: StreamServer_SndFIFO
                                        * Referenced by: '<Root>/Stream Server'
                                        */
  uint32_T StreamServer_RcvFIFO;       /* Computed Parameter: StreamServer_RcvFIFO
                                        * Referenced by: '<Root>/Stream Server'
                                        */
  int8_T StreamClient_Optimize;        /* Computed Parameter: StreamClient_Optimize
                                        * Referenced by: '<S57>/Stream Client'
                                        */
  int8_T StreamClient_Implementation;  /* Computed Parameter: StreamClient_Implementation
                                        * Referenced by: '<S57>/Stream Client'
                                        */
  int8_T StreamServer_Optimize;        /* Computed Parameter: StreamServer_Optimize
                                        * Referenced by: '<Root>/Stream Server'
                                        */
  int8_T StreamServer_Implementation;  /* Computed Parameter: StreamServer_Implementation
                                        * Referenced by: '<Root>/Stream Server'
                                        */
  uint8_T ManualSwitch_CurrentSetting; /* Computed Parameter: ManualSwitch_CurrentSetting
                                        * Referenced by: '<Root>/Manual Switch'
                                        */
  uint8_T Switch_Threshold_g;          /* Computed Parameter: Switch_Threshold_g
                                        * Referenced by: '<S2>/Switch'
                                        */
  uint8_T ManualSwitch3_CurrentSetting;/* Computed Parameter: ManualSwitch3_CurrentSetting
                                        * Referenced by: '<S3>/Manual Switch3'
                                        */
  uint8_T StreamClient_URI[25];        /* Expression: uri_argument
                                        * Referenced by: '<S57>/Stream Client'
                                        */
  uint8_T StreamClient_Endian;         /* Computed Parameter: StreamClient_Endian
                                        * Referenced by: '<S57>/Stream Client'
                                        */
  uint8_T StreamServer_URI[24];        /* Expression: uri_argument
                                        * Referenced by: '<Root>/Stream Server'
                                        */
  uint8_T StreamServer_Endian;         /* Computed Parameter: StreamServer_Endian
                                        * Referenced by: '<Root>/Stream Server'
                                        */
  boolean_T SystemTimebase_StopOnOverrun;/* Computed Parameter: SystemTimebase_StopOnOverrun
                                          * Referenced by: '<Root>/System Timebase'
                                          */
  boolean_T VisualizationInitialize_OpenVie;/* Computed Parameter: VisualizationInitialize_OpenVie
                                             * Referenced by: '<Root>/Visualization Initialize'
                                             */
  boolean_T StreamClient_Active;       /* Computed Parameter: StreamClient_Active
                                        * Referenced by: '<S57>/Stream Client'
                                        */
  boolean_T StreamServer_Active;       /* Computed Parameter: StreamServer_Active
                                        * Referenced by: '<Root>/Stream Server'
                                        */
  uint8_T Gain_Gain_dw[6];             /* Computed Parameter: Gain_Gain_dw
                                        * Referenced by: '<S16>/Gain'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_projetoRobotica_T {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;

  /*
   * ModelData:
   * The following substructure contains information regarding
   * the data used in the model.
   */
  struct {
    X_projetoRobotica_T *contStates;
    int_T *periodicContStateIndices;
    real_T *periodicContStateRanges;
    real_T *derivs;
    boolean_T *contStateDisabled;
    boolean_T zCCacheNeedsReset;
    boolean_T derivCacheNeedsReset;
    boolean_T blkStateChange;
    real_T odeF[1][18];
    ODE1_IntgData intgData;
  } ModelData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numSampTimes;
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    boolean_T firstInitCondFlag;
    time_T tFinal;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block parameters (auto storage) */
extern P_projetoRobotica_T projetoRobotica_P;

/* Block signals (auto storage) */
extern B_projetoRobotica_T projetoRobotica_B;

/* Continuous states (auto storage) */
extern X_projetoRobotica_T projetoRobotica_X;

/* Block states (auto storage) */
extern DW_projetoRobotica_T projetoRobotica_DW;

/* External data declarations for dependent source files */
extern const real_T projetoRobotica_RGND;/* real_T ground */

/* Zero-crossing (trigger) state */
extern PrevZCX_projetoRobotica_T projetoRobotica_PrevZCX;

/* Model entry point functions */
extern void projetoRobotica_initialize(void);
extern void projetoRobotica_step(void);
extern void projetoRobotica_terminate(void);

/* Real-time Model object */
extern RT_MODEL_projetoRobotica_T *const projetoRobotica_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'projetoRobotica'
 * '<S1>'   : 'projetoRobotica/Denso Set_JointAngles_In_3D_Visualization1'
 * '<S2>'   : 'projetoRobotica/Denso Controller'
 * '<S3>'   : 'projetoRobotica/GRIPPER CONTROL'
 * '<S4>'   : 'projetoRobotica/MATLAB Function'
 * '<S5>'   : 'projetoRobotica/Sample Time Monitoring'
 * '<S6>'   : 'projetoRobotica/Subsystem'
 * '<S7>'   : 'projetoRobotica/Denso Set_JointAngles_In_3D_Visualization1/Degrees to Radians'
 * '<S8>'   : 'projetoRobotica/Denso Set_JointAngles_In_3D_Visualization1/Degrees to Radians_2'
 * '<S9>'   : 'projetoRobotica/Denso Set_JointAngles_In_3D_Visualization1/Degrees to Radians_3'
 * '<S10>'  : 'projetoRobotica/Denso Set_JointAngles_In_3D_Visualization1/Degrees to Radians_4'
 * '<S11>'  : 'projetoRobotica/Denso Set_JointAngles_In_3D_Visualization1/Degrees to Radians_5'
 * '<S12>'  : 'projetoRobotica/Denso Controller/Compare To Constant1'
 * '<S13>'  : 'projetoRobotica/Denso Controller/Compare To Constant2'
 * '<S14>'  : 'projetoRobotica/Denso Controller/Degrees to Radians'
 * '<S15>'  : 'projetoRobotica/Denso Controller/Denso I//O'
 * '<S16>'  : 'projetoRobotica/Denso Controller/Joint Saturation'
 * '<S17>'  : 'projetoRobotica/Denso Controller/Joint1 Controller'
 * '<S18>'  : 'projetoRobotica/Denso Controller/Joint2 Controller'
 * '<S19>'  : 'projetoRobotica/Denso Controller/Joint3 Controller'
 * '<S20>'  : 'projetoRobotica/Denso Controller/Joint4 Controller'
 * '<S21>'  : 'projetoRobotica/Denso Controller/Joint5 Controller'
 * '<S22>'  : 'projetoRobotica/Denso Controller/Joint6 Controller'
 * '<S23>'  : 'projetoRobotica/Denso Controller/Radians to Degrees'
 * '<S24>'  : 'projetoRobotica/Denso Controller/Scope Indexing Subsystem The first two inputs are the vectors to be compared. The third input is an  index to define the elements in each vector to be compared.'
 * '<S25>'  : 'projetoRobotica/Denso Controller/Second-Order Low-Pass Filter'
 * '<S26>'  : 'projetoRobotica/Denso Controller/rising edge latch'
 * '<S27>'  : 'projetoRobotica/Denso Controller/Joint Saturation/Compare To Zero'
 * '<S28>'  : 'projetoRobotica/Denso Controller/Joint Saturation/Compare To Zero1'
 * '<S29>'  : 'projetoRobotica/Denso Controller/Joint Saturation/Compare To Zero2'
 * '<S30>'  : 'projetoRobotica/Denso Controller/Joint Saturation/Joints Lower Limits'
 * '<S31>'  : 'projetoRobotica/Denso Controller/Joint Saturation/Joints Lower Limits1'
 * '<S32>'  : 'projetoRobotica/Denso Controller/Joint Saturation/Joints Upper Limits'
 * '<S33>'  : 'projetoRobotica/Denso Controller/Joint1 Controller/Slider Gain'
 * '<S34>'  : 'projetoRobotica/Denso Controller/Joint1 Controller/Slider Gain1'
 * '<S35>'  : 'projetoRobotica/Denso Controller/Joint1 Controller/Slider Gain2'
 * '<S36>'  : 'projetoRobotica/Denso Controller/Joint2 Controller/Slider Gain'
 * '<S37>'  : 'projetoRobotica/Denso Controller/Joint2 Controller/Slider Gain1'
 * '<S38>'  : 'projetoRobotica/Denso Controller/Joint2 Controller/Slider Gain2'
 * '<S39>'  : 'projetoRobotica/Denso Controller/Joint3 Controller/Slider Gain'
 * '<S40>'  : 'projetoRobotica/Denso Controller/Joint3 Controller/Slider Gain1'
 * '<S41>'  : 'projetoRobotica/Denso Controller/Joint3 Controller/Slider Gain2'
 * '<S42>'  : 'projetoRobotica/Denso Controller/Joint4 Controller/Slider Gain'
 * '<S43>'  : 'projetoRobotica/Denso Controller/Joint4 Controller/Slider Gain1'
 * '<S44>'  : 'projetoRobotica/Denso Controller/Joint4 Controller/Slider Gain2'
 * '<S45>'  : 'projetoRobotica/Denso Controller/Joint5 Controller/Slider Gain'
 * '<S46>'  : 'projetoRobotica/Denso Controller/Joint5 Controller/Slider Gain1'
 * '<S47>'  : 'projetoRobotica/Denso Controller/Joint5 Controller/Slider Gain2'
 * '<S48>'  : 'projetoRobotica/Denso Controller/Joint6 Controller/Slider Gain'
 * '<S49>'  : 'projetoRobotica/Denso Controller/Joint6 Controller/Slider Gain1'
 * '<S50>'  : 'projetoRobotica/Denso Controller/Joint6 Controller/Slider Gain2'
 * '<S51>'  : 'projetoRobotica/Denso Controller/Scope Indexing Subsystem The first two inputs are the vectors to be compared. The third input is an  index to define the elements in each vector to be compared./Dynamic Router'
 * '<S52>'  : 'projetoRobotica/Denso Controller/Scope Indexing Subsystem The first two inputs are the vectors to be compared. The third input is an  index to define the elements in each vector to be compared./Dynamic Router1'
 * '<S53>'  : 'projetoRobotica/Denso Controller/rising edge latch/Latch Input'
 * '<S54>'  : 'projetoRobotica/GRIPPER CONTROL/RobotiQ Gripper Control'
 * '<S55>'  : 'projetoRobotica/GRIPPER CONTROL/Slider Gain'
 * '<S56>'  : 'projetoRobotica/GRIPPER CONTROL/Slider Gain1'
 * '<S57>'  : 'projetoRobotica/GRIPPER CONTROL/RobotiQ Gripper Control/RobotiQ'
 * '<S58>'  : 'projetoRobotica/GRIPPER CONTROL/RobotiQ Gripper Control/Slider1'
 * '<S59>'  : 'projetoRobotica/GRIPPER CONTROL/RobotiQ Gripper Control/Slider2'
 * '<S60>'  : 'projetoRobotica/GRIPPER CONTROL/RobotiQ Gripper Control/Slider3'
 * '<S61>'  : 'projetoRobotica/GRIPPER CONTROL/RobotiQ Gripper Control/Slider4'
 * '<S62>'  : 'projetoRobotica/GRIPPER CONTROL/RobotiQ Gripper Control/Slider5'
 * '<S63>'  : 'projetoRobotica/GRIPPER CONTROL/RobotiQ Gripper Control/Slider6'
 * '<S64>'  : 'projetoRobotica/GRIPPER CONTROL/RobotiQ Gripper Control/Slider7'
 * '<S65>'  : 'projetoRobotica/GRIPPER CONTROL/RobotiQ Gripper Control/RobotiQ/Compare To Constant'
 * '<S66>'  : 'projetoRobotica/GRIPPER CONTROL/RobotiQ Gripper Control/RobotiQ/Compare To Constant1'
 * '<S67>'  : 'projetoRobotica/GRIPPER CONTROL/RobotiQ Gripper Control/RobotiQ/Packet_Activatae'
 * '<S68>'  : 'projetoRobotica/GRIPPER CONTROL/RobotiQ Gripper Control/RobotiQ/Packet_Close'
 * '<S69>'  : 'projetoRobotica/GRIPPER CONTROL/RobotiQ Gripper Control/RobotiQ/Packet_Close1'
 * '<S70>'  : 'projetoRobotica/GRIPPER CONTROL/RobotiQ Gripper Control/RobotiQ/Packet_Open'
 * '<S71>'  : 'projetoRobotica/GRIPPER CONTROL/RobotiQ Gripper Control/RobotiQ/Packet_Read'
 * '<S72>'  : 'projetoRobotica/Subsystem/Denso Set_JointAngles_In_3D_Visualization'
 * '<S73>'  : 'projetoRobotica/Subsystem/Denso Set_JointAngles_In_3D_Visualization/Degrees to Radians'
 * '<S74>'  : 'projetoRobotica/Subsystem/Denso Set_JointAngles_In_3D_Visualization/Degrees to Radians_2'
 * '<S75>'  : 'projetoRobotica/Subsystem/Denso Set_JointAngles_In_3D_Visualization/Degrees to Radians_3'
 * '<S76>'  : 'projetoRobotica/Subsystem/Denso Set_JointAngles_In_3D_Visualization/Degrees to Radians_4'
 * '<S77>'  : 'projetoRobotica/Subsystem/Denso Set_JointAngles_In_3D_Visualization/Degrees to Radians_5'
 */
#endif                                 /* RTW_HEADER_projetoRobotica_h_ */

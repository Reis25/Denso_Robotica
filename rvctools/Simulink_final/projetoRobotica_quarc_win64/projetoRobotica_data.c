/*
 * projetoRobotica_data.c
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

/* Block parameters (auto storage) */
P_projetoRobotica_T projetoRobotica_P = {
  /*  Mask Parameter: JointsUpperLimits_const
   * Referenced by: '<S32>/Constant'
   */
  { 160.0, 65.0, 162.0, 162.0, 100.0, 160.0 },

  /*  Mask Parameter: JointsLowerLimits_const
   * Referenced by: '<S30>/Constant'
   */
  { -160.0, -122.0, 38.0, -162.0, -100.0, -160.0 },
  38.0,                                /* Mask Parameter: JointsLowerLimits1_const
                                        * Referenced by: '<S31>/Constant'
                                        */

  /*  Mask Parameter: StreamServer_default_value
   * Referenced by: '<Root>/Stream Server'
   */
  { 0.0, 0.0, -1.5707963267948966, 0.0, 0.0, 0.0, 0.0 },
  0.22,                                /* Mask Parameter: SliderGain_gain
                                        * Referenced by: '<S33>/Slider Gain'
                                        */
  0.1,                                 /* Mask Parameter: SliderGain1_gain
                                        * Referenced by: '<S34>/Slider Gain'
                                        */
  24.0,                                /* Mask Parameter: SliderGain2_gain
                                        * Referenced by: '<S35>/Slider Gain'
                                        */
  0.1512,                              /* Mask Parameter: SliderGain_gain_n
                                        * Referenced by: '<S36>/Slider Gain'
                                        */
  0.08,                                /* Mask Parameter: SliderGain1_gain_c
                                        * Referenced by: '<S37>/Slider Gain'
                                        */
  14.88,                               /* Mask Parameter: SliderGain2_gain_l
                                        * Referenced by: '<S38>/Slider Gain'
                                        */
  0.19,                                /* Mask Parameter: SliderGain_gain_k
                                        * Referenced by: '<S39>/Slider Gain'
                                        */
  0.3,                                 /* Mask Parameter: SliderGain1_gain_co
                                        * Referenced by: '<S40>/Slider Gain'
                                        */
  10.8,                                /* Mask Parameter: SliderGain2_gain_b
                                        * Referenced by: '<S41>/Slider Gain'
                                        */
  0.05,                                /* Mask Parameter: SliderGain_gain_k4
                                        * Referenced by: '<S42>/Slider Gain'
                                        */
  0.05,                                /* Mask Parameter: SliderGain1_gain_d
                                        * Referenced by: '<S43>/Slider Gain'
                                        */
  1.4,                                 /* Mask Parameter: SliderGain2_gain_h
                                        * Referenced by: '<S44>/Slider Gain'
                                        */
  0.182,                               /* Mask Parameter: SliderGain_gain_kc
                                        * Referenced by: '<S45>/Slider Gain'
                                        */
  0.087,                               /* Mask Parameter: SliderGain1_gain_f
                                        * Referenced by: '<S46>/Slider Gain'
                                        */
  4.25,                                /* Mask Parameter: SliderGain2_gain_lg
                                        * Referenced by: '<S47>/Slider Gain'
                                        */
  0.1,                                 /* Mask Parameter: SliderGain_gain_l
                                        * Referenced by: '<S48>/Slider Gain'
                                        */
  0.1,                                 /* Mask Parameter: SliderGain1_gain_ci
                                        * Referenced by: '<S49>/Slider Gain'
                                        */
  3.0,                                 /* Mask Parameter: SliderGain2_gain_j
                                        * Referenced by: '<S50>/Slider Gain'
                                        */
  1.0,                                 /* Mask Parameter: Slider6_gain
                                        * Referenced by: '<S63>/Slider Gain'
                                        */
  0.5,                                 /* Mask Parameter: Slider1_gain
                                        * Referenced by: '<S58>/Slider Gain'
                                        */
  0.35,                                /* Mask Parameter: Slider2_gain
                                        * Referenced by: '<S59>/Slider Gain'
                                        */
  0.0,                                 /* Mask Parameter: Slider5_gain
                                        * Referenced by: '<S62>/Slider Gain'
                                        */
  0.5,                                 /* Mask Parameter: Slider3_gain
                                        * Referenced by: '<S60>/Slider Gain'
                                        */
  0.5,                                 /* Mask Parameter: Slider4_gain
                                        * Referenced by: '<S61>/Slider Gain'
                                        */
  0.35972,                             /* Mask Parameter: SliderGain_gain_h
                                        * Referenced by: '<S55>/Slider Gain'
                                        */
  1.0,                                 /* Mask Parameter: SliderGain1_gain_g
                                        * Referenced by: '<S56>/Slider Gain'
                                        */
  0.5,                                 /* Mask Parameter: Slider7_gain
                                        * Referenced by: '<S64>/Slider Gain'
                                        */
  60.0,                                /* Mask Parameter: SecondOrderLowPassFilter_input_
                                        * Referenced by: '<S25>/wn'
                                        */
  1.0,                                 /* Mask Parameter: SecondOrderLowPassFilter_inpu_a
                                        * Referenced by: '<S25>/zt'
                                        */

  /*  Mask Parameter: VisualizationInitialize_initial
   * Referenced by: '<Root>/Visualization Initialize'
   */
  { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, -1.5708F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F },
  1000000,                             /* Mask Parameter: VisualizationInitialize_client_
                                        * Referenced by: '<Root>/Visualization Initialize'
                                        */
  1000,                                /* Mask Parameter: VisualizationInitialize_clien_e
                                        * Referenced by: '<Root>/Visualization Initialize'
                                        */
  0,                                   /* Mask Parameter: CompareToConstant1_const
                                        * Referenced by: '<S66>/Constant'
                                        */
  1000,                                /* Mask Parameter: VisualizationInitialize_server_
                                        * Referenced by: '<Root>/Visualization Initialize'
                                        */
  1000000,                             /* Mask Parameter: VisualizationInitialize_serve_h
                                        * Referenced by: '<Root>/Visualization Initialize'
                                        */

  /*  Mask Parameter: VisualizationInitialize_variabl
   * Referenced by: '<Root>/Visualization Initialize'
   */
  { 31U, 41U, 51U, 61U, 71U },
  7,                                   /* Mask Parameter: CompareToConstant2_const
                                        * Referenced by: '<S13>/Constant'
                                        */
  8,                                   /* Mask Parameter: CompareToConstant1_const_m
                                        * Referenced by: '<S12>/Constant'
                                        */
  2U,                                  /* Mask Parameter: CompareToConstant_const
                                        * Referenced by: '<S65>/Constant'
                                        */

  /*  Mask Parameter: StreamClient_default_value
   * Referenced by: '<S57>/Stream Client'
   */
  { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U },
  1,                                   /* Mask Parameter: VisualizationInitialize_close_o
                                        * Referenced by: '<Root>/Visualization Initialize'
                                        */

  /*  Expression: [0,0,-90,0,0,-120, 0]
   * Referenced by: '<Root>/DENSO HOME POSITION'
   */
  { 0.0, 0.0, -90.0, 0.0, 0.0, -120.0, 0.0 },
  0.017453292519943295,                /* Expression: pi/180
                                        * Referenced by: '<Root>/Gain1'
                                        */

  /*  Expression: zeros(1,6)
   * Referenced by: '<S2>/Constant1'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S53>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S70>/Constant78'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S70>/Constant77'
                                        */
  9.0,                                 /* Expression: 9
                                        * Referenced by: '<S70>/Constant76'
                                        */
  6.0,                                 /* Expression: 6
                                        * Referenced by: '<S70>/Constant75'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<S70>/Constant64'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S70>/Constant74'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S70>/Constant73'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S70>/Constant72'
                                        */
  16.0,                                /* Expression: 16
                                        * Referenced by: '<S70>/Constant71'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S70>/Constant70'
                                        */
  13.0,                                /* Expression: 13
                                        * Referenced by: '<S70>/Constant69'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S70>/Constant68'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S70>/Constant67'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S70>/Constant63'
                                        */
  171.0,                               /* Expression: 171
                                        * Referenced by: '<S70>/Constant66'
                                        */
  34.0,                                /* Expression: 34
                                        * Referenced by: '<S70>/Constant65'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S68>/Constant59'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S68>/Constant58'
                                        */
  9.0,                                 /* Expression: 9
                                        * Referenced by: '<S68>/Constant57'
                                        */
  6.0,                                 /* Expression: 6
                                        * Referenced by: '<S68>/Constant56'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<S68>/Constant45'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S68>/Constant55'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S68>/Constant54'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S68>/Constant53'
                                        */
  16.0,                                /* Expression: 16
                                        * Referenced by: '<S68>/Constant52'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S68>/Constant51'
                                        */
  13.0,                                /* Expression: 13
                                        * Referenced by: '<S68>/Constant50'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S68>/Constant49'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S68>/Constant48'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S68>/Constant44'
                                        */
  238.0,                               /* Expression: 238
                                        * Referenced by: '<S68>/Constant47'
                                        */
  71.0,                                /* Expression: 71
                                        * Referenced by: '<S68>/Constant46'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S67>/Constant31'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S67>/Constant30'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S67>/Constant29'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S67>/Constant28'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S67>/Constant27'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S67>/Constant26'
                                        */
  6.0,                                 /* Expression: 6
                                        * Referenced by: '<S67>/Constant25'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<S67>/Constant14'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S67>/Constant24'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S67>/Constant23'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S67>/Constant22'
                                        */
  16.0,                                /* Expression: 16
                                        * Referenced by: '<S67>/Constant21'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S67>/Constant20'
                                        */
  13.0,                                /* Expression: 13
                                        * Referenced by: '<S67>/Constant19'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S67>/Constant18'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S67>/Constant17'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S67>/Constant13'
                                        */
  154.0,                               /* Expression: 154
                                        * Referenced by: '<S67>/Constant16'
                                        */
  33.0,                                /* Expression: 33
                                        * Referenced by: '<S67>/Constant15'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S6>/Gain1'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S6>/Gain'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S6>/Gain2'
                                        */
  57.295779513082323,                  /* Expression: 180/pi
                                        * Referenced by: '<S6>/to deg'
                                        */
  -0.19201,                            /* Expression: -0.19201
                                        * Referenced by: '<Root>/theta1'
                                        */
  -1.1468,                             /* Expression: -1.1468
                                        * Referenced by: '<Root>/theta2'
                                        */
  -1.3915,                             /* Expression: -1.3915
                                        * Referenced by: '<Root>/theta3'
                                        */
  -0.018925,                           /* Expression: -0.018925
                                        * Referenced by: '<Root>/theta4'
                                        */
  -0.58622,                            /* Expression: -0.58622
                                        * Referenced by: '<Root>/theta5'
                                        */
  -1.9388,                             /* Expression: -1.9388
                                        * Referenced by: '<Root>/theta6'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/gripper'
                                        */
  -2.0943951023931953,                 /* Expression: -2*pi/3
                                        * Referenced by: '<Root>/Constant1'
                                        */

  /*  Expression: 1./[ 43690.66667 58254.22222 43690.66667 36408.88889 36408.88889 36408.88889]
   * Referenced by: '<S2>/Enc_Deg'
   */
  { 2.288818359200377E-5, 1.7166137695967334E-5, 2.288818359200377E-5,
    2.7465820311661807E-5, 2.7465820311661807E-5, 2.7465820311661807E-5 },

  /*  Expression: [0 0 0 0 0 0]
   * Referenced by: '<S2>/Bias'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },
  0.017453292519943295,                /* Expression: pi/180
                                        * Referenced by: '<S14>/Gain1'
                                        */

  /*  Expression: [1 -1 -1 1 -1 1]
   * Referenced by: '<S2>/From_denso to_Q_frames'
   */
  { 1.0, -1.0, -1.0, 1.0, -1.0, 1.0 },
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<Root>/Gain'
                                        */
  3.4906585039886591,                  /* Expression: 200*pi/180
                                        * Referenced by: '<Root>/Saturation1'
                                        */
  -3.4906585039886591,                 /* Expression: -200*pi/180
                                        * Referenced by: '<Root>/Saturation1'
                                        */

  /*  Expression: [1 -1 -1 1 -1 1]
   * Referenced by: '<S2>/from Q frames to Denso2'
   */
  { 1.0, -1.0, -1.0, 1.0, -1.0, 1.0 },
  57.295779513082323,                  /* Expression: 180/pi
                                        * Referenced by: '<S23>/Gain'
                                        */

  /*  Expression: 1e3*[1.1444    0.8583    1.1444    1.3733    1.3733    1.3733]
   * Referenced by: '<S2>/Saturation Deg//sec'
   */
  { 1144.4, 858.3, 1144.4, 1373.3, 1373.3, 1373.3 },

  /*  Expression: -1e3*[1.1444    0.8583    1.1444    1.3733    1.3733    1.3733]
   * Referenced by: '<S2>/Saturation Deg//sec'
   */
  { -1144.4, -858.3, -1144.4, -1373.3, -1373.3, -1373.3 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S27>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S28>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S29>/Constant'
                                        */
  0.001,                               /* Expression: qc_get_step_size
                                        * Referenced by: '<S2>/Deg//sec 2 deltaDeg'
                                        */

  /*  Expression: [ 43690.66667 58254.22222 43690.66667 36408.88889 36408.88889 36408.88889]
   * Referenced by: '<S2>/Deg_Enc'
   */
  { 43690.66667, 58254.22222, 43690.66667, 36408.88889, 36408.88889, 36408.88889
  },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S17>/Constant12'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/Constant3'
                                        */
  315.78947368421052,                  /* Expression: 1/.38*120
                                        * Referenced by: '<S17>/Gain'
                                        */

  /*  Expression: [1 1 1   1]
   * Referenced by: '<S17>/Gain3'
   */
  { 1.0, 1.0, 1.0, 1.0 },
  3.7,                                 /* Expression: 3.7
                                        * Referenced by: '<S2>/J1 Saturation'
                                        */
  -3.7,                                /* Expression: -3.7
                                        * Referenced by: '<S2>/J1 Saturation'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S18>/Constant12'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/Constant4'
                                        */
  421.0526315789474,                   /* Expression: 1/.38*160
                                        * Referenced by: '<S18>/Gain'
                                        */
  3.7,                                 /* Expression: 3.7
                                        * Referenced by: '<S2>/Saturation5'
                                        */
  -3.7,                                /* Expression: -3.7
                                        * Referenced by: '<S2>/Saturation5'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S19>/Constant12'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/Constant5'
                                        */
  315.78947368421052,                  /* Expression: 1/.38*120
                                        * Referenced by: '<S19>/Gain'
                                        */
  3.7,                                 /* Expression: 3.7
                                        * Referenced by: '<S2>/Saturation4'
                                        */
  -3.7,                                /* Expression: -3.7
                                        * Referenced by: '<S2>/Saturation4'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S20>/Constant12'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/Constant6'
                                        */
  454.54545454545456,                  /* Expression: 1/.22*100
                                        * Referenced by: '<S20>/Gain'
                                        */
  3.7,                                 /* Expression: 3.7
                                        * Referenced by: '<S2>/Saturation3'
                                        */
  -3.7,                                /* Expression: -3.7
                                        * Referenced by: '<S2>/Saturation3'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S21>/Constant12'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/Constant7'
                                        */
  476.1904761904762,                   /* Expression: 1/.21*100
                                        * Referenced by: '<S21>/Gain'
                                        */
  3.7,                                 /* Expression: 3.7
                                        * Referenced by: '<S2>/Saturation2'
                                        */
  -3.7,                                /* Expression: -3.7
                                        * Referenced by: '<S2>/Saturation2'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S22>/Constant12'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/Constant8'
                                        */
  476.1904761904762,                   /* Expression: 1/.21*100
                                        * Referenced by: '<S22>/Gain'
                                        */
  3.7,                                 /* Expression: 3.7
                                        * Referenced by: '<S2>/Saturation1'
                                        */
  -3.7,                                /* Expression: -3.7
                                        * Referenced by: '<S2>/Saturation1'
                                        */
  5.0,                                 /* Expression: 5
                                        * Referenced by: '<S2>/Constant2'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S26>/Switch'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/Integrator2'
                                        */

  /*  Expression: [160 65 162 162 100 365]
   * Referenced by: '<S2>/Saturation'
   */
  { 160.0, 65.0, 162.0, 162.0, 100.0, 365.0 },

  /*  Expression: -[160 122 20 162 100 365]
   * Referenced by: '<S2>/Saturation'
   */
  { -160.0, -122.0, -20.0, -162.0, -100.0, -365.0 },
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S25>/Constant'
                                        */
  0.0,                                 /* Expression: input_init
                                        * Referenced by: '<S25>/x0'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S25>/Integrator2'
                                        */
  57.295779513082323,                  /* Expression: 180/pi
                                        * Referenced by: '<Root>/to deg1'
                                        */
  4.0,                                 /* Expression: 4
                                        * Referenced by: '<S3>/Constant82'
                                        */
  255.0,                               /* Expression: 255
                                        * Referenced by: '<S54>/Constant60'
                                        */
  255.0,                               /* Expression: 255
                                        * Referenced by: '<S54>/Constant61'
                                        */
  255.0,                               /* Expression: 255
                                        * Referenced by: '<S54>/Constant62'
                                        */
  255.0,                               /* Expression: 255
                                        * Referenced by: '<S54>/Constant79'
                                        */
  255.0,                               /* Expression: 255
                                        * Referenced by: '<S54>/Constant80'
                                        */
  255.0,                               /* Expression: 255
                                        * Referenced by: '<S54>/Constant81'
                                        */
  55.0,                                /* Expression: 55
                                        * Referenced by: '<S69>/Constant46'
                                        */
  210.0,                               /* Expression: 210
                                        * Referenced by: '<S69>/Constant47'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S69>/Constant44'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S69>/Constant48'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S69>/Constant49'
                                        */
  13.0,                                /* Expression: 13
                                        * Referenced by: '<S69>/Constant50'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S69>/Constant51'
                                        */
  16.0,                                /* Expression: 16
                                        * Referenced by: '<S69>/Constant52'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S69>/Constant53'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S69>/Constant54'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S69>/Constant55'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<S69>/Constant45'
                                        */
  6.0,                                 /* Expression: 6
                                        * Referenced by: '<S69>/Constant56'
                                        */
  9.0,                                 /* Expression: 9
                                        * Referenced by: '<S69>/Constant57'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S69>/Constant58'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S69>/Constant59'
                                        */
  255.0,                               /* Expression: 255
                                        * Referenced by: '<S54>/Constant1'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S3>/Constant9'
                                        */
  255.0,                               /* Expression: 255
                                        * Referenced by: '<S54>/Constant2'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S3>/Constant10'
                                        */
  255.0,                               /* Expression: 255
                                        * Referenced by: '<S54>/Constant3'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S57>/Enable'
                                        */
  57.295779513082323,                  /* Expression: 180/pi
                                        * Referenced by: '<Root>/to deg'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<Root>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S5>/Memory'
                                        */
  0.0174532924F,                       /* Computed Parameter: Gain1_Gain_j
                                        * Referenced by: '<S73>/Gain1'
                                        */
  0.0174532924F,                       /* Computed Parameter: Gain1_Gain_b
                                        * Referenced by: '<S74>/Gain1'
                                        */
  0.0174532924F,                       /* Computed Parameter: Gain1_Gain_f
                                        * Referenced by: '<S75>/Gain1'
                                        */
  0.0174532924F,                       /* Computed Parameter: Gain1_Gain_a
                                        * Referenced by: '<S76>/Gain1'
                                        */
  0.0174532924F,                       /* Computed Parameter: Gain1_Gain_l
                                        * Referenced by: '<S77>/Gain1'
                                        */
  0.0174532924F,                       /* Computed Parameter: Gain1_Gain_be
                                        * Referenced by: '<S7>/Gain1'
                                        */
  0.0174532924F,                       /* Computed Parameter: Gain1_Gain_fy
                                        * Referenced by: '<S8>/Gain1'
                                        */
  0.0174532924F,                       /* Computed Parameter: Gain1_Gain_ld
                                        * Referenced by: '<S9>/Gain1'
                                        */
  0.0174532924F,                       /* Computed Parameter: Gain1_Gain_g
                                        * Referenced by: '<S10>/Gain1'
                                        */
  0.0174532924F,                       /* Computed Parameter: Gain1_Gain_k
                                        * Referenced by: '<S11>/Gain1'
                                        */
  0,                                   /* Computed Parameter: StreamClient_SndPriority
                                        * Referenced by: '<S57>/Stream Client'
                                        */
  0,                                   /* Computed Parameter: StreamClient_RcvPriority
                                        * Referenced by: '<S57>/Stream Client'
                                        */
  0,                                   /* Computed Parameter: StreamServer_SndPriority
                                        * Referenced by: '<Root>/Stream Server'
                                        */
  0,                                   /* Computed Parameter: StreamServer_RcvPriority
                                        * Referenced by: '<Root>/Stream Server'
                                        */
  1460U,                               /* Computed Parameter: StreamClient_SndSize
                                        * Referenced by: '<S57>/Stream Client'
                                        */
  1460U,                               /* Computed Parameter: StreamClient_RcvSize
                                        * Referenced by: '<S57>/Stream Client'
                                        */
  1000U,                               /* Computed Parameter: StreamClient_SndFIFO
                                        * Referenced by: '<S57>/Stream Client'
                                        */
  1000U,                               /* Computed Parameter: StreamClient_RcvFIFO
                                        * Referenced by: '<S57>/Stream Client'
                                        */
  1460U,                               /* Computed Parameter: StreamServer_SndSize
                                        * Referenced by: '<Root>/Stream Server'
                                        */
  1460U,                               /* Computed Parameter: StreamServer_RcvSize
                                        * Referenced by: '<Root>/Stream Server'
                                        */
  1000U,                               /* Computed Parameter: StreamServer_SndFIFO
                                        * Referenced by: '<Root>/Stream Server'
                                        */
  1000U,                               /* Computed Parameter: StreamServer_RcvFIFO
                                        * Referenced by: '<Root>/Stream Server'
                                        */
  2,                                   /* Computed Parameter: StreamClient_Optimize
                                        * Referenced by: '<S57>/Stream Client'
                                        */
  2,                                   /* Computed Parameter: StreamClient_Implementation
                                        * Referenced by: '<S57>/Stream Client'
                                        */
  2,                                   /* Computed Parameter: StreamServer_Optimize
                                        * Referenced by: '<Root>/Stream Server'
                                        */
  1,                                   /* Computed Parameter: StreamServer_Implementation
                                        * Referenced by: '<Root>/Stream Server'
                                        */
  1U,                                  /* Computed Parameter: ManualSwitch_CurrentSetting
                                        * Referenced by: '<Root>/Manual Switch'
                                        */
  1U,                                  /* Computed Parameter: Switch_Threshold_g
                                        * Referenced by: '<S2>/Switch'
                                        */
  1U,                                  /* Computed Parameter: ManualSwitch3_CurrentSetting
                                        * Referenced by: '<S3>/Manual Switch3'
                                        */

  /*  Expression: uri_argument
   * Referenced by: '<S57>/Stream Client'
   */
  { 116U, 99U, 112U, 105U, 112U, 58U, 47U, 47U, 49U, 57U, 50U, 46U, 49U, 54U,
    56U, 46U, 49U, 46U, 49U, 49U, 58U, 53U, 48U, 50U, 0U },
  1U,                                  /* Computed Parameter: StreamClient_Endian
                                        * Referenced by: '<S57>/Stream Client'
                                        */

  /*  Expression: uri_argument
   * Referenced by: '<Root>/Stream Server'
   */
  { 116U, 99U, 112U, 105U, 112U, 58U, 47U, 47U, 108U, 111U, 99U, 97U, 108U, 104U,
    111U, 115U, 116U, 58U, 49U, 55U, 48U, 48U, 49U, 0U },
  1U,                                  /* Computed Parameter: StreamServer_Endian
                                        * Referenced by: '<Root>/Stream Server'
                                        */
  0,                                   /* Computed Parameter: SystemTimebase_StopOnOverrun
                                        * Referenced by: '<Root>/System Timebase'
                                        */
  1,                                   /* Computed Parameter: VisualizationInitialize_OpenVie
                                        * Referenced by: '<Root>/Visualization Initialize'
                                        */
  1,                                   /* Computed Parameter: StreamClient_Active
                                        * Referenced by: '<S57>/Stream Client'
                                        */
  1,                                   /* Computed Parameter: StreamServer_Active
                                        * Referenced by: '<Root>/Stream Server'
                                        */

  /*  Computed Parameter: Gain_Gain_dw
   * Referenced by: '<S16>/Gain'
   */
  { 128U, 128U, 128U, 128U, 128U, 128U }
};

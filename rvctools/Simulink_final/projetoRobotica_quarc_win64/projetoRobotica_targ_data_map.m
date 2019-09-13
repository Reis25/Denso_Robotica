  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 15;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (projetoRobotica_P)
    ;%
      section.nData     = 33;
      section.data(33)  = dumData; %prealloc
      
	  ;% projetoRobotica_P.JointsUpperLimits_const
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% projetoRobotica_P.JointsLowerLimits_const
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 6;
	
	  ;% projetoRobotica_P.JointsLowerLimits1_const
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 12;
	
	  ;% projetoRobotica_P.StreamServer_default_value
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 13;
	
	  ;% projetoRobotica_P.SliderGain_gain
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 20;
	
	  ;% projetoRobotica_P.SliderGain1_gain
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 21;
	
	  ;% projetoRobotica_P.SliderGain2_gain
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 22;
	
	  ;% projetoRobotica_P.SliderGain_gain_n
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 23;
	
	  ;% projetoRobotica_P.SliderGain1_gain_c
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 24;
	
	  ;% projetoRobotica_P.SliderGain2_gain_l
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 25;
	
	  ;% projetoRobotica_P.SliderGain_gain_k
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 26;
	
	  ;% projetoRobotica_P.SliderGain1_gain_co
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 27;
	
	  ;% projetoRobotica_P.SliderGain2_gain_b
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 28;
	
	  ;% projetoRobotica_P.SliderGain_gain_k4
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 29;
	
	  ;% projetoRobotica_P.SliderGain1_gain_d
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 30;
	
	  ;% projetoRobotica_P.SliderGain2_gain_h
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 31;
	
	  ;% projetoRobotica_P.SliderGain_gain_kc
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 32;
	
	  ;% projetoRobotica_P.SliderGain1_gain_f
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 33;
	
	  ;% projetoRobotica_P.SliderGain2_gain_lg
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 34;
	
	  ;% projetoRobotica_P.SliderGain_gain_l
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 35;
	
	  ;% projetoRobotica_P.SliderGain1_gain_ci
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 36;
	
	  ;% projetoRobotica_P.SliderGain2_gain_j
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 37;
	
	  ;% projetoRobotica_P.Slider6_gain
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 38;
	
	  ;% projetoRobotica_P.Slider1_gain
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 39;
	
	  ;% projetoRobotica_P.Slider2_gain
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 40;
	
	  ;% projetoRobotica_P.Slider5_gain
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 41;
	
	  ;% projetoRobotica_P.Slider3_gain
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 42;
	
	  ;% projetoRobotica_P.Slider4_gain
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 43;
	
	  ;% projetoRobotica_P.SliderGain_gain_h
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 44;
	
	  ;% projetoRobotica_P.SliderGain1_gain_g
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 45;
	
	  ;% projetoRobotica_P.Slider7_gain
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 46;
	
	  ;% projetoRobotica_P.SecondOrderLowPassFilter_input_
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 47;
	
	  ;% projetoRobotica_P.SecondOrderLowPassFilter_inpu_a
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 48;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% projetoRobotica_P.VisualizationInitialize_initial
	  section.data(1).logicalSrcIdx = 33;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% projetoRobotica_P.VisualizationInitialize_client_
	  section.data(1).logicalSrcIdx = 34;
	  section.data(1).dtTransOffset = 0;
	
	  ;% projetoRobotica_P.VisualizationInitialize_clien_e
	  section.data(2).logicalSrcIdx = 35;
	  section.data(2).dtTransOffset = 1;
	
	  ;% projetoRobotica_P.CompareToConstant1_const
	  section.data(3).logicalSrcIdx = 36;
	  section.data(3).dtTransOffset = 2;
	
	  ;% projetoRobotica_P.VisualizationInitialize_server_
	  section.data(4).logicalSrcIdx = 37;
	  section.data(4).dtTransOffset = 3;
	
	  ;% projetoRobotica_P.VisualizationInitialize_serve_h
	  section.data(5).logicalSrcIdx = 38;
	  section.data(5).dtTransOffset = 4;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(3) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% projetoRobotica_P.VisualizationInitialize_variabl
	  section.data(1).logicalSrcIdx = 39;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(4) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% projetoRobotica_P.CompareToConstant2_const
	  section.data(1).logicalSrcIdx = 40;
	  section.data(1).dtTransOffset = 0;
	
	  ;% projetoRobotica_P.CompareToConstant1_const_m
	  section.data(2).logicalSrcIdx = 41;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(5) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% projetoRobotica_P.CompareToConstant_const
	  section.data(1).logicalSrcIdx = 42;
	  section.data(1).dtTransOffset = 0;
	
	  ;% projetoRobotica_P.StreamClient_default_value
	  section.data(2).logicalSrcIdx = 43;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(6) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% projetoRobotica_P.VisualizationInitialize_close_o
	  section.data(1).logicalSrcIdx = 44;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(7) = section;
      clear section
      
      section.nData     = 155;
      section.data(155)  = dumData; %prealloc
      
	  ;% projetoRobotica_P.DENSOHOMEPOSITION_Value
	  section.data(1).logicalSrcIdx = 45;
	  section.data(1).dtTransOffset = 0;
	
	  ;% projetoRobotica_P.Gain1_Gain
	  section.data(2).logicalSrcIdx = 46;
	  section.data(2).dtTransOffset = 7;
	
	  ;% projetoRobotica_P.Constant1_Value
	  section.data(3).logicalSrcIdx = 47;
	  section.data(3).dtTransOffset = 8;
	
	  ;% projetoRobotica_P.Constant_Value
	  section.data(4).logicalSrcIdx = 48;
	  section.data(4).dtTransOffset = 14;
	
	  ;% projetoRobotica_P.Constant78_Value
	  section.data(5).logicalSrcIdx = 49;
	  section.data(5).dtTransOffset = 15;
	
	  ;% projetoRobotica_P.Constant77_Value
	  section.data(6).logicalSrcIdx = 50;
	  section.data(6).dtTransOffset = 16;
	
	  ;% projetoRobotica_P.Constant76_Value
	  section.data(7).logicalSrcIdx = 51;
	  section.data(7).dtTransOffset = 17;
	
	  ;% projetoRobotica_P.Constant75_Value
	  section.data(8).logicalSrcIdx = 52;
	  section.data(8).dtTransOffset = 18;
	
	  ;% projetoRobotica_P.Constant64_Value
	  section.data(9).logicalSrcIdx = 53;
	  section.data(9).dtTransOffset = 19;
	
	  ;% projetoRobotica_P.Constant74_Value
	  section.data(10).logicalSrcIdx = 54;
	  section.data(10).dtTransOffset = 20;
	
	  ;% projetoRobotica_P.Constant73_Value
	  section.data(11).logicalSrcIdx = 55;
	  section.data(11).dtTransOffset = 21;
	
	  ;% projetoRobotica_P.Constant72_Value
	  section.data(12).logicalSrcIdx = 56;
	  section.data(12).dtTransOffset = 22;
	
	  ;% projetoRobotica_P.Constant71_Value
	  section.data(13).logicalSrcIdx = 57;
	  section.data(13).dtTransOffset = 23;
	
	  ;% projetoRobotica_P.Constant70_Value
	  section.data(14).logicalSrcIdx = 58;
	  section.data(14).dtTransOffset = 24;
	
	  ;% projetoRobotica_P.Constant69_Value
	  section.data(15).logicalSrcIdx = 59;
	  section.data(15).dtTransOffset = 25;
	
	  ;% projetoRobotica_P.Constant68_Value
	  section.data(16).logicalSrcIdx = 60;
	  section.data(16).dtTransOffset = 26;
	
	  ;% projetoRobotica_P.Constant67_Value
	  section.data(17).logicalSrcIdx = 61;
	  section.data(17).dtTransOffset = 27;
	
	  ;% projetoRobotica_P.Constant63_Value
	  section.data(18).logicalSrcIdx = 62;
	  section.data(18).dtTransOffset = 28;
	
	  ;% projetoRobotica_P.Constant66_Value
	  section.data(19).logicalSrcIdx = 63;
	  section.data(19).dtTransOffset = 29;
	
	  ;% projetoRobotica_P.Constant65_Value
	  section.data(20).logicalSrcIdx = 64;
	  section.data(20).dtTransOffset = 30;
	
	  ;% projetoRobotica_P.Constant59_Value
	  section.data(21).logicalSrcIdx = 65;
	  section.data(21).dtTransOffset = 31;
	
	  ;% projetoRobotica_P.Constant58_Value
	  section.data(22).logicalSrcIdx = 66;
	  section.data(22).dtTransOffset = 32;
	
	  ;% projetoRobotica_P.Constant57_Value
	  section.data(23).logicalSrcIdx = 67;
	  section.data(23).dtTransOffset = 33;
	
	  ;% projetoRobotica_P.Constant56_Value
	  section.data(24).logicalSrcIdx = 68;
	  section.data(24).dtTransOffset = 34;
	
	  ;% projetoRobotica_P.Constant45_Value
	  section.data(25).logicalSrcIdx = 69;
	  section.data(25).dtTransOffset = 35;
	
	  ;% projetoRobotica_P.Constant55_Value
	  section.data(26).logicalSrcIdx = 70;
	  section.data(26).dtTransOffset = 36;
	
	  ;% projetoRobotica_P.Constant54_Value
	  section.data(27).logicalSrcIdx = 71;
	  section.data(27).dtTransOffset = 37;
	
	  ;% projetoRobotica_P.Constant53_Value
	  section.data(28).logicalSrcIdx = 72;
	  section.data(28).dtTransOffset = 38;
	
	  ;% projetoRobotica_P.Constant52_Value
	  section.data(29).logicalSrcIdx = 73;
	  section.data(29).dtTransOffset = 39;
	
	  ;% projetoRobotica_P.Constant51_Value
	  section.data(30).logicalSrcIdx = 74;
	  section.data(30).dtTransOffset = 40;
	
	  ;% projetoRobotica_P.Constant50_Value
	  section.data(31).logicalSrcIdx = 75;
	  section.data(31).dtTransOffset = 41;
	
	  ;% projetoRobotica_P.Constant49_Value
	  section.data(32).logicalSrcIdx = 76;
	  section.data(32).dtTransOffset = 42;
	
	  ;% projetoRobotica_P.Constant48_Value
	  section.data(33).logicalSrcIdx = 77;
	  section.data(33).dtTransOffset = 43;
	
	  ;% projetoRobotica_P.Constant44_Value
	  section.data(34).logicalSrcIdx = 78;
	  section.data(34).dtTransOffset = 44;
	
	  ;% projetoRobotica_P.Constant47_Value
	  section.data(35).logicalSrcIdx = 79;
	  section.data(35).dtTransOffset = 45;
	
	  ;% projetoRobotica_P.Constant46_Value
	  section.data(36).logicalSrcIdx = 80;
	  section.data(36).dtTransOffset = 46;
	
	  ;% projetoRobotica_P.Constant31_Value
	  section.data(37).logicalSrcIdx = 81;
	  section.data(37).dtTransOffset = 47;
	
	  ;% projetoRobotica_P.Constant30_Value
	  section.data(38).logicalSrcIdx = 82;
	  section.data(38).dtTransOffset = 48;
	
	  ;% projetoRobotica_P.Constant29_Value
	  section.data(39).logicalSrcIdx = 83;
	  section.data(39).dtTransOffset = 49;
	
	  ;% projetoRobotica_P.Constant28_Value
	  section.data(40).logicalSrcIdx = 84;
	  section.data(40).dtTransOffset = 50;
	
	  ;% projetoRobotica_P.Constant27_Value
	  section.data(41).logicalSrcIdx = 85;
	  section.data(41).dtTransOffset = 51;
	
	  ;% projetoRobotica_P.Constant26_Value
	  section.data(42).logicalSrcIdx = 86;
	  section.data(42).dtTransOffset = 52;
	
	  ;% projetoRobotica_P.Constant25_Value
	  section.data(43).logicalSrcIdx = 87;
	  section.data(43).dtTransOffset = 53;
	
	  ;% projetoRobotica_P.Constant14_Value
	  section.data(44).logicalSrcIdx = 88;
	  section.data(44).dtTransOffset = 54;
	
	  ;% projetoRobotica_P.Constant24_Value
	  section.data(45).logicalSrcIdx = 89;
	  section.data(45).dtTransOffset = 55;
	
	  ;% projetoRobotica_P.Constant23_Value
	  section.data(46).logicalSrcIdx = 90;
	  section.data(46).dtTransOffset = 56;
	
	  ;% projetoRobotica_P.Constant22_Value
	  section.data(47).logicalSrcIdx = 91;
	  section.data(47).dtTransOffset = 57;
	
	  ;% projetoRobotica_P.Constant21_Value
	  section.data(48).logicalSrcIdx = 92;
	  section.data(48).dtTransOffset = 58;
	
	  ;% projetoRobotica_P.Constant20_Value
	  section.data(49).logicalSrcIdx = 93;
	  section.data(49).dtTransOffset = 59;
	
	  ;% projetoRobotica_P.Constant19_Value
	  section.data(50).logicalSrcIdx = 94;
	  section.data(50).dtTransOffset = 60;
	
	  ;% projetoRobotica_P.Constant18_Value
	  section.data(51).logicalSrcIdx = 95;
	  section.data(51).dtTransOffset = 61;
	
	  ;% projetoRobotica_P.Constant17_Value
	  section.data(52).logicalSrcIdx = 96;
	  section.data(52).dtTransOffset = 62;
	
	  ;% projetoRobotica_P.Constant13_Value
	  section.data(53).logicalSrcIdx = 97;
	  section.data(53).dtTransOffset = 63;
	
	  ;% projetoRobotica_P.Constant16_Value
	  section.data(54).logicalSrcIdx = 98;
	  section.data(54).dtTransOffset = 64;
	
	  ;% projetoRobotica_P.Constant15_Value
	  section.data(55).logicalSrcIdx = 99;
	  section.data(55).dtTransOffset = 65;
	
	  ;% projetoRobotica_P.Gain1_Gain_n
	  section.data(56).logicalSrcIdx = 100;
	  section.data(56).dtTransOffset = 66;
	
	  ;% projetoRobotica_P.Gain_Gain
	  section.data(57).logicalSrcIdx = 101;
	  section.data(57).dtTransOffset = 67;
	
	  ;% projetoRobotica_P.Gain2_Gain
	  section.data(58).logicalSrcIdx = 102;
	  section.data(58).dtTransOffset = 68;
	
	  ;% projetoRobotica_P.todeg_Gain
	  section.data(59).logicalSrcIdx = 103;
	  section.data(59).dtTransOffset = 69;
	
	  ;% projetoRobotica_P.theta1_Value
	  section.data(60).logicalSrcIdx = 104;
	  section.data(60).dtTransOffset = 70;
	
	  ;% projetoRobotica_P.theta2_Value
	  section.data(61).logicalSrcIdx = 105;
	  section.data(61).dtTransOffset = 71;
	
	  ;% projetoRobotica_P.theta3_Value
	  section.data(62).logicalSrcIdx = 106;
	  section.data(62).dtTransOffset = 72;
	
	  ;% projetoRobotica_P.theta4_Value
	  section.data(63).logicalSrcIdx = 107;
	  section.data(63).dtTransOffset = 73;
	
	  ;% projetoRobotica_P.theta5_Value
	  section.data(64).logicalSrcIdx = 108;
	  section.data(64).dtTransOffset = 74;
	
	  ;% projetoRobotica_P.theta6_Value
	  section.data(65).logicalSrcIdx = 109;
	  section.data(65).dtTransOffset = 75;
	
	  ;% projetoRobotica_P.gripper_Value
	  section.data(66).logicalSrcIdx = 110;
	  section.data(66).dtTransOffset = 76;
	
	  ;% projetoRobotica_P.Constant1_Value_k
	  section.data(67).logicalSrcIdx = 111;
	  section.data(67).dtTransOffset = 77;
	
	  ;% projetoRobotica_P.Enc_Deg_Gain
	  section.data(68).logicalSrcIdx = 112;
	  section.data(68).dtTransOffset = 78;
	
	  ;% projetoRobotica_P.Bias_Bias
	  section.data(69).logicalSrcIdx = 113;
	  section.data(69).dtTransOffset = 84;
	
	  ;% projetoRobotica_P.Gain1_Gain_e
	  section.data(70).logicalSrcIdx = 114;
	  section.data(70).dtTransOffset = 90;
	
	  ;% projetoRobotica_P.From_densoto_Q_frames_Gain
	  section.data(71).logicalSrcIdx = 115;
	  section.data(71).dtTransOffset = 91;
	
	  ;% projetoRobotica_P.Gain_Gain_d
	  section.data(72).logicalSrcIdx = 116;
	  section.data(72).dtTransOffset = 97;
	
	  ;% projetoRobotica_P.Saturation1_UpperSat
	  section.data(73).logicalSrcIdx = 117;
	  section.data(73).dtTransOffset = 98;
	
	  ;% projetoRobotica_P.Saturation1_LowerSat
	  section.data(74).logicalSrcIdx = 118;
	  section.data(74).dtTransOffset = 99;
	
	  ;% projetoRobotica_P.fromQframestoDenso2_Gain
	  section.data(75).logicalSrcIdx = 119;
	  section.data(75).dtTransOffset = 100;
	
	  ;% projetoRobotica_P.Gain_Gain_m
	  section.data(76).logicalSrcIdx = 120;
	  section.data(76).dtTransOffset = 106;
	
	  ;% projetoRobotica_P.SaturationDegsec_UpperSat
	  section.data(77).logicalSrcIdx = 121;
	  section.data(77).dtTransOffset = 107;
	
	  ;% projetoRobotica_P.SaturationDegsec_LowerSat
	  section.data(78).logicalSrcIdx = 122;
	  section.data(78).dtTransOffset = 113;
	
	  ;% projetoRobotica_P.Constant_Value_m
	  section.data(79).logicalSrcIdx = 123;
	  section.data(79).dtTransOffset = 119;
	
	  ;% projetoRobotica_P.Constant_Value_l
	  section.data(80).logicalSrcIdx = 124;
	  section.data(80).dtTransOffset = 120;
	
	  ;% projetoRobotica_P.Constant_Value_o
	  section.data(81).logicalSrcIdx = 125;
	  section.data(81).dtTransOffset = 121;
	
	  ;% projetoRobotica_P.Degsec2deltaDeg_Gain
	  section.data(82).logicalSrcIdx = 126;
	  section.data(82).dtTransOffset = 122;
	
	  ;% projetoRobotica_P.Deg_Enc_Gain
	  section.data(83).logicalSrcIdx = 127;
	  section.data(83).dtTransOffset = 123;
	
	  ;% projetoRobotica_P.Constant12_Value
	  section.data(84).logicalSrcIdx = 128;
	  section.data(84).dtTransOffset = 129;
	
	  ;% projetoRobotica_P.Constant3_Value
	  section.data(85).logicalSrcIdx = 129;
	  section.data(85).dtTransOffset = 130;
	
	  ;% projetoRobotica_P.Gain_Gain_mf
	  section.data(86).logicalSrcIdx = 130;
	  section.data(86).dtTransOffset = 131;
	
	  ;% projetoRobotica_P.Gain3_Gain
	  section.data(87).logicalSrcIdx = 131;
	  section.data(87).dtTransOffset = 132;
	
	  ;% projetoRobotica_P.J1Saturation_UpperSat
	  section.data(88).logicalSrcIdx = 132;
	  section.data(88).dtTransOffset = 136;
	
	  ;% projetoRobotica_P.J1Saturation_LowerSat
	  section.data(89).logicalSrcIdx = 133;
	  section.data(89).dtTransOffset = 137;
	
	  ;% projetoRobotica_P.Constant12_Value_b
	  section.data(90).logicalSrcIdx = 134;
	  section.data(90).dtTransOffset = 138;
	
	  ;% projetoRobotica_P.Constant4_Value
	  section.data(91).logicalSrcIdx = 135;
	  section.data(91).dtTransOffset = 139;
	
	  ;% projetoRobotica_P.Gain_Gain_g
	  section.data(92).logicalSrcIdx = 136;
	  section.data(92).dtTransOffset = 140;
	
	  ;% projetoRobotica_P.Saturation5_UpperSat
	  section.data(93).logicalSrcIdx = 137;
	  section.data(93).dtTransOffset = 141;
	
	  ;% projetoRobotica_P.Saturation5_LowerSat
	  section.data(94).logicalSrcIdx = 138;
	  section.data(94).dtTransOffset = 142;
	
	  ;% projetoRobotica_P.Constant12_Value_n
	  section.data(95).logicalSrcIdx = 139;
	  section.data(95).dtTransOffset = 143;
	
	  ;% projetoRobotica_P.Constant5_Value
	  section.data(96).logicalSrcIdx = 140;
	  section.data(96).dtTransOffset = 144;
	
	  ;% projetoRobotica_P.Gain_Gain_e
	  section.data(97).logicalSrcIdx = 141;
	  section.data(97).dtTransOffset = 145;
	
	  ;% projetoRobotica_P.Saturation4_UpperSat
	  section.data(98).logicalSrcIdx = 142;
	  section.data(98).dtTransOffset = 146;
	
	  ;% projetoRobotica_P.Saturation4_LowerSat
	  section.data(99).logicalSrcIdx = 143;
	  section.data(99).dtTransOffset = 147;
	
	  ;% projetoRobotica_P.Constant12_Value_c
	  section.data(100).logicalSrcIdx = 144;
	  section.data(100).dtTransOffset = 148;
	
	  ;% projetoRobotica_P.Constant6_Value
	  section.data(101).logicalSrcIdx = 145;
	  section.data(101).dtTransOffset = 149;
	
	  ;% projetoRobotica_P.Gain_Gain_i
	  section.data(102).logicalSrcIdx = 146;
	  section.data(102).dtTransOffset = 150;
	
	  ;% projetoRobotica_P.Saturation3_UpperSat
	  section.data(103).logicalSrcIdx = 147;
	  section.data(103).dtTransOffset = 151;
	
	  ;% projetoRobotica_P.Saturation3_LowerSat
	  section.data(104).logicalSrcIdx = 148;
	  section.data(104).dtTransOffset = 152;
	
	  ;% projetoRobotica_P.Constant12_Value_d
	  section.data(105).logicalSrcIdx = 149;
	  section.data(105).dtTransOffset = 153;
	
	  ;% projetoRobotica_P.Constant7_Value
	  section.data(106).logicalSrcIdx = 150;
	  section.data(106).dtTransOffset = 154;
	
	  ;% projetoRobotica_P.Gain_Gain_c
	  section.data(107).logicalSrcIdx = 151;
	  section.data(107).dtTransOffset = 155;
	
	  ;% projetoRobotica_P.Saturation2_UpperSat
	  section.data(108).logicalSrcIdx = 152;
	  section.data(108).dtTransOffset = 156;
	
	  ;% projetoRobotica_P.Saturation2_LowerSat
	  section.data(109).logicalSrcIdx = 153;
	  section.data(109).dtTransOffset = 157;
	
	  ;% projetoRobotica_P.Constant12_Value_c2
	  section.data(110).logicalSrcIdx = 154;
	  section.data(110).dtTransOffset = 158;
	
	  ;% projetoRobotica_P.Constant8_Value
	  section.data(111).logicalSrcIdx = 155;
	  section.data(111).dtTransOffset = 159;
	
	  ;% projetoRobotica_P.Gain_Gain_j
	  section.data(112).logicalSrcIdx = 156;
	  section.data(112).dtTransOffset = 160;
	
	  ;% projetoRobotica_P.Saturation1_UpperSat_n
	  section.data(113).logicalSrcIdx = 157;
	  section.data(113).dtTransOffset = 161;
	
	  ;% projetoRobotica_P.Saturation1_LowerSat_j
	  section.data(114).logicalSrcIdx = 158;
	  section.data(114).dtTransOffset = 162;
	
	  ;% projetoRobotica_P.Constant2_Value
	  section.data(115).logicalSrcIdx = 159;
	  section.data(115).dtTransOffset = 163;
	
	  ;% projetoRobotica_P.Switch_Threshold
	  section.data(116).logicalSrcIdx = 160;
	  section.data(116).dtTransOffset = 164;
	
	  ;% projetoRobotica_P.Integrator2_IC
	  section.data(117).logicalSrcIdx = 161;
	  section.data(117).dtTransOffset = 165;
	
	  ;% projetoRobotica_P.Saturation_UpperSat
	  section.data(118).logicalSrcIdx = 162;
	  section.data(118).dtTransOffset = 166;
	
	  ;% projetoRobotica_P.Saturation_LowerSat
	  section.data(119).logicalSrcIdx = 163;
	  section.data(119).dtTransOffset = 172;
	
	  ;% projetoRobotica_P.Constant_Value_d
	  section.data(120).logicalSrcIdx = 164;
	  section.data(120).dtTransOffset = 178;
	
	  ;% projetoRobotica_P.x0_Value
	  section.data(121).logicalSrcIdx = 165;
	  section.data(121).dtTransOffset = 179;
	
	  ;% projetoRobotica_P.Integrator2_IC_b
	  section.data(122).logicalSrcIdx = 166;
	  section.data(122).dtTransOffset = 180;
	
	  ;% projetoRobotica_P.todeg1_Gain
	  section.data(123).logicalSrcIdx = 167;
	  section.data(123).dtTransOffset = 181;
	
	  ;% projetoRobotica_P.Constant82_Value
	  section.data(124).logicalSrcIdx = 168;
	  section.data(124).dtTransOffset = 182;
	
	  ;% projetoRobotica_P.Constant60_Value
	  section.data(125).logicalSrcIdx = 169;
	  section.data(125).dtTransOffset = 183;
	
	  ;% projetoRobotica_P.Constant61_Value
	  section.data(126).logicalSrcIdx = 170;
	  section.data(126).dtTransOffset = 184;
	
	  ;% projetoRobotica_P.Constant62_Value
	  section.data(127).logicalSrcIdx = 171;
	  section.data(127).dtTransOffset = 185;
	
	  ;% projetoRobotica_P.Constant79_Value
	  section.data(128).logicalSrcIdx = 172;
	  section.data(128).dtTransOffset = 186;
	
	  ;% projetoRobotica_P.Constant80_Value
	  section.data(129).logicalSrcIdx = 173;
	  section.data(129).dtTransOffset = 187;
	
	  ;% projetoRobotica_P.Constant81_Value
	  section.data(130).logicalSrcIdx = 174;
	  section.data(130).dtTransOffset = 188;
	
	  ;% projetoRobotica_P.Constant46_Value_e
	  section.data(131).logicalSrcIdx = 175;
	  section.data(131).dtTransOffset = 189;
	
	  ;% projetoRobotica_P.Constant47_Value_h
	  section.data(132).logicalSrcIdx = 176;
	  section.data(132).dtTransOffset = 190;
	
	  ;% projetoRobotica_P.Constant44_Value_k
	  section.data(133).logicalSrcIdx = 177;
	  section.data(133).dtTransOffset = 191;
	
	  ;% projetoRobotica_P.Constant48_Value_p
	  section.data(134).logicalSrcIdx = 178;
	  section.data(134).dtTransOffset = 192;
	
	  ;% projetoRobotica_P.Constant49_Value_b
	  section.data(135).logicalSrcIdx = 179;
	  section.data(135).dtTransOffset = 193;
	
	  ;% projetoRobotica_P.Constant50_Value_b
	  section.data(136).logicalSrcIdx = 180;
	  section.data(136).dtTransOffset = 194;
	
	  ;% projetoRobotica_P.Constant51_Value_f
	  section.data(137).logicalSrcIdx = 181;
	  section.data(137).dtTransOffset = 195;
	
	  ;% projetoRobotica_P.Constant52_Value_c
	  section.data(138).logicalSrcIdx = 182;
	  section.data(138).dtTransOffset = 196;
	
	  ;% projetoRobotica_P.Constant53_Value_p
	  section.data(139).logicalSrcIdx = 183;
	  section.data(139).dtTransOffset = 197;
	
	  ;% projetoRobotica_P.Constant54_Value_e
	  section.data(140).logicalSrcIdx = 184;
	  section.data(140).dtTransOffset = 198;
	
	  ;% projetoRobotica_P.Constant55_Value_h
	  section.data(141).logicalSrcIdx = 185;
	  section.data(141).dtTransOffset = 199;
	
	  ;% projetoRobotica_P.Constant45_Value_j
	  section.data(142).logicalSrcIdx = 186;
	  section.data(142).dtTransOffset = 200;
	
	  ;% projetoRobotica_P.Constant56_Value_f
	  section.data(143).logicalSrcIdx = 187;
	  section.data(143).dtTransOffset = 201;
	
	  ;% projetoRobotica_P.Constant57_Value_h
	  section.data(144).logicalSrcIdx = 188;
	  section.data(144).dtTransOffset = 202;
	
	  ;% projetoRobotica_P.Constant58_Value_i
	  section.data(145).logicalSrcIdx = 189;
	  section.data(145).dtTransOffset = 203;
	
	  ;% projetoRobotica_P.Constant59_Value_i
	  section.data(146).logicalSrcIdx = 190;
	  section.data(146).dtTransOffset = 204;
	
	  ;% projetoRobotica_P.Constant1_Value_m
	  section.data(147).logicalSrcIdx = 191;
	  section.data(147).dtTransOffset = 205;
	
	  ;% projetoRobotica_P.Constant9_Value
	  section.data(148).logicalSrcIdx = 192;
	  section.data(148).dtTransOffset = 206;
	
	  ;% projetoRobotica_P.Constant2_Value_f
	  section.data(149).logicalSrcIdx = 193;
	  section.data(149).dtTransOffset = 207;
	
	  ;% projetoRobotica_P.Constant10_Value
	  section.data(150).logicalSrcIdx = 194;
	  section.data(150).dtTransOffset = 208;
	
	  ;% projetoRobotica_P.Constant3_Value_k
	  section.data(151).logicalSrcIdx = 195;
	  section.data(151).dtTransOffset = 209;
	
	  ;% projetoRobotica_P.Enable_Value
	  section.data(152).logicalSrcIdx = 196;
	  section.data(152).dtTransOffset = 210;
	
	  ;% projetoRobotica_P.todeg_Gain_k
	  section.data(153).logicalSrcIdx = 197;
	  section.data(153).dtTransOffset = 211;
	
	  ;% projetoRobotica_P.Constant_Value_a
	  section.data(154).logicalSrcIdx = 198;
	  section.data(154).dtTransOffset = 212;
	
	  ;% projetoRobotica_P.Memory_X0
	  section.data(155).logicalSrcIdx = 199;
	  section.data(155).dtTransOffset = 213;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(8) = section;
      clear section
      
      section.nData     = 10;
      section.data(10)  = dumData; %prealloc
      
	  ;% projetoRobotica_P.Gain1_Gain_j
	  section.data(1).logicalSrcIdx = 200;
	  section.data(1).dtTransOffset = 0;
	
	  ;% projetoRobotica_P.Gain1_Gain_b
	  section.data(2).logicalSrcIdx = 201;
	  section.data(2).dtTransOffset = 1;
	
	  ;% projetoRobotica_P.Gain1_Gain_f
	  section.data(3).logicalSrcIdx = 202;
	  section.data(3).dtTransOffset = 2;
	
	  ;% projetoRobotica_P.Gain1_Gain_a
	  section.data(4).logicalSrcIdx = 203;
	  section.data(4).dtTransOffset = 3;
	
	  ;% projetoRobotica_P.Gain1_Gain_l
	  section.data(5).logicalSrcIdx = 204;
	  section.data(5).dtTransOffset = 4;
	
	  ;% projetoRobotica_P.Gain1_Gain_be
	  section.data(6).logicalSrcIdx = 205;
	  section.data(6).dtTransOffset = 5;
	
	  ;% projetoRobotica_P.Gain1_Gain_fy
	  section.data(7).logicalSrcIdx = 206;
	  section.data(7).dtTransOffset = 6;
	
	  ;% projetoRobotica_P.Gain1_Gain_ld
	  section.data(8).logicalSrcIdx = 207;
	  section.data(8).dtTransOffset = 7;
	
	  ;% projetoRobotica_P.Gain1_Gain_g
	  section.data(9).logicalSrcIdx = 208;
	  section.data(9).dtTransOffset = 8;
	
	  ;% projetoRobotica_P.Gain1_Gain_k
	  section.data(10).logicalSrcIdx = 209;
	  section.data(10).dtTransOffset = 9;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(9) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% projetoRobotica_P.StreamClient_SndPriority
	  section.data(1).logicalSrcIdx = 210;
	  section.data(1).dtTransOffset = 0;
	
	  ;% projetoRobotica_P.StreamClient_RcvPriority
	  section.data(2).logicalSrcIdx = 211;
	  section.data(2).dtTransOffset = 1;
	
	  ;% projetoRobotica_P.StreamServer_SndPriority
	  section.data(3).logicalSrcIdx = 212;
	  section.data(3).dtTransOffset = 2;
	
	  ;% projetoRobotica_P.StreamServer_RcvPriority
	  section.data(4).logicalSrcIdx = 213;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(10) = section;
      clear section
      
      section.nData     = 8;
      section.data(8)  = dumData; %prealloc
      
	  ;% projetoRobotica_P.StreamClient_SndSize
	  section.data(1).logicalSrcIdx = 214;
	  section.data(1).dtTransOffset = 0;
	
	  ;% projetoRobotica_P.StreamClient_RcvSize
	  section.data(2).logicalSrcIdx = 215;
	  section.data(2).dtTransOffset = 1;
	
	  ;% projetoRobotica_P.StreamClient_SndFIFO
	  section.data(3).logicalSrcIdx = 216;
	  section.data(3).dtTransOffset = 2;
	
	  ;% projetoRobotica_P.StreamClient_RcvFIFO
	  section.data(4).logicalSrcIdx = 217;
	  section.data(4).dtTransOffset = 3;
	
	  ;% projetoRobotica_P.StreamServer_SndSize
	  section.data(5).logicalSrcIdx = 218;
	  section.data(5).dtTransOffset = 4;
	
	  ;% projetoRobotica_P.StreamServer_RcvSize
	  section.data(6).logicalSrcIdx = 219;
	  section.data(6).dtTransOffset = 5;
	
	  ;% projetoRobotica_P.StreamServer_SndFIFO
	  section.data(7).logicalSrcIdx = 220;
	  section.data(7).dtTransOffset = 6;
	
	  ;% projetoRobotica_P.StreamServer_RcvFIFO
	  section.data(8).logicalSrcIdx = 221;
	  section.data(8).dtTransOffset = 7;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(11) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% projetoRobotica_P.StreamClient_Optimize
	  section.data(1).logicalSrcIdx = 222;
	  section.data(1).dtTransOffset = 0;
	
	  ;% projetoRobotica_P.StreamClient_Implementation
	  section.data(2).logicalSrcIdx = 223;
	  section.data(2).dtTransOffset = 1;
	
	  ;% projetoRobotica_P.StreamServer_Optimize
	  section.data(3).logicalSrcIdx = 224;
	  section.data(3).dtTransOffset = 2;
	
	  ;% projetoRobotica_P.StreamServer_Implementation
	  section.data(4).logicalSrcIdx = 225;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(12) = section;
      clear section
      
      section.nData     = 7;
      section.data(7)  = dumData; %prealloc
      
	  ;% projetoRobotica_P.ManualSwitch_CurrentSetting
	  section.data(1).logicalSrcIdx = 226;
	  section.data(1).dtTransOffset = 0;
	
	  ;% projetoRobotica_P.Switch_Threshold_g
	  section.data(2).logicalSrcIdx = 227;
	  section.data(2).dtTransOffset = 1;
	
	  ;% projetoRobotica_P.ManualSwitch3_CurrentSetting
	  section.data(3).logicalSrcIdx = 228;
	  section.data(3).dtTransOffset = 2;
	
	  ;% projetoRobotica_P.StreamClient_URI
	  section.data(4).logicalSrcIdx = 229;
	  section.data(4).dtTransOffset = 3;
	
	  ;% projetoRobotica_P.StreamClient_Endian
	  section.data(5).logicalSrcIdx = 230;
	  section.data(5).dtTransOffset = 28;
	
	  ;% projetoRobotica_P.StreamServer_URI
	  section.data(6).logicalSrcIdx = 231;
	  section.data(6).dtTransOffset = 29;
	
	  ;% projetoRobotica_P.StreamServer_Endian
	  section.data(7).logicalSrcIdx = 232;
	  section.data(7).dtTransOffset = 53;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(13) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% projetoRobotica_P.SystemTimebase_StopOnOverrun
	  section.data(1).logicalSrcIdx = 233;
	  section.data(1).dtTransOffset = 0;
	
	  ;% projetoRobotica_P.VisualizationInitialize_OpenVie
	  section.data(2).logicalSrcIdx = 234;
	  section.data(2).dtTransOffset = 1;
	
	  ;% projetoRobotica_P.StreamClient_Active
	  section.data(3).logicalSrcIdx = 235;
	  section.data(3).dtTransOffset = 2;
	
	  ;% projetoRobotica_P.StreamServer_Active
	  section.data(4).logicalSrcIdx = 236;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(14) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% projetoRobotica_P.Gain_Gain_dw
	  section.data(1).logicalSrcIdx = 237;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(15) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 9;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (projetoRobotica_B)
    ;%
      section.nData     = 27;
      section.data(27)  = dumData; %prealloc
      
	  ;% projetoRobotica_B.DensoRead_o3
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% projetoRobotica_B.Bias
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 6;
	
	  ;% projetoRobotica_B.Gain
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 12;
	
	  ;% projetoRobotica_B.Deg_Enc
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 18;
	
	  ;% projetoRobotica_B.J1Saturation
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 24;
	
	  ;% projetoRobotica_B.Saturation5
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 28;
	
	  ;% projetoRobotica_B.Saturation4
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 32;
	
	  ;% projetoRobotica_B.Saturation3
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 36;
	
	  ;% projetoRobotica_B.Saturation2
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 40;
	
	  ;% projetoRobotica_B.Saturation1
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 44;
	
	  ;% projetoRobotica_B.Constant2
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 48;
	
	  ;% projetoRobotica_B.Switch
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 49;
	
	  ;% projetoRobotica_B.x0
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 55;
	
	  ;% projetoRobotica_B.Product
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 56;
	
	  ;% projetoRobotica_B.Product1
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 62;
	
	  ;% projetoRobotica_B.StreamServer_o4
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 68;
	
	  ;% projetoRobotica_B.SampleTime
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 75;
	
	  ;% projetoRobotica_B.Sum1
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 76;
	
	  ;% projetoRobotica_B.Sum2
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 77;
	
	  ;% projetoRobotica_B.In1
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 78;
	
	  ;% projetoRobotica_B.Gain1
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 85;
	
	  ;% projetoRobotica_B.Gain_h
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 86;
	
	  ;% projetoRobotica_B.Gain2
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 87;
	
	  ;% projetoRobotica_B.TmpSignalConversionAtTCPIPSendI
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 88;
	
	  ;% projetoRobotica_B.y
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 95;
	
	  ;% projetoRobotica_B.Input
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 102;
	
	  ;% projetoRobotica_B.Constant
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 108;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% projetoRobotica_B.DensoRead_o1
	  section.data(1).logicalSrcIdx = 27;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% projetoRobotica_B.todeg
	  section.data(1).logicalSrcIdx = 28;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(3) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% projetoRobotica_B.DataTypeConversion1
	  section.data(1).logicalSrcIdx = 29;
	  section.data(1).dtTransOffset = 0;
	
	  ;% projetoRobotica_B.StreamClient_o2
	  section.data(2).logicalSrcIdx = 30;
	  section.data(2).dtTransOffset = 6;
	
	  ;% projetoRobotica_B.StreamServer_o2
	  section.data(3).logicalSrcIdx = 31;
	  section.data(3).dtTransOffset = 7;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(4) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% projetoRobotica_B.DensoRead_o4
	  section.data(1).logicalSrcIdx = 32;
	  section.data(1).dtTransOffset = 0;
	
	  ;% projetoRobotica_B.DensoRead_o5
	  section.data(2).logicalSrcIdx = 33;
	  section.data(2).dtTransOffset = 6;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(5) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% projetoRobotica_B.Compare
	  section.data(1).logicalSrcIdx = 34;
	  section.data(1).dtTransOffset = 0;
	
	  ;% projetoRobotica_B.StreamClient_o1
	  section.data(2).logicalSrcIdx = 35;
	  section.data(2).dtTransOffset = 6;
	
	  ;% projetoRobotica_B.StreamClient_o4
	  section.data(3).logicalSrcIdx = 36;
	  section.data(3).dtTransOffset = 7;
	
	  ;% projetoRobotica_B.StreamServer_o1
	  section.data(4).logicalSrcIdx = 37;
	  section.data(4).dtTransOffset = 19;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(6) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% projetoRobotica_B.LogicalOperator
	  section.data(1).logicalSrcIdx = 38;
	  section.data(1).dtTransOffset = 0;
	
	  ;% projetoRobotica_B.LogicalOperator_g
	  section.data(2).logicalSrcIdx = 39;
	  section.data(2).dtTransOffset = 6;
	
	  ;% projetoRobotica_B.StreamServer_o3
	  section.data(3).logicalSrcIdx = 40;
	  section.data(3).dtTransOffset = 7;
	
	  ;% projetoRobotica_B.StreamServer_o5
	  section.data(4).logicalSrcIdx = 41;
	  section.data(4).dtTransOffset = 8;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(7) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% projetoRobotica_B.sf_DynamicRouter1.signal
	  section.data(1).logicalSrcIdx = 42;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(8) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% projetoRobotica_B.sf_DynamicRouter.signal
	  section.data(1).logicalSrcIdx = 43;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(9) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 9;
    sectIdxOffset = 9;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (projetoRobotica_DW)
    ;%
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% projetoRobotica_DW.SystemTimebase_PreviousTime
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% projetoRobotica_DW.SampleTime_PreviousTime
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% projetoRobotica_DW.VisualizationSetVariables_PrevT
	  section.data(1).logicalSrcIdx = 2;
	  section.data(1).dtTransOffset = 0;
	
	  ;% projetoRobotica_DW.Memory_PreviousInput
	  section.data(2).logicalSrcIdx = 3;
	  section.data(2).dtTransOffset = 1;
	
	  ;% projetoRobotica_DW.VisualizationSetVariables_Pre_o
	  section.data(3).logicalSrcIdx = 4;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% projetoRobotica_DW.VisualizationInitialize_Visuali
	  section.data(1).logicalSrcIdx = 5;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% projetoRobotica_DW.DensoRead_Denso
	  section.data(1).logicalSrcIdx = 6;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% projetoRobotica_DW.StreamClient_Stream
	  section.data(1).logicalSrcIdx = 7;
	  section.data(1).dtTransOffset = 0;
	
	  ;% projetoRobotica_DW.StreamServer_Stream
	  section.data(2).logicalSrcIdx = 8;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
      section.nData     = 12;
      section.data(12)  = dumData; %prealloc
      
	  ;% projetoRobotica_DW.JointTracking_PWORK.LoggedData
	  section.data(1).logicalSrcIdx = 9;
	  section.data(1).dtTransOffset = 0;
	
	  ;% projetoRobotica_DW.efforts_PWORK.LoggedData
	  section.data(2).logicalSrcIdx = 10;
	  section.data(2).dtTransOffset = 1;
	
	  ;% projetoRobotica_DW.VisualizationInitialize_PWORK
	  section.data(3).logicalSrcIdx = 11;
	  section.data(3).dtTransOffset = 2;
	
	  ;% projetoRobotica_DW.VisualizationSetVariables_PWORK
	  section.data(4).logicalSrcIdx = 12;
	  section.data(4).dtTransOffset = 4;
	
	  ;% projetoRobotica_DW.Error_PWORK.LoggedData
	  section.data(5).logicalSrcIdx = 13;
	  section.data(5).dtTransOffset = 5;
	
	  ;% projetoRobotica_DW.NewDataFlag_PWORK.LoggedData
	  section.data(6).logicalSrcIdx = 14;
	  section.data(6).dtTransOffset = 6;
	
	  ;% projetoRobotica_DW.ReceivedDataServer_PWORK.LoggedData
	  section.data(7).logicalSrcIdx = 15;
	  section.data(7).dtTransOffset = 7;
	
	  ;% projetoRobotica_DW.SentFlag_PWORK.LoggedData
	  section.data(8).logicalSrcIdx = 16;
	  section.data(8).dtTransOffset = 8;
	
	  ;% projetoRobotica_DW.State_PWORK.LoggedData
	  section.data(9).logicalSrcIdx = 17;
	  section.data(9).dtTransOffset = 9;
	
	  ;% projetoRobotica_DW.RunningTime_PWORK.LoggedData
	  section.data(10).logicalSrcIdx = 18;
	  section.data(10).dtTransOffset = 10;
	
	  ;% projetoRobotica_DW.SampleTime_PWORK.LoggedData
	  section.data(11).logicalSrcIdx = 19;
	  section.data(11).dtTransOffset = 11;
	
	  ;% projetoRobotica_DW.VisualizationSetVariables_PWO_d
	  section.data(12).logicalSrcIdx = 20;
	  section.data(12).dtTransOffset = 12;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(6) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% projetoRobotica_DW.MultiportSwitch_DIMS1
	  section.data(1).logicalSrcIdx = 21;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(7) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% projetoRobotica_DW.Integrator1_IWORK.IcNeedsLoading
	  section.data(1).logicalSrcIdx = 22;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(8) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% projetoRobotica_DW.LatchInput_SubsysRanBC
	  section.data(1).logicalSrcIdx = 23;
	  section.data(1).dtTransOffset = 0;
	
	  ;% projetoRobotica_DW.Subsystem_SubsysRanBC
	  section.data(2).logicalSrcIdx = 24;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(9) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 1735054020;
  targMap.checksum1 = 3684069023;
  targMap.checksum2 = 2710751782;
  targMap.checksum3 = 2681552377;


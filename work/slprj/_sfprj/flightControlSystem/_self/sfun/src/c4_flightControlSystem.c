/* Include files */

#include "flightControlSystem_sfun.h"
#include "c4_flightControlSystem.h"
#include <string.h>
#include "mwmathutil.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(S);
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

/* Forward Declarations */

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static emlrtMCInfo c4_emlrtMCI = { 13, /* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pName */
};

static emlrtMCInfo c4_b_emlrtMCI = { 13,/* lineNo */
  13,                                  /* colNo */
  "toLogicalCheck",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\toLogicalCheck.m"/* pName */
};

static emlrtMCInfo c4_c_emlrtMCI = { 87,/* lineNo */
  33,                                  /* colNo */
  "eml_int_forloop_overflow_check",    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pName */
};

static emlrtMCInfo c4_d_emlrtMCI = { 14,/* lineNo */
  37,                                  /* colNo */
  "validatefinite",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatefinite.m"/* pName */
};

static emlrtMCInfo c4_e_emlrtMCI = { 13,/* lineNo */
  37,                                  /* colNo */
  "validateinteger",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validateinteger.m"/* pName */
};

static emlrtMCInfo c4_f_emlrtMCI = { 14,/* lineNo */
  37,                                  /* colNo */
  "validatenonnan",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonnan.m"/* pName */
};

static emlrtMCInfo c4_g_emlrtMCI = { 454,/* lineNo */
  5,                                   /* colNo */
  "houghpeaks",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pName */
};

static emlrtMCInfo c4_h_emlrtMCI = { 14,/* lineNo */
  37,                                  /* colNo */
  "validatepositive",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatepositive.m"/* pName */
};

static emlrtMCInfo c4_i_emlrtMCI = { 14,/* lineNo */
  37,                                  /* colNo */
  "validateodd",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validateodd.m"/* pName */
};

static emlrtMCInfo c4_j_emlrtMCI = { 474,/* lineNo */
  1,                                   /* colNo */
  "houghpeaks",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pName */
};

static emlrtMCInfo c4_k_emlrtMCI = { 21,/* lineNo */
  15,                                  /* colNo */
  "ind2sub",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\ind2sub.m"/* pName */
};

static emlrtMCInfo c4_l_emlrtMCI = { 48,/* lineNo */
  15,                                  /* colNo */
  "mean",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"/* pName */
};

static emlrtRSInfo c4_emlrtRSI = { 2,  /* lineNo */
  "Image Processing System/find angle",/* fcnName */
  "#flightControlSystem:2711"          /* pathName */
};

static emlrtRSInfo c4_b_emlrtRSI = { 3,/* lineNo */
  "Image Processing System/find angle",/* fcnName */
  "#flightControlSystem:2711"          /* pathName */
};

static emlrtRSInfo c4_c_emlrtRSI = { 4,/* lineNo */
  "Image Processing System/find angle",/* fcnName */
  "#flightControlSystem:2711"          /* pathName */
};

static emlrtRSInfo c4_d_emlrtRSI = { 5,/* lineNo */
  "Image Processing System/find angle",/* fcnName */
  "#flightControlSystem:2711"          /* pathName */
};

static emlrtRSInfo c4_e_emlrtRSI = { 117,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c4_f_emlrtRSI = { 133,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c4_g_emlrtRSI = { 139,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c4_h_emlrtRSI = { 743,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c4_i_emlrtRSI = { 744,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c4_j_emlrtRSI = { 749,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c4_k_emlrtRSI = { 750,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c4_l_emlrtRSI = { 115,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c4_m_emlrtRSI = { 127,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c4_n_emlrtRSI = { 814,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c4_o_emlrtRSI = { 888,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c4_p_emlrtRSI = { 962,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c4_q_emlrtRSI = { 990,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c4_r_emlrtRSI = { 1002,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c4_s_emlrtRSI = { 759,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c4_t_emlrtRSI = { 131,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c4_u_emlrtRSI = { 166,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c4_v_emlrtRSI = { 452,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c4_w_emlrtRSI = { 14,/* lineNo */
  "warning",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\warning.m"/* pathName */
};

static emlrtRSInfo c4_x_emlrtRSI = { 799,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c4_y_emlrtRSI = { 805,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c4_ab_emlrtRSI = { 909,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c4_bb_emlrtRSI = { 40,/* lineNo */
  "imreconstruct",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imreconstruct.m"/* pathName */
};

static emlrtRSInfo c4_cb_emlrtRSI = { 78,/* lineNo */
  "imreconstruct",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imreconstruct.m"/* pathName */
};

static emlrtRSInfo c4_db_emlrtRSI = { 27,/* lineNo */
  "getBinaryConnectivityMatrix",       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+internal\\getBinaryConnectivityMatrix.m"/* pathName */
};

static emlrtRSInfo c4_eb_emlrtRSI = { 60,/* lineNo */
  "hough",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\hough.m"/* pathName */
};

static emlrtRSInfo c4_fb_emlrtRSI = { 290,/* lineNo */
  "hough",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\hough.m"/* pathName */
};

static emlrtRSInfo c4_gb_emlrtRSI = { 111,/* lineNo */
  "houghpeaks",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pathName */
};

static emlrtRSInfo c4_hb_emlrtRSI = { 61,/* lineNo */
  "houghpeaks",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pathName */
};

static emlrtRSInfo c4_ib_emlrtRSI = { 274,/* lineNo */
  "houghpeaks",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pathName */
};

static emlrtRSInfo c4_jb_emlrtRSI = { 317,/* lineNo */
  "houghpeaks",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pathName */
};

static emlrtRSInfo c4_kb_emlrtRSI = { 321,/* lineNo */
  "houghpeaks",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pathName */
};

static emlrtRSInfo c4_lb_emlrtRSI = { 324,/* lineNo */
  "houghpeaks",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pathName */
};

static emlrtRSInfo c4_mb_emlrtRSI = { 93,/* lineNo */
  "validateattributes",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"/* pathName */
};

static emlrtRSInfo c4_nb_emlrtRSI = { 427,/* lineNo */
  "houghpeaks",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pathName */
};

static emlrtRSInfo c4_ob_emlrtRSI = { 439,/* lineNo */
  "houghpeaks",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pathName */
};

static emlrtRSInfo c4_pb_emlrtRSI = { 474,/* lineNo */
  "houghpeaks",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pathName */
};

static emlrtRSInfo c4_qb_emlrtRSI = { 463,/* lineNo */
  "houghpeaks",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pathName */
};

static emlrtRSInfo c4_rb_emlrtRSI = { 19,/* lineNo */
  "ind2sub",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pathName */
};

static emlrtRSInfo c4_sb_emlrtRSI = { 20,/* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pathName */
};

static emlrtRSInfo c4_tb_emlrtRSI = { 183,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRTEInfo c4_emlrtRTEI = { 5,/* lineNo */
  17,                                  /* colNo */
  "Image Processing System/find angle",/* fName */
  "#flightControlSystem:2711"          /* pName */
};

static emlrtRTEInfo c4_b_emlrtRTEI = { 99,/* lineNo */
  40,                                  /* colNo */
  "blockedSummation",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\blockedSummation.m"/* pName */
};

static emlrtRTEInfo c4_c_emlrtRTEI = { 774,/* lineNo */
  9,                                   /* colNo */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\edge.m"/* pName */
};

static emlrtRTEInfo c4_d_emlrtRTEI = { 775,/* lineNo */
  37,                                  /* colNo */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\edge.m"/* pName */
};

static emlrtRTEInfo c4_e_emlrtRTEI = { 76,/* lineNo */
  9,                                   /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

static emlrtRTEInfo c4_f_emlrtRTEI = { 775,/* lineNo */
  9,                                   /* colNo */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\edge.m"/* pName */
};

static emlrtRTEInfo c4_g_emlrtRTEI = { 771,/* lineNo */
  9,                                   /* colNo */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\edge.m"/* pName */
};

static emlrtRTEInfo c4_h_emlrtRTEI = { 772,/* lineNo */
  9,                                   /* colNo */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\edge.m"/* pName */
};

static emlrtRTEInfo c4_i_emlrtRTEI = { 191,/* lineNo */
  5,                                   /* colNo */
  "houghpeaks",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pName */
};

static emlrtRTEInfo c4_j_emlrtRTEI = { 187,/* lineNo */
  5,                                   /* colNo */
  "houghpeaks",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pName */
};

static emlrtBCInfo c4_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  5,                                   /* lineNo */
  23,                                  /* colNo */
  "P",                                 /* aName */
  "Image Processing System/find angle",/* fName */
  "#flightControlSystem:2711",         /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_b_emlrtBCI = { 1,/* iFirst */
  180,                                 /* iLast */
  5,                                   /* lineNo */
  19,                                  /* colNo */
  "T",                                 /* aName */
  "Image Processing System/find angle",/* fName */
  "#flightControlSystem:2711",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_emlrtDCI = { 5,  /* lineNo */
  19,                                  /* colNo */
  "Image Processing System/find angle",/* fName */
  "#flightControlSystem:2711",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_c_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  804,                                 /* lineNo */
  31,                                  /* colNo */
  "",                                  /* aName */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\edge.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_d_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  799,                                 /* lineNo */
  70,                                  /* colNo */
  "",                                  /* aName */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\edge.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_e_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  143,                                 /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\edge.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_f_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  142,                                 /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\edge.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_g_emlrtBCI = { 1,/* iFirst */
  80,                                  /* iLast */
  156,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_h_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  156,                                 /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_i_emlrtBCI = { 1,/* iFirst */
  357,                                 /* iLast */
  301,                                 /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "hough",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\hough.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c4_j_emlrtBCI = { 1,/* iFirst */
  80,                                  /* iLast */
  348,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "hough",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\hough.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c4_k_emlrtBCI = { 1,/* iFirst */
  2,                                   /* iLast */
  122,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "houghpeaks",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\houghpeaks.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c4_l_emlrtBCI = { 1,/* iFirst */
  357,                                 /* iLast */
  119,                                 /* lineNo */
  13,                                  /* colNo */
  "",                                  /* aName */
  "houghpeaks",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\houghpeaks.m",/* pName */
  0                                    /* checkKind */
};

static int32_T c4_iv[320] = { 1, 1, 1, 1, 1, 1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
  11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30,
  31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50,
  51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70,
  71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 80, 80, 80, 80, 80, 80, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14,
  15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34,
  35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54,
  55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74,
  75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94,
  95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111,
  112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127,
  128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143,
  144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159,
  160 };

static real_T c4_dv[13] = { 3.4813359214923059E-5, 0.00054457256285105158,
  0.0051667606200595222, 0.029732654490475543, 0.10377716120747747,
  0.21969625200024598, 0.28209557151935094, 0.21969625200024598,
  0.10377716120747747, 0.029732654490475543, 0.0051667606200595222,
  0.00054457256285105158, 3.4813359214923059E-5 };

static int32_T c4_iv1[344] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15,
  16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35,
  36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55,
  56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75,
  76, 77, 78, 79, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1,
  1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22,
  23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42,
  43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62,
  63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82,
  83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101,
  102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117,
  118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133,
  134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149,
  150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 160, 160, 160, 160, 160,
  160 };

static real_T c4_dv1[13] = { 0.0020299751839417137, 0.0102182810143517,
  0.058116735860084034, 0.19634433732941292, 0.37823877042972087,
  0.35505190018248872, 0.0, -0.35505190018248872, -0.37823877042972087,
  -0.19634433732941292, -0.058116735860084034, -0.0102182810143517,
  -0.0020299751839417137 };

static real_T c4_dv2[12] = { 0.0020299751839417137, 0.0102182810143517,
  0.058116735860084034, 0.19634433732941292, 0.37823877042972087,
  0.35505190018248872, -0.35505190018248872, -0.37823877042972087,
  -0.19634433732941292, -0.058116735860084034, -0.0102182810143517,
  -0.0020299751839417137 };

static boolean_T c4_bv[13] = { true, true, true, true, true, true, false, true,
  true, true, true, true, true };

static char_T c4_cv[32] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'h', 'o', 'u',
  'g', 'h', 'p', 'e', 'a', 'k', 's', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
  'F', 'i', 'n', 'i', 't', 'e' };

static char_T c4_cv1[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
  'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't', 'r',
  'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'F', 'i',
  'n', 'i', 't', 'e' };

static char_T c4_cv2[33] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'h', 'o', 'u',
  'g', 'h', 'p', 'e', 'a', 'k', 's', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
  'I', 'n', 't', 'e', 'g', 'e', 'r' };

static char_T c4_cv3[47] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
  'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't', 'r',
  'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'I', 'n',
  't', 'e', 'g', 'e', 'r' };

/* Function Declarations */
static void initialize_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance);
static void initialize_params_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance);
static void mdl_start_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance);
static void mdl_terminate_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance);
static void enable_c4_flightControlSystem(SFc4_flightControlSystemInstanceStruct
  *chartInstance);
static void disable_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance);
static void sf_gateway_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance);
static void ext_mode_exec_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance);
static void c4_update_jit_animation_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance);
static void c4_do_animation_call_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance);
static void set_sim_state_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance, const mxArray *c4_st);
static void c4_edge(SFc4_flightControlSystemInstanceStruct *chartInstance, const
                    emlrtStack *c4_sp, real_T c4_b_varargin_1[12800], boolean_T
                    c4_varargout_1[12800]);
static void c4_imfilter(SFc4_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c4_sp, real_T c4_b_varargin_1[12800], real_T c4_b[12800]);
static void c4_b_imfilter(SFc4_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c4_sp, real_T c4_b_varargin_1[12800], real_T c4_b[12800]);
static void c4_warning(SFc4_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c4_sp);
static void c4_hough(SFc4_flightControlSystemInstanceStruct *chartInstance,
                     const emlrtStack *c4_sp, boolean_T c4_b_varargin_1[12800],
                     real_T c4_h[64260]);
static void c4_houghpeaks(SFc4_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c4_sp, real_T c4_b_varargin_1[64260], real_T c4_peaks_data[],
  int32_T c4_peaks_size[2]);
static void c4_validateattributes(SFc4_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, real_T c4_a[2]);
static void c4_diff(SFc4_flightControlSystemInstanceStruct *chartInstance,
                    real_T c4_x[180], real_T c4_y[179]);
static void c4_b_diff(SFc4_flightControlSystemInstanceStruct *chartInstance,
                      real_T c4_x[179], real_T c4_y[178]);
static real_T c4_sumColumnB(SFc4_flightControlSystemInstanceStruct
  *chartInstance, real_T c4_x[178]);
static real_T c4_b_sumColumnB(SFc4_flightControlSystemInstanceStruct
  *chartInstance, real_T c4_x_data[], int32_T c4_vlen);
static real_T c4_emlrt_marshallIn(SFc4_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c4_nullptr, const char_T *c4_identifier);
static real_T c4_b_emlrt_marshallIn(SFc4_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId);
static const mxArray *c4_feval(SFc4_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, const mxArray *c4_input0, const
  mxArray *c4_input1);
static void c4_b_feval(SFc4_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c4_sp, const mxArray *c4_input0, const mxArray *c4_input1);
static void init_dsm_address_info(SFc4_flightControlSystemInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc4_flightControlSystemInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance)
{
  emlrtStack c4_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c4_st.tls = chartInstance->c4_fEmlrtCtx;
  emlrtLicenseCheckR2022a(&c4_st, "EMLRT:runTime:MexFunctionNeedsLicense",
    "image_toolbox", 2);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c4_doneDoubleBufferReInit = false;
  chartInstance->c4_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void initialize_params_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_start_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance)
{
  static const uint32_T c4_decisionTxtEndIdx = 0U;
  static const uint32_T c4_decisionTxtStartIdx = 0U;
  sfSetAnimationVectors(chartInstance->S, &chartInstance->c4_JITStateAnimation[0],
                        &chartInstance->c4_JITTransitionAnimation[0]);
  covrtCreateStateflowInstanceData(chartInstance->c4_covrtInstance, 1U, 0U, 1U,
    33U);
  covrtChartInitFcn(chartInstance->c4_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c4_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c4_decisionTxtStartIdx, &c4_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c4_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c4_covrtInstance, "", 4U, 0U, 1U, 0U, 0U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c4_covrtInstance, 4U, 0U, 0U,
                     "c4_flightControlSystem", 0, -1, 214);
}

static void mdl_cleanup_runtime_resources_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance)
{
  covrtDeleteStateflowInstanceData(chartInstance->c4_covrtInstance);
}

static void enable_c4_flightControlSystem(SFc4_flightControlSystemInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance)
{
  static char_T c4_b_cv[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c', 'o',
    'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  emlrtStack c4_b_st;
  emlrtStack c4_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *c4_b_y = NULL;
  const mxArray *c4_y = NULL;
  real_T c4_P_data[4];
  real_T c4_b_x_data[2];
  real_T c4_x_data[2];
  real_T c4_accumulatedData;
  real_T c4_accumulatedWeights;
  real_T c4_b_DegAngle;
  real_T c4_d;
  int32_T c4_P_size[2];
  int32_T c4_x_size[2];
  int32_T c4_b_loop_ub;
  int32_T c4_b_vlen;
  int32_T c4_c_i2;
  int32_T c4_c_vlen;
  int32_T c4_d_vlen;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_loop_ub;
  int32_T c4_vlen;
  boolean_T c4_edgedBW[12800];
  boolean_T c4_b;
  boolean_T c4_b1;
  boolean_T c4_b2;
  c4_st.tls = chartInstance->c4_fEmlrtCtx;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  if (covrtIsSigCovEnabledFcn(chartInstance->c4_covrtInstance, 0U) != 0U) {
    for (c4_i = 0; c4_i < 12800; c4_i++) {
      covrtSigUpdateFcnAssumingCovEnabled(chartInstance->c4_covrtInstance, 0U, (*
        chartInstance->c4_BWimage)[c4_i]);
    }
  }

  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c4_JITTransitionAnimation[0] = 0U;
  chartInstance->c4_sfEvent = CALL_EVENT;
  covrtEmlFcnEval(chartInstance->c4_covrtInstance, 4U, 0, 0);
  c4_b_st.site = &c4_emlrtRSI;
  for (c4_i1 = 0; c4_i1 < 12800; c4_i1++) {
    chartInstance->c4_b_dv[c4_i1] = (*chartInstance->c4_BWimage)[c4_i1];
  }

  c4_edge(chartInstance, &c4_b_st, chartInstance->c4_b_dv, c4_edgedBW);
  c4_b_st.site = &c4_b_emlrtRSI;
  c4_hough(chartInstance, &c4_b_st, c4_edgedBW, chartInstance->c4_H);
  c4_b_st.site = &c4_c_emlrtRSI;
  c4_houghpeaks(chartInstance, &c4_b_st, chartInstance->c4_H, c4_P_data,
                c4_P_size);
  c4_b_st.site = &c4_d_emlrtRSI;
  c4_c_i2 = 2;
  if ((c4_c_i2 < 1) || (c4_c_i2 > c4_P_size[1])) {
    emlrtDynamicBoundsCheckR2012b(c4_c_i2, 1, c4_P_size[1], &c4_emlrtBCI,
      &c4_b_st);
  }

  c4_i3 = c4_c_i2 - 1;
  c4_x_size[1] = c4_P_size[0];
  c4_loop_ub = c4_P_size[0] - 1;
  for (c4_i4 = 0; c4_i4 <= c4_loop_ub; c4_i4++) {
    c4_d = c4_P_data[c4_i4 + c4_P_size[0] * c4_i3];
    if (c4_d != (real_T)(int32_T)muDoubleScalarFloor(c4_d)) {
      emlrtIntegerCheckR2012b(c4_d, &c4_emlrtDCI, &c4_b_st);
    }

    c4_i5 = (int32_T)c4_d;
    if ((c4_i5 < 1) || (c4_i5 > 180)) {
      emlrtDynamicBoundsCheckR2012b(c4_i5, 1, 180, &c4_b_emlrtBCI, &c4_b_st);
    }

    c4_x_data[c4_i4] = -90.0 + (real_T)(c4_i5 - 1);
  }

  c4_b = (c4_x_size[1] == 1);
  if (c4_b || (c4_x_size[1] != 1)) {
    c4_b1 = true;
  } else {
    c4_b1 = false;
  }

  if (!c4_b1) {
    c4_y = NULL;
    sf_mex_assign(&c4_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1, 0U, 2, 1, 36),
                  false);
    c4_b_y = NULL;
    sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1, 0U, 2, 1, 36),
                  false);
    sf_mex_call(&c4_b_st, &c4_l_emlrtMCI, "error", 0U, 2U, 14, c4_y, 14,
                sf_mex_call(&c4_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_b_st, NULL, "message", 1U, 1U, 14, c4_b_y)));
  }

  c4_vlen = c4_x_size[1];
  c4_b_vlen = c4_vlen;
  c4_b2 = (c4_x_size[1] == 0);
  if (c4_b2 || (c4_b_vlen == 0)) {
    c4_accumulatedData = 0.0;
  } else {
    c4_b_loop_ub = c4_x_size[1] - 1;
    for (c4_i6 = 0; c4_i6 <= c4_b_loop_ub; c4_i6++) {
      c4_b_x_data[c4_i6] = c4_x_data[c4_i6];
    }

    c4_c_vlen = c4_b_vlen;
    c4_d_vlen = c4_c_vlen;
    c4_accumulatedData = c4_b_sumColumnB(chartInstance, c4_b_x_data, c4_d_vlen);
  }

  c4_accumulatedWeights = (real_T)c4_x_size[1];
  c4_b_DegAngle = c4_accumulatedData / c4_accumulatedWeights;
  *chartInstance->c4_DegAngle = c4_b_DegAngle;
  covrtSigUpdateFcn(chartInstance->c4_covrtInstance, 1U,
                    *chartInstance->c4_DegAngle);
}

static void ext_mode_exec_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c4_update_jit_animation_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c4_do_animation_call_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance)
{
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_st = NULL;
  const mxArray *c4_y = NULL;
  c4_st = NULL;
  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_createcellmatrix(1, 1), false);
  c4_b_y = NULL;
  sf_mex_assign(&c4_b_y, sf_mex_create("y", chartInstance->c4_DegAngle, 0, 0U, 0,
    0U, 0), false);
  sf_mex_setcell(c4_y, 0, c4_b_y);
  sf_mex_assign(&c4_st, c4_y, false);
  return c4_st;
}

static void set_sim_state_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance, const mxArray *c4_st)
{
  const mxArray *c4_u;
  chartInstance->c4_doneDoubleBufferReInit = true;
  c4_u = sf_mex_dup(c4_st);
  *chartInstance->c4_DegAngle = c4_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c4_u, 0)), "DegAngle");
  sf_mex_destroy(&c4_u);
  sf_mex_destroy(&c4_st);
}

static void c4_edge(SFc4_flightControlSystemInstanceStruct *chartInstance, const
                    emlrtStack *c4_sp, real_T c4_b_varargin_1[12800], boolean_T
                    c4_varargout_1[12800])
{
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_st;
  real_T c4_counts[64];
  real_T c4_connDimsT[2];
  real_T c4_outSizeT[2];
  real_T c4_padSizeT[2];
  real_T c4_startT[2];
  real_T c4_b_data[1];
  real_T c4_highThresh_data[1];
  real_T c4_lowThresh_data[1];
  real_T c4_a;
  real_T c4_b;
  real_T c4_b_a;
  real_T c4_b_b;
  real_T c4_b_idx;
  real_T c4_b_j;
  real_T c4_b_lowThresh;
  real_T c4_b_r;
  real_T c4_b_x;
  real_T c4_b_x1;
  real_T c4_b_x2;
  real_T c4_b_y;
  real_T c4_c_a;
  real_T c4_c_b;
  real_T c4_c_i;
  real_T c4_c_varargin_1;
  real_T c4_c_x;
  real_T c4_c_y;
  real_T c4_d_a;
  real_T c4_d_b;
  real_T c4_d_idx;
  real_T c4_d_j;
  real_T c4_d_x;
  real_T c4_d_y;
  real_T c4_e_a;
  real_T c4_e_x;
  real_T c4_e_y;
  real_T c4_f_a;
  real_T c4_f_x;
  real_T c4_f_y;
  real_T c4_g_a;
  real_T c4_g_b;
  real_T c4_g_i;
  real_T c4_g_x;
  real_T c4_g_y;
  real_T c4_h_x;
  real_T c4_h_y;
  real_T c4_highThresh;
  real_T c4_highThreshTemp;
  real_T c4_i_i;
  real_T c4_i_x;
  real_T c4_i_y;
  real_T c4_j_x;
  real_T c4_k_x;
  real_T c4_lowThresh;
  real_T c4_magmax;
  real_T c4_out;
  real_T c4_r;
  real_T c4_sum;
  real_T c4_varargin_2;
  real_T c4_x;
  real_T c4_x1;
  real_T c4_x2;
  real_T c4_y;
  int32_T c4_highThresh_size[1];
  int32_T c4_lowThresh_size[1];
  int32_T c4_b_c;
  int32_T c4_b_i;
  int32_T c4_c;
  int32_T c4_c_i2;
  int32_T c4_c_j;
  int32_T c4_d_i;
  int32_T c4_e_i;
  int32_T c4_f_i;
  int32_T c4_h_i;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i13;
  int32_T c4_i14;
  int32_T c4_i15;
  int32_T c4_i16;
  int32_T c4_i17;
  int32_T c4_i18;
  int32_T c4_i19;
  int32_T c4_i20;
  int32_T c4_i21;
  int32_T c4_i22;
  int32_T c4_i23;
  int32_T c4_i24;
  int32_T c4_i25;
  int32_T c4_i26;
  int32_T c4_i27;
  int32_T c4_i28;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_i8;
  int32_T c4_i9;
  int32_T c4_idx;
  int32_T c4_j;
  int32_T c4_loop_ub;
  int8_T c4_c_idx;
  boolean_T c4_E[12800];
  boolean_T c4_conn[13];
  boolean_T c4_b_modeFlag;
  boolean_T c4_b_tooBig;
  boolean_T c4_c_modeFlag;
  boolean_T c4_d_modeFlag;
  boolean_T c4_e_b;
  boolean_T c4_e_modeFlag;
  boolean_T c4_f_b;
  boolean_T c4_f_modeFlag;
  boolean_T c4_modeFlag;
  boolean_T c4_nanFlag;
  boolean_T c4_tooBig;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_st.site = &c4_e_emlrtRSI;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  c4_b_st.site = &c4_h_emlrtRSI;
  c4_c_st.site = &c4_l_emlrtRSI;
  c4_d_st.site = &c4_n_emlrtRSI;
  for (c4_j = 0; c4_j < 160; c4_j++) {
    c4_b_j = (real_T)c4_j + 1.0;
    for (c4_i = 0; c4_i < 92; c4_i++) {
      c4_c_i = (real_T)c4_i + 1.0;
      if ((c4_iv[(int32_T)c4_c_i - 1] < 1) || (c4_iv[(int32_T)c4_c_i - 1] > 80))
      {
        emlrtDynamicBoundsCheckR2012b(c4_iv[(int32_T)c4_c_i - 1], 1, 80,
          &c4_g_emlrtBCI, &c4_d_st);
      }

      c4_d_i = c4_iv[(int32_T)c4_b_j + 159];
      if ((c4_d_i < 1) || (c4_d_i > 160)) {
        emlrtDynamicBoundsCheckR2012b(c4_d_i, 1, 160, &c4_h_emlrtBCI, &c4_d_st);
      }

      chartInstance->c4_aTmp[((int32_T)c4_c_i + 92 * ((int32_T)c4_b_j - 1)) - 1]
        = c4_b_varargin_1[(c4_iv[(int32_T)c4_c_i - 1] + 80 * (c4_d_i - 1)) - 1];
    }
  }

  c4_c_st.site = &c4_m_emlrtRSI;
  c4_d_st.site = &c4_o_emlrtRSI;
  c4_tooBig = true;
  for (c4_b_i = 0; c4_b_i < 2; c4_b_i++) {
    c4_tooBig = false;
  }

  if (!c4_tooBig) {
    c4_modeFlag = true;
  } else {
    c4_modeFlag = false;
  }

  if (c4_modeFlag) {
    c4_b_modeFlag = true;
  } else {
    c4_b_modeFlag = false;
  }

  c4_c_modeFlag = c4_b_modeFlag;
  if (c4_c_modeFlag) {
    for (c4_c_i2 = 0; c4_c_i2 < 2; c4_c_i2++) {
      c4_padSizeT[c4_c_i2] = 92.0 + 68.0 * (real_T)c4_c_i2;
    }

    for (c4_i4 = 0; c4_i4 < 2; c4_i4++) {
      c4_outSizeT[c4_i4] = 80.0 + 80.0 * (real_T)c4_i4;
    }

    for (c4_i6 = 0; c4_i6 < 2; c4_i6++) {
      c4_connDimsT[c4_i6] = 13.0 + -12.0 * (real_T)c4_i6;
    }

    ippfilter_real64(&chartInstance->c4_aTmp[0], &chartInstance->c4_bTmp[0],
                     &c4_outSizeT[0], 2.0, &c4_padSizeT[0], &c4_dv[0],
                     &c4_connDimsT[0], true);
  } else {
    for (c4_i1 = 0; c4_i1 < 13; c4_i1++) {
      c4_conn[c4_i1] = true;
    }

    for (c4_i3 = 0; c4_i3 < 2; c4_i3++) {
      c4_padSizeT[c4_i3] = 92.0 + 68.0 * (real_T)c4_i3;
    }

    for (c4_i5 = 0; c4_i5 < 2; c4_i5++) {
      c4_outSizeT[c4_i5] = 80.0 + 80.0 * (real_T)c4_i5;
    }

    for (c4_i7 = 0; c4_i7 < 2; c4_i7++) {
      c4_connDimsT[c4_i7] = 13.0 + -12.0 * (real_T)c4_i7;
    }

    for (c4_i8 = 0; c4_i8 < 2; c4_i8++) {
      c4_startT[c4_i8] = 6.0 + -6.0 * (real_T)c4_i8;
    }

    imfilter_real64(&chartInstance->c4_aTmp[0], &chartInstance->c4_bTmp[0], 2.0,
                    &c4_outSizeT[0], 2.0, &c4_padSizeT[0], &c4_dv[0], 13.0,
                    &c4_conn[0], 2.0, &c4_connDimsT[0], &c4_startT[0], 2.0, true,
                    true);
  }

  c4_b_st.site = &c4_i_emlrtRSI;
  c4_c_st.site = &c4_l_emlrtRSI;
  c4_d_st.site = &c4_n_emlrtRSI;
  for (c4_c_j = 0; c4_c_j < 172; c4_c_j++) {
    c4_d_j = (real_T)c4_c_j + 1.0;
    for (c4_e_i = 0; c4_e_i < 80; c4_e_i++) {
      c4_g_i = (real_T)c4_e_i + 1.0;
      if ((c4_iv1[(int32_T)c4_g_i - 1] < 1) || (c4_iv1[(int32_T)c4_g_i - 1] > 80))
      {
        emlrtDynamicBoundsCheckR2012b(c4_iv1[(int32_T)c4_g_i - 1], 1, 80,
          &c4_g_emlrtBCI, &c4_d_st);
      }

      c4_i9 = c4_iv1[(int32_T)c4_d_j + 171];
      if ((c4_i9 < 1) || (c4_i9 > 160)) {
        emlrtDynamicBoundsCheckR2012b(c4_i9, 1, 160, &c4_h_emlrtBCI, &c4_d_st);
      }

      chartInstance->c4_c_aTmp[((int32_T)c4_g_i + 80 * ((int32_T)c4_d_j - 1)) -
        1] = chartInstance->c4_bTmp[(c4_iv1[(int32_T)c4_g_i - 1] + 80 * (c4_i9 -
        1)) - 1];
    }
  }

  c4_c_st.site = &c4_m_emlrtRSI;
  c4_d_st.site = &c4_o_emlrtRSI;
  c4_b_tooBig = true;
  for (c4_f_i = 0; c4_f_i < 2; c4_f_i++) {
    c4_b_tooBig = false;
  }

  if (!c4_b_tooBig) {
    c4_d_modeFlag = true;
  } else {
    c4_d_modeFlag = false;
  }

  if (c4_d_modeFlag) {
    c4_e_modeFlag = true;
  } else {
    c4_e_modeFlag = false;
  }

  c4_f_modeFlag = c4_e_modeFlag;
  if (c4_f_modeFlag) {
    for (c4_i11 = 0; c4_i11 < 2; c4_i11++) {
      c4_padSizeT[c4_i11] = 80.0 + 92.0 * (real_T)c4_i11;
    }

    for (c4_i13 = 0; c4_i13 < 2; c4_i13++) {
      c4_outSizeT[c4_i13] = 80.0 + 80.0 * (real_T)c4_i13;
    }

    for (c4_i15 = 0; c4_i15 < 2; c4_i15++) {
      c4_connDimsT[c4_i15] = 1.0 + 12.0 * (real_T)c4_i15;
    }

    ippfilter_real64(&chartInstance->c4_c_aTmp[0], &chartInstance->c4_bTmp[0],
                     &c4_outSizeT[0], 2.0, &c4_padSizeT[0], &c4_dv1[0],
                     &c4_connDimsT[0], true);
  } else {
    for (c4_i10 = 0; c4_i10 < 2; c4_i10++) {
      c4_padSizeT[c4_i10] = 80.0 + 92.0 * (real_T)c4_i10;
    }

    for (c4_i12 = 0; c4_i12 < 2; c4_i12++) {
      c4_outSizeT[c4_i12] = 80.0 + 80.0 * (real_T)c4_i12;
    }

    for (c4_i14 = 0; c4_i14 < 2; c4_i14++) {
      c4_connDimsT[c4_i14] = 1.0 + 12.0 * (real_T)c4_i14;
    }

    for (c4_i16 = 0; c4_i16 < 2; c4_i16++) {
      c4_startT[c4_i16] = 6.0 * (real_T)c4_i16;
    }

    imfilter_real64(&chartInstance->c4_c_aTmp[0], &chartInstance->c4_bTmp[0],
                    2.0, &c4_outSizeT[0], 2.0, &c4_padSizeT[0], &c4_dv2[0], 12.0,
                    &c4_bv[0], 2.0, &c4_connDimsT[0], &c4_startT[0], 2.0, true,
                    true);
  }

  c4_b_st.site = &c4_j_emlrtRSI;
  c4_imfilter(chartInstance, &c4_b_st, c4_b_varargin_1, chartInstance->c4_i2);
  for (c4_i17 = 0; c4_i17 < 12800; c4_i17++) {
    chartInstance->c4_b_i2[c4_i17] = chartInstance->c4_i2[c4_i17];
  }

  c4_b_st.site = &c4_k_emlrtRSI;
  c4_b_imfilter(chartInstance, &c4_b_st, chartInstance->c4_b_i2,
                chartInstance->c4_i2);
  c4_x = chartInstance->c4_bTmp[0];
  c4_y = chartInstance->c4_i2[0];
  c4_a = c4_x;
  c4_b = c4_y;
  c4_b_x = c4_a;
  c4_b_y = c4_b;
  c4_x1 = c4_b_x;
  c4_x2 = c4_b_y;
  c4_b_a = c4_x1;
  c4_b_b = c4_x2;
  c4_r = muDoubleScalarHypot(c4_b_a, c4_b_b);
  chartInstance->c4_magGrad[0] = c4_r;
  c4_magmax = chartInstance->c4_magGrad[0];
  for (c4_idx = 0; c4_idx < 12799; c4_idx++) {
    c4_b_idx = (real_T)c4_idx + 2.0;
    c4_c_x = chartInstance->c4_bTmp[(int32_T)c4_b_idx - 1];
    c4_c_y = chartInstance->c4_i2[(int32_T)c4_b_idx - 1];
    c4_c_a = c4_c_x;
    c4_c_b = c4_c_y;
    c4_d_x = c4_c_a;
    c4_d_y = c4_c_b;
    c4_b_x1 = c4_d_x;
    c4_b_x2 = c4_d_y;
    c4_d_a = c4_b_x1;
    c4_d_b = c4_b_x2;
    c4_b_r = muDoubleScalarHypot(c4_d_a, c4_d_b);
    chartInstance->c4_magGrad[(int32_T)c4_b_idx - 1] = c4_b_r;
    c4_c_varargin_1 = chartInstance->c4_magGrad[(int32_T)c4_b_idx - 1];
    c4_varargin_2 = c4_magmax;
    c4_f_x = c4_c_varargin_1;
    c4_e_y = c4_varargin_2;
    c4_g_x = c4_f_x;
    c4_f_y = c4_e_y;
    c4_i_x = c4_g_x;
    c4_g_y = c4_f_y;
    c4_e_a = c4_i_x;
    c4_g_b = c4_g_y;
    c4_j_x = c4_e_a;
    c4_h_y = c4_g_b;
    c4_k_x = c4_j_x;
    c4_i_y = c4_h_y;
    c4_magmax = muDoubleScalarMax(c4_k_x, c4_i_y);
  }

  if (c4_magmax > 0.0) {
    for (c4_i18 = 0; c4_i18 < 12800; c4_i18++) {
      chartInstance->c4_magGrad[c4_i18] /= c4_magmax;
    }
  }

  c4_st.site = &c4_f_emlrtRSI;
  c4_b_st.site = &c4_s_emlrtRSI;
  c4_c_st.site = &c4_t_emlrtRSI;
  c4_d_st.site = &c4_u_emlrtRSI;
  c4_out = 1.0;
  getnumcores(&c4_out);
  memset(&c4_counts[0], 0, sizeof(real_T) << 6);
  c4_nanFlag = false;
  for (c4_h_i = 0; c4_h_i < 12800; c4_h_i++) {
    c4_i_i = (real_T)c4_h_i + 1.0;
    c4_e_x = chartInstance->c4_magGrad[(int32_T)c4_i_i - 1];
    c4_e_b = muDoubleScalarIsNaN(c4_e_x);
    if (c4_e_b) {
      c4_nanFlag = true;
      c4_d_idx = 0.0;
    } else {
      c4_d_idx = chartInstance->c4_magGrad[(int32_T)c4_i_i - 1] * 63.0 + 0.5;
    }

    if (c4_d_idx > 63.0) {
      c4_counts[63]++;
    } else {
      c4_h_x = chartInstance->c4_magGrad[(int32_T)c4_i_i - 1];
      c4_f_b = muDoubleScalarIsInf(c4_h_x);
      if (c4_f_b) {
        c4_counts[63]++;
      } else {
        c4_f_a = c4_d_idx;
        c4_c = (int32_T)c4_f_a;
        c4_g_a = c4_d_idx;
        c4_b_c = (int32_T)c4_g_a;
        c4_counts[c4_c] = c4_counts[c4_b_c] + 1.0;
      }
    }
  }

  if (c4_nanFlag) {
    c4_d_st.site = &c4_v_emlrtRSI;
    c4_warning(chartInstance, &c4_d_st);
  }

  c4_sum = 0.0;
  c4_c_idx = 1;
  while ((!(c4_sum > 8960.0)) && (c4_c_idx <= 64)) {
    c4_sum += c4_counts[c4_c_idx - 1];
    c4_i20 = c4_c_idx + 1;
    if (c4_i20 > 127) {
      c4_i20 = 127;
    } else if (c4_i20 < -128) {
      c4_i20 = -128;
    }

    c4_c_idx = (int8_T)c4_i20;
  }

  c4_i19 = c4_c_idx - 1;
  if (c4_i19 > 127) {
    c4_i19 = 127;
  } else if (c4_i19 < -128) {
    c4_i19 = -128;
  }

  c4_highThreshTemp = (real_T)(int8_T)c4_i19 / 64.0;
  if ((c4_c_idx > 64) && (!(c4_sum > 8960.0))) {
    c4_highThresh_size[0] = 0;
    c4_lowThresh_size[0] = 0;
  } else {
    c4_highThresh_size[0] = 1;
    c4_highThresh_data[0] = c4_highThreshTemp;
    c4_loop_ub = c4_highThresh_size[0] - 1;
    for (c4_i21 = 0; c4_i21 <= c4_loop_ub; c4_i21++) {
      c4_b_data[c4_i21] = c4_highThresh_data[c4_i21];
    }

    c4_b_data[0] *= 0.4;
    c4_lowThresh_size[0] = 1;
    c4_lowThresh_data[0] = c4_b_data[0];
  }

  c4_st.site = &c4_g_emlrtRSI;
  c4_i22 = 1;
  if ((c4_i22 < 1) || (c4_i22 > c4_lowThresh_size[0])) {
    emlrtDynamicBoundsCheckR2012b(c4_i22, 1, c4_lowThresh_size[0],
      &c4_d_emlrtBCI, &c4_st);
  }

  c4_b_st.site = &c4_x_emlrtRSI;
  c4_lowThresh = c4_lowThresh_data[0];
  c4_c_st.site = &c4_ab_emlrtRSI;
  c4_b_lowThresh = c4_lowThresh;
  memset(&c4_E[0], 0, 12800U * sizeof(boolean_T));
  for (c4_i23 = 0; c4_i23 < 2; c4_i23++) {
    c4_connDimsT[c4_i23] = 80.0 + 80.0 * (real_T)c4_i23;
  }

  cannythresholding_real64_tbb(&chartInstance->c4_bTmp[0], &chartInstance->
    c4_i2[0], &chartInstance->c4_magGrad[0], &c4_connDimsT[0], c4_b_lowThresh,
    &c4_E[0]);
  c4_i24 = 1;
  if ((c4_i24 < 1) || (c4_i24 > c4_highThresh_size[0])) {
    emlrtDynamicBoundsCheckR2012b(c4_i24, 1, c4_highThresh_size[0],
      &c4_c_emlrtBCI, &c4_st);
  }

  c4_highThresh = c4_highThresh_data[0];
  for (c4_i25 = 0; c4_i25 < 12800; c4_i25++) {
    c4_varargout_1[c4_i25] = (chartInstance->c4_magGrad[c4_i25] > c4_highThresh);
  }

  c4_b_st.site = &c4_y_emlrtRSI;
  c4_c_st.site = &c4_bb_emlrtRSI;
  c4_c_st.site = &c4_cb_emlrtRSI;
  for (c4_i26 = 0; c4_i26 < 2; c4_i26++) {
    c4_connDimsT[c4_i26] = 80.0 + 80.0 * (real_T)c4_i26;
  }

  ippreconstruct_uint8((uint8_T *)&c4_varargout_1[0], (uint8_T *)&c4_E[0],
                       &c4_connDimsT[0], 2.0);
  c4_i27 = 1;
  if ((c4_i27 < 1) || (c4_i27 > c4_lowThresh_size[0])) {
    emlrtDynamicBoundsCheckR2012b(c4_i27, 1, c4_lowThresh_size[0],
      &c4_f_emlrtBCI, (emlrtConstCTX)c4_sp);
  }

  c4_i28 = 1;
  if ((c4_i28 < 1) || (c4_i28 > c4_highThresh_size[0])) {
    emlrtDynamicBoundsCheckR2012b(c4_i28, 1, c4_highThresh_size[0],
      &c4_e_emlrtBCI, (emlrtConstCTX)c4_sp);
  }
}

static void c4_imfilter(SFc4_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c4_sp, real_T c4_b_varargin_1[12800], real_T c4_b[12800])
{
  emlrtStack c4_b_st;
  emlrtStack c4_st;
  real_T c4_d_aTmp[13760];
  real_T c4_connDimsT[2];
  real_T c4_outSizeT[2];
  real_T c4_padSizeT[2];
  real_T c4_startT[2];
  real_T c4_b_j;
  real_T c4_c_i;
  int32_T c4_b_i;
  int32_T c4_c_i2;
  int32_T c4_d_i;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_i8;
  int32_T c4_j;
  boolean_T c4_conn[13];
  boolean_T c4_b_modeFlag;
  boolean_T c4_c_modeFlag;
  boolean_T c4_modeFlag;
  boolean_T c4_tooBig;
  (void)chartInstance;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_st.site = &c4_l_emlrtRSI;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_b_st.site = &c4_n_emlrtRSI;
  for (c4_j = 0; c4_j < 172; c4_j++) {
    c4_b_j = (real_T)c4_j + 1.0;
    for (c4_i = 0; c4_i < 80; c4_i++) {
      c4_c_i = (real_T)c4_i + 1.0;
      if ((c4_iv1[(int32_T)c4_c_i - 1] < 1) || (c4_iv1[(int32_T)c4_c_i - 1] > 80))
      {
        emlrtDynamicBoundsCheckR2012b(c4_iv1[(int32_T)c4_c_i - 1], 1, 80,
          &c4_g_emlrtBCI, &c4_b_st);
      }

      c4_d_i = c4_iv1[(int32_T)c4_b_j + 171];
      if ((c4_d_i < 1) || (c4_d_i > 160)) {
        emlrtDynamicBoundsCheckR2012b(c4_d_i, 1, 160, &c4_h_emlrtBCI, &c4_b_st);
      }

      c4_d_aTmp[((int32_T)c4_c_i + 80 * ((int32_T)c4_b_j - 1)) - 1] =
        c4_b_varargin_1[(c4_iv1[(int32_T)c4_c_i - 1] + 80 * (c4_d_i - 1)) - 1];
    }
  }

  c4_st.site = &c4_m_emlrtRSI;
  c4_tooBig = true;
  for (c4_b_i = 0; c4_b_i < 2; c4_b_i++) {
    c4_tooBig = false;
  }

  if (!c4_tooBig) {
    c4_modeFlag = true;
  } else {
    c4_modeFlag = false;
  }

  if (c4_modeFlag) {
    c4_b_modeFlag = true;
  } else {
    c4_b_modeFlag = false;
  }

  c4_c_modeFlag = c4_b_modeFlag;
  if (c4_c_modeFlag) {
    for (c4_c_i2 = 0; c4_c_i2 < 2; c4_c_i2++) {
      c4_padSizeT[c4_c_i2] = 80.0 + 92.0 * (real_T)c4_c_i2;
    }

    for (c4_i4 = 0; c4_i4 < 2; c4_i4++) {
      c4_outSizeT[c4_i4] = 80.0 + 80.0 * (real_T)c4_i4;
    }

    for (c4_i6 = 0; c4_i6 < 2; c4_i6++) {
      c4_connDimsT[c4_i6] = 1.0 + 12.0 * (real_T)c4_i6;
    }

    ippfilter_real64(&c4_d_aTmp[0], &c4_b[0], &c4_outSizeT[0], 2.0,
                     &c4_padSizeT[0], &c4_dv[0], &c4_connDimsT[0], true);
  } else {
    for (c4_i1 = 0; c4_i1 < 13; c4_i1++) {
      c4_conn[c4_i1] = true;
    }

    for (c4_i3 = 0; c4_i3 < 2; c4_i3++) {
      c4_padSizeT[c4_i3] = 80.0 + 92.0 * (real_T)c4_i3;
    }

    for (c4_i5 = 0; c4_i5 < 2; c4_i5++) {
      c4_outSizeT[c4_i5] = 80.0 + 80.0 * (real_T)c4_i5;
    }

    for (c4_i7 = 0; c4_i7 < 2; c4_i7++) {
      c4_connDimsT[c4_i7] = 1.0 + 12.0 * (real_T)c4_i7;
    }

    for (c4_i8 = 0; c4_i8 < 2; c4_i8++) {
      c4_startT[c4_i8] = 6.0 * (real_T)c4_i8;
    }

    imfilter_real64(&c4_d_aTmp[0], &c4_b[0], 2.0, &c4_outSizeT[0], 2.0,
                    &c4_padSizeT[0], &c4_dv[0], 13.0, &c4_conn[0], 2.0,
                    &c4_connDimsT[0], &c4_startT[0], 2.0, true, true);
  }
}

static void c4_b_imfilter(SFc4_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c4_sp, real_T c4_b_varargin_1[12800], real_T c4_b[12800])
{
  emlrtStack c4_b_st;
  emlrtStack c4_st;
  real_T c4_connDimsT[2];
  real_T c4_outSizeT[2];
  real_T c4_padSizeT[2];
  real_T c4_startT[2];
  real_T c4_b_j;
  real_T c4_c_i;
  int32_T c4_b_i;
  int32_T c4_c_i2;
  int32_T c4_d_i;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_j;
  boolean_T c4_b_modeFlag;
  boolean_T c4_c_modeFlag;
  boolean_T c4_modeFlag;
  boolean_T c4_tooBig;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_st.site = &c4_l_emlrtRSI;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_b_st.site = &c4_n_emlrtRSI;
  for (c4_j = 0; c4_j < 160; c4_j++) {
    c4_b_j = (real_T)c4_j + 1.0;
    for (c4_i = 0; c4_i < 92; c4_i++) {
      c4_c_i = (real_T)c4_i + 1.0;
      if ((c4_iv[(int32_T)c4_c_i - 1] < 1) || (c4_iv[(int32_T)c4_c_i - 1] > 80))
      {
        emlrtDynamicBoundsCheckR2012b(c4_iv[(int32_T)c4_c_i - 1], 1, 80,
          &c4_g_emlrtBCI, &c4_b_st);
      }

      c4_d_i = c4_iv[(int32_T)c4_b_j + 159];
      if ((c4_d_i < 1) || (c4_d_i > 160)) {
        emlrtDynamicBoundsCheckR2012b(c4_d_i, 1, 160, &c4_h_emlrtBCI, &c4_b_st);
      }

      chartInstance->c4_b_aTmp[((int32_T)c4_c_i + 92 * ((int32_T)c4_b_j - 1)) -
        1] = c4_b_varargin_1[(c4_iv[(int32_T)c4_c_i - 1] + 80 * (c4_d_i - 1)) -
        1];
    }
  }

  c4_st.site = &c4_m_emlrtRSI;
  c4_tooBig = true;
  for (c4_b_i = 0; c4_b_i < 2; c4_b_i++) {
    c4_tooBig = false;
  }

  if (!c4_tooBig) {
    c4_modeFlag = true;
  } else {
    c4_modeFlag = false;
  }

  if (c4_modeFlag) {
    c4_b_modeFlag = true;
  } else {
    c4_b_modeFlag = false;
  }

  c4_c_modeFlag = c4_b_modeFlag;
  if (c4_c_modeFlag) {
    for (c4_c_i2 = 0; c4_c_i2 < 2; c4_c_i2++) {
      c4_padSizeT[c4_c_i2] = 92.0 + 68.0 * (real_T)c4_c_i2;
    }

    for (c4_i4 = 0; c4_i4 < 2; c4_i4++) {
      c4_outSizeT[c4_i4] = 80.0 + 80.0 * (real_T)c4_i4;
    }

    for (c4_i6 = 0; c4_i6 < 2; c4_i6++) {
      c4_connDimsT[c4_i6] = 13.0 + -12.0 * (real_T)c4_i6;
    }

    ippfilter_real64(&chartInstance->c4_b_aTmp[0], &c4_b[0], &c4_outSizeT[0],
                     2.0, &c4_padSizeT[0], &c4_dv1[0], &c4_connDimsT[0], true);
  } else {
    for (c4_i1 = 0; c4_i1 < 2; c4_i1++) {
      c4_padSizeT[c4_i1] = 92.0 + 68.0 * (real_T)c4_i1;
    }

    for (c4_i3 = 0; c4_i3 < 2; c4_i3++) {
      c4_outSizeT[c4_i3] = 80.0 + 80.0 * (real_T)c4_i3;
    }

    for (c4_i5 = 0; c4_i5 < 2; c4_i5++) {
      c4_connDimsT[c4_i5] = 13.0 + -12.0 * (real_T)c4_i5;
    }

    for (c4_i7 = 0; c4_i7 < 2; c4_i7++) {
      c4_startT[c4_i7] = 6.0 + -6.0 * (real_T)c4_i7;
    }

    imfilter_real64(&chartInstance->c4_b_aTmp[0], &c4_b[0], 2.0, &c4_outSizeT[0],
                    2.0, &c4_padSizeT[0], &c4_dv2[0], 12.0, &c4_bv[0], 2.0,
                    &c4_connDimsT[0], &c4_startT[0], 2.0, true, true);
  }
}

static void c4_warning(SFc4_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c4_sp)
{
  static char_T c4_msgID[27] = { 'i', 'm', 'a', 'g', 'e', 's', ':', 'i', 'm',
    'h', 'i', 's', 't', 'c', ':', 'i', 'n', 'p', 'u', 't', 'H', 'a', 's', 'N',
    'a', 'N', 's' };

  static char_T c4_b_cv[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T c4_b_cv1[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  emlrtStack c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_y = NULL;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1, 0U, 2, 1, 7),
                false);
  c4_b_y = NULL;
  sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1, 0U, 2, 1, 7),
                false);
  c4_c_y = NULL;
  sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_msgID, 10, 0U, 1, 0U, 2, 1, 27),
                false);
  c4_st.site = &c4_w_emlrtRSI;
  c4_b_feval(chartInstance, &c4_st, c4_y, c4_feval(chartInstance, &c4_st, c4_b_y,
              c4_c_y));
}

static void c4_hough(SFc4_flightControlSystemInstanceStruct *chartInstance,
                     const emlrtStack *c4_sp, boolean_T c4_b_varargin_1[12800],
                     real_T c4_h[64260])
{
  emlrtStack c4_b_st;
  emlrtStack c4_st;
  real_T c4_cost[180];
  real_T c4_sint[180];
  real_T c4_tempBin[80];
  real_T c4_b_j;
  real_T c4_b_k;
  real_T c4_b_x;
  real_T c4_c_x;
  real_T c4_d_i;
  real_T c4_d_j;
  real_T c4_d_x;
  real_T c4_e_x;
  real_T c4_myRho;
  real_T c4_tempNum;
  real_T c4_x;
  int32_T c4_nonZeroPixelMatrix[12800];
  int32_T c4_rhoIdxVector[357];
  int32_T c4_numNonZeros[160];
  int32_T c4_a;
  int32_T c4_b_i;
  int32_T c4_b_thetaIdx;
  int32_T c4_c;
  int32_T c4_c_i;
  int32_T c4_c_i2;
  int32_T c4_c_j;
  int32_T c4_e_i;
  int32_T c4_f_i;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i3;
  int32_T c4_j;
  int32_T c4_k;
  int32_T c4_n;
  int32_T c4_rhoIdx;
  int32_T c4_thetaIdx;
  int32_T c4_y;
  boolean_T c4_exitg1;
  (void)chartInstance;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_st.site = &c4_eb_emlrtRSI;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  for (c4_i = 0; c4_i < 180; c4_i++) {
    c4_b_i = c4_i;
    c4_x = (-90.0 + (real_T)c4_b_i) * 3.1415926535897931 / 180.0;
    c4_b_x = c4_x;
    c4_b_x = muDoubleScalarCos(c4_b_x);
    c4_cost[c4_b_i] = c4_b_x;
    c4_c_x = (-90.0 + (real_T)c4_b_i) * 3.1415926535897931 / 180.0;
    c4_d_x = c4_c_x;
    c4_d_x = muDoubleScalarSin(c4_d_x);
    c4_sint[c4_b_i] = c4_d_x;
  }

  c4_b_st.site = &c4_fb_emlrtRSI;
  for (c4_j = 0; c4_j < 160; c4_j++) {
    c4_b_j = (real_T)c4_j + 1.0;
    c4_tempNum = 0.0;
    for (c4_c_i = 0; c4_c_i < 80; c4_c_i++) {
      c4_d_i = (real_T)c4_c_i + 1.0;
      if (c4_b_varargin_1[((int32_T)c4_d_i + 80 * ((int32_T)c4_b_j - 1)) - 1]) {
        c4_tempNum++;
        c4_c_i2 = (int32_T)c4_tempNum;
        if ((c4_c_i2 < 1) || (c4_c_i2 > 80)) {
          emlrtDynamicBoundsCheckR2012b(c4_c_i2, 1, 80, &c4_j_emlrtBCI, &c4_b_st);
        }

        c4_tempBin[c4_c_i2 - 1] = c4_d_i;
      }
    }

    c4_numNonZeros[(int32_T)c4_b_j - 1] = (int32_T)c4_tempNum;
    c4_k = 0;
    c4_exitg1 = false;
    while ((!c4_exitg1) && (c4_k < 80)) {
      c4_b_k = (real_T)c4_k + 1.0;
      if (c4_b_k > c4_tempNum) {
        c4_exitg1 = true;
      } else {
        c4_nonZeroPixelMatrix[((int32_T)c4_b_k + 80 * ((int32_T)c4_b_j - 1)) - 1]
          = (int32_T)c4_tempBin[(int32_T)c4_b_k - 1];
        c4_k++;
      }
    }
  }

  for (c4_thetaIdx = 0; c4_thetaIdx < 180; c4_thetaIdx++) {
    c4_b_thetaIdx = c4_thetaIdx;
    memset(&c4_rhoIdxVector[0], 0, 357U * sizeof(int32_T));
    for (c4_c_j = 0; c4_c_j < 160; c4_c_j++) {
      c4_d_j = (real_T)c4_c_j + 1.0;
      c4_i1 = c4_numNonZeros[(int32_T)c4_d_j - 1];
      c4_i3 = (uint8_T)c4_i1;
      for (c4_f_i = 0; c4_f_i < c4_i3; c4_f_i++) {
        c4_b_i = c4_f_i;
        c4_n = c4_nonZeroPixelMatrix[c4_b_i + 80 * ((int32_T)c4_d_j - 1)];
        c4_myRho = (c4_d_j - 1.0) * c4_cost[c4_b_thetaIdx] + ((real_T)c4_n - 1.0)
          * c4_sint[c4_b_thetaIdx];
        c4_e_x = c4_myRho - -178.0;
        c4_y = (int32_T)(c4_e_x + 0.5) + 1;
        c4_rhoIdx = c4_y;
        c4_a = c4_rhoIdxVector[c4_rhoIdx - 1] + 1;
        c4_c = c4_a;
        if ((c4_rhoIdx < 1) || (c4_rhoIdx > 357)) {
          emlrtDynamicBoundsCheckR2012b(c4_rhoIdx, 1, 357, &c4_i_emlrtBCI,
            &c4_st);
        }

        c4_rhoIdxVector[c4_rhoIdx - 1] = c4_c;
      }
    }

    for (c4_e_i = 0; c4_e_i < 357; c4_e_i++) {
      c4_h[c4_e_i + 357 * c4_b_thetaIdx] = (real_T)c4_rhoIdxVector[c4_e_i];
    }
  }
}

static void c4_houghpeaks(SFc4_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c4_sp, real_T c4_b_varargin_1[64260], real_T c4_peaks_data[],
  int32_T c4_peaks_size[2])
{
  static char_T c4_b_cv3[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't',
    't', 'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T c4_cv6[43] = { 'i', 'm', 'a', 'g', 'e', 's', ':', 'h', 'o', 'u',
    'g', 'h', 'p', 'e', 'a', 'k', 's', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd',
    'T', 'h', 'e', 't', 'a', 'V', 'e', 'c', 't', 'o', 'r', 'S', 'p', 'a', 'c',
    'i', 'n', 'g' };

  static char_T c4_b_cv2[32] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'h', 'o',
    'u', 'g', 'h', 'p', 'e', 'a', 'k', 's', ':', 'e', 'x', 'p', 'e', 'c', 't',
    'e', 'd', 'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T c4_b_cv[18] = { 'i', 'n', 'p', 'u', 't', ' ', 'n', 'u', 'm', 'b',
    'e', 'r', ' ', '1', ',', ' ', 'H', ',' };

  static char_T c4_b_cv1[18] = { 'i', 'n', 'p', 'u', 't', ' ', 'n', 'u', 'm',
    'b', 'e', 'r', ' ', '1', ',', ' ', 'H', ',' };

  static char_T c4_cv4[9] = { 'T', 'h', 'r', 'e', 's', 'h', 'o', 'l', 'd' };

  static char_T c4_cv5[5] = { 'T', 'h', 'e', 't', 'a' };

  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  const mxArray *c4_e_y = NULL;
  const mxArray *c4_f_y = NULL;
  const mxArray *c4_h_y = NULL;
  const mxArray *c4_i_y = NULL;
  const mxArray *c4_j_y = NULL;
  const mxArray *c4_k_y = NULL;
  const mxArray *c4_l_y = NULL;
  const mxArray *c4_m_y = NULL;
  const mxArray *c4_p_y = NULL;
  const mxArray *c4_q_y = NULL;
  const mxArray *c4_y = NULL;
  real_T c4_b_dv1[180];
  real_T c4_thetaInterval[179];
  real_T c4_o_x[178];
  real_T c4_peakCoordinates[4];
  real_T c4_c_dv[2];
  real_T c4_a;
  real_T c4_ab_x;
  real_T c4_b_a;
  real_T c4_b_default;
  real_T c4_b_ex;
  real_T c4_b_k;
  real_T c4_b_ndx;
  real_T c4_b_threshold;
  real_T c4_b_thresholdDefault;
  real_T c4_b_x;
  real_T c4_bb_x;
  real_T c4_c_a;
  real_T c4_c_ex;
  real_T c4_c_threshold;
  real_T c4_c_x;
  real_T c4_cb_x;
  real_T c4_d_k;
  real_T c4_d_x;
  real_T c4_default;
  real_T c4_e_idx;
  real_T c4_e_x;
  real_T c4_ex;
  real_T c4_f_k;
  real_T c4_f_x;
  real_T c4_g_x;
  real_T c4_g_y;
  real_T c4_h_k;
  real_T c4_h_x;
  real_T c4_iPeak;
  real_T c4_i_x;
  real_T c4_jPeak;
  real_T c4_j_x;
  real_T c4_k_x;
  real_T c4_l_x;
  real_T c4_m_x;
  real_T c4_maxTheta;
  real_T c4_maxVal;
  real_T c4_minTheta;
  real_T c4_n_x;
  real_T c4_n_y;
  real_T c4_ndx;
  real_T c4_o_y;
  real_T c4_p_x;
  real_T c4_q_x;
  real_T c4_r_x;
  real_T c4_r_y;
  real_T c4_s_x;
  real_T c4_s_y;
  real_T c4_t_x;
  real_T c4_thetaResolution;
  real_T c4_threshold;
  real_T c4_thresholdDefault;
  real_T c4_u_x;
  real_T c4_v_x;
  real_T c4_val;
  real_T c4_w_x;
  real_T c4_x;
  real_T c4_x_x;
  real_T c4_y_x;
  int32_T c4_b_iPeak;
  int32_T c4_b_idx;
  int32_T c4_b_jPeak;
  int32_T c4_c_i2;
  int32_T c4_c_idx;
  int32_T c4_c_k;
  int32_T c4_d_a;
  int32_T c4_d_idx;
  int32_T c4_e_k;
  int32_T c4_f_idx;
  int32_T c4_first;
  int32_T c4_g_k;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i_k;
  int32_T c4_idx;
  int32_T c4_iindx;
  int32_T c4_j_k;
  int32_T c4_k;
  int32_T c4_k_k;
  int32_T c4_l_k;
  int32_T c4_loop_ub;
  int32_T c4_peakIdx;
  int32_T c4_rho;
  int32_T c4_rhoMax;
  int32_T c4_rhoMin;
  int32_T c4_rhoToRemove;
  int32_T c4_theta;
  int32_T c4_thetaMax;
  int32_T c4_thetaMin;
  int32_T c4_thetaToRemove;
  int32_T c4_v1;
  int32_T c4_varargout_3;
  int32_T c4_varargout_4;
  int32_T c4_vk;
  boolean_T c4_b;
  boolean_T c4_b1;
  boolean_T c4_b2;
  boolean_T c4_b3;
  boolean_T c4_b4;
  boolean_T c4_b5;
  boolean_T c4_b6;
  boolean_T c4_b7;
  boolean_T c4_b8;
  boolean_T c4_b9;
  boolean_T c4_b_b;
  boolean_T c4_b_p;
  boolean_T c4_c_b;
  boolean_T c4_c_p;
  boolean_T c4_d_b;
  boolean_T c4_d_p;
  boolean_T c4_e_b;
  boolean_T c4_e_p;
  boolean_T c4_exitg1;
  boolean_T c4_f_b;
  boolean_T c4_f_p;
  boolean_T c4_g_b;
  boolean_T c4_g_p;
  boolean_T c4_h_b;
  boolean_T c4_h_p;
  boolean_T c4_i_b;
  boolean_T c4_i_p;
  boolean_T c4_isDone;
  boolean_T c4_isThetaAntisymmetric;
  boolean_T c4_j_b;
  boolean_T c4_k_b;
  boolean_T c4_l_b;
  boolean_T c4_m_b;
  boolean_T c4_p;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  c4_st.site = &c4_hb_emlrtRSI;
  c4_b_st.site = &c4_ib_emlrtRSI;
  c4_c_st.site = &c4_mb_emlrtRSI;
  c4_p = true;
  c4_k = 0;
  c4_exitg1 = false;
  while ((!c4_exitg1) && (c4_k < 64260)) {
    c4_b_k = (real_T)c4_k + 1.0;
    c4_x = c4_b_varargin_1[(int32_T)c4_b_k - 1];
    c4_b_x = c4_x;
    c4_b_b = muDoubleScalarIsInf(c4_b_x);
    c4_b1 = !c4_b_b;
    c4_c_x = c4_x;
    c4_c_b = muDoubleScalarIsNaN(c4_c_x);
    c4_b2 = !c4_c_b;
    c4_d_b = (c4_b1 && c4_b2);
    if (c4_d_b) {
      c4_k++;
    } else {
      c4_p = false;
      c4_exitg1 = true;
    }
  }

  if (c4_p) {
    c4_b = true;
  } else {
    c4_b = false;
  }

  if (!c4_b) {
    c4_y = NULL;
    sf_mex_assign(&c4_y, sf_mex_create("y", c4_cv, 10, 0U, 1, 0U, 2, 1, 32),
                  false);
    c4_b_y = NULL;
    sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_cv1, 10, 0U, 1, 0U, 2, 1, 46),
                  false);
    c4_c_y = NULL;
    sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1, 0U, 2, 1, 18),
                  false);
    sf_mex_call(&c4_c_st, &c4_d_emlrtMCI, "error", 0U, 2U, 14, c4_y, 14,
                sf_mex_call(&c4_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_c_st, NULL, "message", 1U, 2U, 14, c4_b_y, 14, c4_c_y)));
  }

  c4_c_st.site = &c4_mb_emlrtRSI;
  c4_b_p = true;
  c4_c_k = 0;
  c4_exitg1 = false;
  while ((!c4_exitg1) && (c4_c_k < 64260)) {
    c4_d_k = (real_T)c4_c_k + 1.0;
    c4_d_x = c4_b_varargin_1[(int32_T)c4_d_k - 1];
    c4_e_x = c4_d_x;
    c4_f_x = c4_e_x;
    c4_e_b = muDoubleScalarIsInf(c4_f_x);
    c4_b4 = !c4_e_b;
    c4_g_x = c4_e_x;
    c4_f_b = muDoubleScalarIsNaN(c4_g_x);
    c4_b5 = !c4_f_b;
    c4_g_b = (c4_b4 && c4_b5);
    if (c4_g_b) {
      c4_h_x = c4_d_x;
      c4_i_x = c4_h_x;
      c4_g_y = c4_i_x;
      if (c4_g_y == c4_d_x) {
        c4_c_p = true;
      } else {
        c4_c_p = false;
      }
    } else {
      c4_c_p = false;
    }

    c4_d_p = c4_c_p;
    if (c4_d_p) {
      c4_c_k++;
    } else {
      c4_b_p = false;
      c4_exitg1 = true;
    }
  }

  if (c4_b_p) {
    c4_b3 = true;
  } else {
    c4_b3 = false;
  }

  if (!c4_b3) {
    c4_d_y = NULL;
    sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_cv2, 10, 0U, 1, 0U, 2, 1, 33),
                  false);
    c4_e_y = NULL;
    sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_cv3, 10, 0U, 1, 0U, 2, 1, 47),
                  false);
    c4_f_y = NULL;
    sf_mex_assign(&c4_f_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1, 0U, 2, 1, 18),
                  false);
    sf_mex_call(&c4_c_st, &c4_e_emlrtMCI, "error", 0U, 2U, 14, c4_d_y, 14,
                sf_mex_call(&c4_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_c_st, NULL, "message", 1U, 2U, 14, c4_e_y, 14, c4_f_y)));
  }

  c4_maxVal = 0.0;
  for (c4_e_k = 0; c4_e_k < 64260; c4_e_k++) {
    c4_f_k = (real_T)c4_e_k + 1.0;
    c4_val = c4_b_varargin_1[(int32_T)c4_f_k - 1];
    if (c4_val > c4_maxVal) {
      c4_maxVal = c4_val;
    }
  }

  c4_thresholdDefault = 0.5 * c4_maxVal;
  c4_b_thresholdDefault = c4_thresholdDefault;
  c4_default = c4_b_thresholdDefault;
  c4_b_default = c4_default;
  c4_threshold = c4_b_default;
  c4_b_threshold = c4_threshold;
  c4_b_st.site = &c4_jb_emlrtRSI;
  c4_c_threshold = c4_threshold;
  c4_c_st.site = &c4_nb_emlrtRSI;
  c4_a = c4_c_threshold;
  c4_d_st.site = &c4_mb_emlrtRSI;
  c4_b_a = c4_a;
  c4_c_a = c4_b_a;
  c4_e_p = true;
  c4_j_x = c4_c_a;
  c4_k_x = c4_j_x;
  c4_h_b = muDoubleScalarIsNaN(c4_k_x);
  c4_f_p = !c4_h_b;
  if (!c4_f_p) {
    c4_e_p = false;
  }

  if (c4_e_p) {
    c4_b6 = true;
  } else {
    c4_b6 = false;
  }

  if (!c4_b6) {
    c4_h_y = NULL;
    sf_mex_assign(&c4_h_y, sf_mex_create("y", c4_b_cv2, 10, 0U, 1, 0U, 2, 1, 32),
                  false);
    c4_i_y = NULL;
    sf_mex_assign(&c4_i_y, sf_mex_create("y", c4_b_cv3, 10, 0U, 1, 0U, 2, 1, 46),
                  false);
    c4_j_y = NULL;
    sf_mex_assign(&c4_j_y, sf_mex_create("y", c4_cv4, 10, 0U, 1, 0U, 2, 1, 9),
                  false);
    sf_mex_call(&c4_d_st, &c4_f_emlrtMCI, "error", 0U, 2U, 14, c4_h_y, 14,
                sf_mex_call(&c4_d_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_d_st, NULL, "message", 1U, 2U, 14, c4_i_y, 14, c4_j_y)));
  }

  c4_b_st.site = &c4_kb_emlrtRSI;
  for (c4_i = 0; c4_i < 2; c4_i++) {
    c4_c_dv[c4_i] = 9.0 + -4.0 * (real_T)c4_i;
  }

  c4_c_st.site = &c4_ob_emlrtRSI;
  c4_validateattributes(chartInstance, &c4_c_st, c4_c_dv);
  c4_b_st.site = &c4_lb_emlrtRSI;
  c4_c_st.site = &c4_qb_emlrtRSI;
  c4_d_st.site = &c4_mb_emlrtRSI;
  c4_g_p = true;
  c4_g_k = 0;
  c4_exitg1 = false;
  while ((!c4_exitg1) && (c4_g_k < 180)) {
    c4_h_k = (real_T)c4_g_k + 1.0;
    c4_l_x = -90.0 + (real_T)((int32_T)c4_h_k - 1);
    c4_m_x = c4_l_x;
    c4_i_b = muDoubleScalarIsInf(c4_m_x);
    c4_b8 = !c4_i_b;
    c4_n_x = c4_l_x;
    c4_j_b = muDoubleScalarIsNaN(c4_n_x);
    c4_b9 = !c4_j_b;
    c4_k_b = (c4_b8 && c4_b9);
    if (c4_k_b) {
      c4_g_k++;
    } else {
      c4_g_p = false;
      c4_exitg1 = true;
    }
  }

  if (c4_g_p) {
    c4_b7 = true;
  } else {
    c4_b7 = false;
  }

  if (!c4_b7) {
    c4_k_y = NULL;
    sf_mex_assign(&c4_k_y, sf_mex_create("y", c4_cv, 10, 0U, 1, 0U, 2, 1, 32),
                  false);
    c4_l_y = NULL;
    sf_mex_assign(&c4_l_y, sf_mex_create("y", c4_cv1, 10, 0U, 1, 0U, 2, 1, 46),
                  false);
    c4_m_y = NULL;
    sf_mex_assign(&c4_m_y, sf_mex_create("y", c4_cv5, 10, 0U, 1, 0U, 2, 1, 5),
                  false);
    sf_mex_call(&c4_d_st, &c4_d_emlrtMCI, "error", 0U, 2U, 14, c4_k_y, 14,
                sf_mex_call(&c4_d_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_d_st, NULL, "message", 1U, 2U, 14, c4_l_y, 14, c4_m_y)));
  }

  for (c4_i1 = 0; c4_i1 < 180; c4_i1++) {
    c4_b_dv1[c4_i1] = -90.0 + (real_T)c4_i1;
  }

  c4_diff(chartInstance, c4_b_dv1, c4_thetaInterval);
  c4_c_st.site = &c4_pb_emlrtRSI;
  c4_b_diff(chartInstance, c4_thetaInterval, c4_o_x);
  c4_n_y = c4_sumColumnB(chartInstance, c4_o_x);
  c4_p_x = c4_n_y;
  c4_q_x = c4_p_x;
  c4_r_x = c4_q_x;
  c4_o_y = muDoubleScalarAbs(c4_r_x);
  if (c4_o_y > 1.4901161193847656E-8) {
    c4_p_y = NULL;
    sf_mex_assign(&c4_p_y, sf_mex_create("y", c4_cv6, 10, 0U, 1, 0U, 2, 1, 43),
                  false);
    c4_q_y = NULL;
    sf_mex_assign(&c4_q_y, sf_mex_create("y", c4_cv6, 10, 0U, 1, 0U, 2, 1, 43),
                  false);
    sf_mex_call(&c4_b_st, &c4_j_emlrtMCI, "error", 0U, 2U, 14, c4_p_y, 14,
                sf_mex_call(&c4_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_b_st, NULL, "message", 1U, 1U, 14, c4_q_y)));
  }

  c4_isDone = false;
  for (c4_c_i2 = 0; c4_c_i2 < 64260; c4_c_i2++) {
    chartInstance->c4_hnew[c4_c_i2] = c4_b_varargin_1[c4_c_i2];
  }

  c4_peakIdx = 0;
  c4_ex = -90.0;
  for (c4_i_k = 0; c4_i_k < 179; c4_i_k++) {
    if (c4_ex > -90.0 + (real_T)(c4_i_k + 1)) {
      c4_ex = -90.0 + (real_T)(c4_i_k + 1);
    }
  }

  c4_minTheta = c4_ex;
  c4_b_ex = -90.0;
  for (c4_j_k = 0; c4_j_k < 179; c4_j_k++) {
    if (c4_b_ex < -90.0 + (real_T)(c4_j_k + 1)) {
      c4_b_ex = -90.0 + (real_T)(c4_j_k + 1);
    }
  }

  c4_maxTheta = c4_b_ex;
  c4_s_x = c4_maxTheta - c4_minTheta;
  c4_t_x = c4_s_x;
  c4_u_x = c4_t_x;
  c4_r_y = muDoubleScalarAbs(c4_u_x);
  c4_thetaResolution = c4_r_y / 179.0;
  c4_v_x = c4_minTheta + c4_thetaResolution * 5.0;
  c4_w_x = c4_v_x;
  c4_x_x = c4_w_x;
  c4_s_y = muDoubleScalarAbs(c4_x_x);
  c4_isThetaAntisymmetric = (c4_s_y <= c4_maxTheta);
  while (!c4_isDone) {
    for (c4_i3 = 0; c4_i3 < 64260; c4_i3++) {
      chartInstance->c4_varargin_1[c4_i3] = chartInstance->c4_hnew[c4_i3];
    }

    c4_y_x = chartInstance->c4_varargin_1[0];
    c4_ab_x = c4_y_x;
    c4_l_b = muDoubleScalarIsNaN(c4_ab_x);
    c4_h_p = !c4_l_b;
    if (c4_h_p) {
      c4_idx = 1;
    } else {
      c4_idx = 0;
      c4_k_k = 2;
      c4_exitg1 = false;
      while ((!c4_exitg1) && (c4_k_k < 64261)) {
        c4_bb_x = chartInstance->c4_varargin_1[c4_k_k - 1];
        c4_cb_x = c4_bb_x;
        c4_m_b = muDoubleScalarIsNaN(c4_cb_x);
        c4_i_p = !c4_m_b;
        if (c4_i_p) {
          c4_idx = c4_k_k;
          c4_exitg1 = true;
        } else {
          c4_k_k++;
        }
      }
    }

    if (c4_idx == 0) {
      c4_idx = 1;
    } else {
      c4_first = c4_idx;
      c4_c_ex = chartInstance->c4_varargin_1[c4_first - 1];
      c4_b_idx = c4_first;
      c4_i6 = c4_first;
      for (c4_l_k = c4_i6 + 1; c4_l_k < 64261; c4_l_k++) {
        if (c4_c_ex < chartInstance->c4_varargin_1[c4_l_k - 1]) {
          c4_c_ex = chartInstance->c4_varargin_1[c4_l_k - 1];
          c4_b_idx = c4_l_k;
        }
      }

      c4_idx = c4_b_idx;
    }

    c4_c_idx = c4_idx;
    c4_d_idx = c4_c_idx;
    c4_iindx = c4_d_idx;
    c4_e_idx = (real_T)c4_iindx;
    c4_st.site = &c4_gb_emlrtRSI;
    c4_ndx = c4_e_idx;
    c4_b_st.site = &c4_rb_emlrtRSI;
    c4_b_ndx = c4_ndx;
    c4_f_idx = (int32_T)c4_b_ndx - 1;
    c4_v1 = c4_f_idx;
    c4_d_a = c4_v1;
    c4_vk = (int32_T)((uint32_T)(uint16_T)c4_d_a / 357U);
    c4_varargout_4 = c4_vk;
    c4_v1 = (c4_v1 - c4_vk * 357) + 1;
    c4_varargout_3 = c4_v1;
    c4_iPeak = (real_T)c4_varargout_3;
    c4_jPeak = (real_T)(c4_varargout_4 + 1);
    c4_b_iPeak = (int32_T)c4_iPeak;
    c4_b_jPeak = (int32_T)c4_jPeak;
    if ((c4_b_iPeak < 1) || (c4_b_iPeak > 357)) {
      emlrtDynamicBoundsCheckR2012b(c4_b_iPeak, 1, 357, &c4_l_emlrtBCI,
        (emlrtConstCTX)c4_sp);
    }

    if (chartInstance->c4_hnew[(c4_b_iPeak + 357 * (c4_b_jPeak - 1)) - 1] >=
        c4_b_threshold) {
      c4_peakIdx++;
      if ((c4_peakIdx < 1) || (c4_peakIdx > 2)) {
        emlrtDynamicBoundsCheckR2012b(c4_peakIdx, 1, 2, &c4_k_emlrtBCI,
          (emlrtConstCTX)c4_sp);
      }

      c4_peakCoordinates[c4_peakIdx - 1] = (real_T)c4_b_iPeak;
      c4_peakCoordinates[c4_peakIdx + 1] = (real_T)c4_b_jPeak;
      c4_rhoMin = c4_b_iPeak - 4;
      c4_rhoMax = c4_b_iPeak + 4;
      c4_thetaMin = c4_b_jPeak;
      c4_thetaMax = c4_b_jPeak;
      if (c4_rhoMin < 1) {
        c4_rhoMin = 1;
      }

      if (c4_rhoMax > 357) {
        c4_rhoMax = 357;
      }

      for (c4_theta = c4_thetaMin - 2; c4_theta <= c4_thetaMax + 2; c4_theta++)
      {
        for (c4_rho = c4_rhoMin; c4_rho <= c4_rhoMax; c4_rho++) {
          c4_rhoToRemove = c4_rho;
          c4_thetaToRemove = c4_theta;
          if (c4_isThetaAntisymmetric) {
            if (c4_theta > 180) {
              c4_rhoToRemove = 358 - c4_rho;
              c4_thetaToRemove = c4_theta - 180;
            } else if (c4_theta < 1) {
              c4_rhoToRemove = 358 - c4_rho;
              c4_thetaToRemove = c4_theta + 180;
            }
          }

          if ((c4_thetaToRemove > 180) || (c4_thetaToRemove < 1)) {
          } else {
            chartInstance->c4_hnew[(c4_rhoToRemove + 357 * (c4_thetaToRemove - 1))
              - 1] = 0.0;
          }
        }
      }

      c4_isDone = (c4_peakIdx == 2);
    } else {
      c4_isDone = true;
    }
  }

  if (c4_peakIdx == 0) {
    memset(&c4_peaks_size[0], 0, sizeof(int32_T) << 1);
  } else {
    c4_peaks_size[0] = c4_peakIdx;
    c4_peaks_size[1] = 2;
    for (c4_i4 = 0; c4_i4 < 2; c4_i4++) {
      c4_loop_ub = c4_peakIdx - 1;
      for (c4_i5 = 0; c4_i5 <= c4_loop_ub; c4_i5++) {
        c4_peaks_data[c4_i5 + c4_peaks_size[0] * c4_i4] =
          c4_peakCoordinates[c4_i5 + (c4_i4 << 1)];
      }
    }
  }
}

static void c4_validateattributes(SFc4_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, real_T c4_a[2])
{
  static char_T c4_b_cv3[43] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't',
    't', 'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'O', 'd', 'd' };

  static char_T c4_b_cv2[29] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'h', 'o',
    'u', 'g', 'h', 'p', 'e', 'a', 'k', 's', ':', 'e', 'x', 'p', 'e', 'c', 't',
    'e', 'd', 'O', 'd', 'd' };

  static char_T c4_b_cv[9] = { 'N', 'H', 'o', 'o', 'd', 'S', 'i', 'z', 'e' };

  static char_T c4_b_cv1[9] = { 'N', 'H', 'o', 'o', 'd', 'S', 'i', 'z', 'e' };

  static char_T c4_cv4[9] = { 'N', 'H', 'o', 'o', 'd', 'S', 'i', 'z', 'e' };

  emlrtStack c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  const mxArray *c4_e_y = NULL;
  const mxArray *c4_f_y = NULL;
  const mxArray *c4_h_y = NULL;
  const mxArray *c4_i_y = NULL;
  const mxArray *c4_j_y = NULL;
  const mxArray *c4_y = NULL;
  real_T c4_b_a;
  real_T c4_b_k;
  real_T c4_b_x;
  real_T c4_c_x;
  real_T c4_d_k;
  real_T c4_d_x;
  real_T c4_e_x;
  real_T c4_f_k;
  real_T c4_f_x;
  real_T c4_g_x;
  real_T c4_g_y;
  real_T c4_h_x;
  real_T c4_i_x;
  real_T c4_j_x;
  real_T c4_k_x;
  real_T c4_l_x;
  real_T c4_m_x;
  real_T c4_n_x;
  real_T c4_o_x;
  real_T c4_r;
  real_T c4_x;
  int32_T c4_c_k;
  int32_T c4_e_k;
  int32_T c4_k;
  boolean_T c4_b;
  boolean_T c4_b1;
  boolean_T c4_b2;
  boolean_T c4_b3;
  boolean_T c4_b4;
  boolean_T c4_b5;
  boolean_T c4_b6;
  boolean_T c4_b_b;
  boolean_T c4_b_p;
  boolean_T c4_c_b;
  boolean_T c4_c_p;
  boolean_T c4_d_b;
  boolean_T c4_d_p;
  boolean_T c4_e_b;
  boolean_T c4_e_p;
  boolean_T c4_exitg1;
  boolean_T c4_f_b;
  boolean_T c4_f_p;
  boolean_T c4_g_b;
  boolean_T c4_h_b;
  boolean_T c4_i_b;
  boolean_T c4_p;
  boolean_T c4_rEQ0;
  (void)chartInstance;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_st.site = &c4_mb_emlrtRSI;
  c4_p = true;
  c4_k = 0;
  c4_exitg1 = false;
  while ((!c4_exitg1) && (c4_k < 2)) {
    c4_b_k = (real_T)c4_k + 1.0;
    c4_x = c4_a[(int32_T)c4_b_k - 1];
    c4_b_x = c4_x;
    c4_b_b = muDoubleScalarIsInf(c4_b_x);
    c4_b1 = !c4_b_b;
    c4_c_x = c4_x;
    c4_c_b = muDoubleScalarIsNaN(c4_c_x);
    c4_b2 = !c4_c_b;
    c4_d_b = (c4_b1 && c4_b2);
    if (c4_d_b) {
      c4_k++;
    } else {
      c4_p = false;
      c4_exitg1 = true;
    }
  }

  if (c4_p) {
    c4_b = true;
  } else {
    c4_b = false;
  }

  if (!c4_b) {
    c4_y = NULL;
    sf_mex_assign(&c4_y, sf_mex_create("y", c4_cv, 10, 0U, 1, 0U, 2, 1, 32),
                  false);
    c4_b_y = NULL;
    sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_cv1, 10, 0U, 1, 0U, 2, 1, 46),
                  false);
    c4_c_y = NULL;
    sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1, 0U, 2, 1, 9),
                  false);
    sf_mex_call(&c4_st, &c4_d_emlrtMCI, "error", 0U, 2U, 14, c4_y, 14,
                sf_mex_call(&c4_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_st, NULL, "message", 1U, 2U, 14, c4_b_y, 14, c4_c_y)));
  }

  c4_st.site = &c4_mb_emlrtRSI;
  c4_b_p = true;
  c4_c_k = 0;
  c4_exitg1 = false;
  while ((!c4_exitg1) && (c4_c_k < 2)) {
    c4_d_k = (real_T)c4_c_k + 1.0;
    c4_d_x = c4_a[(int32_T)c4_d_k - 1];
    c4_e_x = c4_d_x;
    c4_f_x = c4_e_x;
    c4_e_b = muDoubleScalarIsInf(c4_f_x);
    c4_b4 = !c4_e_b;
    c4_g_x = c4_e_x;
    c4_f_b = muDoubleScalarIsNaN(c4_g_x);
    c4_b5 = !c4_f_b;
    c4_g_b = (c4_b4 && c4_b5);
    if (c4_g_b) {
      c4_h_x = c4_d_x;
      c4_i_x = c4_h_x;
      c4_g_y = c4_i_x;
      if (c4_g_y == c4_d_x) {
        c4_d_p = true;
      } else {
        c4_d_p = false;
      }
    } else {
      c4_d_p = false;
    }

    c4_e_p = c4_d_p;
    if (c4_e_p) {
      c4_c_k++;
    } else {
      c4_b_p = false;
      c4_exitg1 = true;
    }
  }

  if (c4_b_p) {
    c4_b3 = true;
  } else {
    c4_b3 = false;
  }

  if (!c4_b3) {
    c4_d_y = NULL;
    sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_cv2, 10, 0U, 1, 0U, 2, 1, 33),
                  false);
    c4_e_y = NULL;
    sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_cv3, 10, 0U, 1, 0U, 2, 1, 47),
                  false);
    c4_f_y = NULL;
    sf_mex_assign(&c4_f_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1, 0U, 2, 1, 9),
                  false);
    sf_mex_call(&c4_st, &c4_e_emlrtMCI, "error", 0U, 2U, 14, c4_d_y, 14,
                sf_mex_call(&c4_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_st, NULL, "message", 1U, 2U, 14, c4_e_y, 14, c4_f_y)));
  }

  c4_st.site = &c4_mb_emlrtRSI;
  c4_st.site = &c4_mb_emlrtRSI;
  c4_c_p = true;
  c4_e_k = 0;
  c4_exitg1 = false;
  while ((!c4_exitg1) && (c4_e_k < 2)) {
    c4_f_k = (real_T)c4_e_k + 1.0;
    c4_j_x = c4_a[(int32_T)c4_f_k - 1];
    c4_k_x = c4_j_x;
    c4_b_a = c4_k_x;
    c4_l_x = c4_b_a;
    c4_m_x = c4_l_x;
    c4_n_x = c4_m_x;
    c4_h_b = muDoubleScalarIsNaN(c4_n_x);
    if (c4_h_b) {
      c4_r = rtNaN;
    } else {
      c4_o_x = c4_m_x;
      c4_i_b = muDoubleScalarIsInf(c4_o_x);
      if (c4_i_b) {
        c4_r = rtNaN;
      } else {
        c4_r = muDoubleScalarRem(c4_m_x, 2.0);
        c4_rEQ0 = (c4_r == 0.0);
        if (c4_rEQ0) {
          c4_r = 0.0;
        }
      }
    }

    c4_f_p = (c4_r == 1.0);
    if (c4_f_p) {
      c4_e_k++;
    } else {
      c4_c_p = false;
      c4_exitg1 = true;
    }
  }

  if (c4_c_p) {
    c4_b6 = true;
  } else {
    c4_b6 = false;
  }

  if (!c4_b6) {
    c4_h_y = NULL;
    sf_mex_assign(&c4_h_y, sf_mex_create("y", c4_b_cv2, 10, 0U, 1, 0U, 2, 1, 29),
                  false);
    c4_i_y = NULL;
    sf_mex_assign(&c4_i_y, sf_mex_create("y", c4_b_cv3, 10, 0U, 1, 0U, 2, 1, 43),
                  false);
    c4_j_y = NULL;
    sf_mex_assign(&c4_j_y, sf_mex_create("y", c4_cv4, 10, 0U, 1, 0U, 2, 1, 9),
                  false);
    sf_mex_call(&c4_st, &c4_i_emlrtMCI, "error", 0U, 2U, 14, c4_h_y, 14,
                sf_mex_call(&c4_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_st, NULL, "message", 1U, 2U, 14, c4_i_y, 14, c4_j_y)));
  }
}

static void c4_diff(SFc4_flightControlSystemInstanceStruct *chartInstance,
                    real_T c4_x[180], real_T c4_y[179])
{
  real_T c4_tmp1;
  real_T c4_tmp2;
  real_T c4_work;
  int32_T c4_ixLead;
  int32_T c4_iyLead;
  int32_T c4_m;
  (void)chartInstance;
  c4_ixLead = 1;
  c4_iyLead = 0;
  c4_work = c4_x[0];
  for (c4_m = 0; c4_m < 179; c4_m++) {
    c4_tmp1 = c4_x[c4_ixLead];
    c4_tmp2 = c4_work;
    c4_work = c4_tmp1;
    c4_tmp1 -= c4_tmp2;
    c4_ixLead++;
    c4_y[c4_iyLead] = c4_tmp1;
    c4_iyLead++;
  }
}

static void c4_b_diff(SFc4_flightControlSystemInstanceStruct *chartInstance,
                      real_T c4_x[179], real_T c4_y[178])
{
  real_T c4_tmp1;
  real_T c4_tmp2;
  real_T c4_work;
  int32_T c4_ixLead;
  int32_T c4_iyLead;
  int32_T c4_m;
  (void)chartInstance;
  c4_ixLead = 1;
  c4_iyLead = 0;
  c4_work = c4_x[0];
  for (c4_m = 0; c4_m < 178; c4_m++) {
    c4_tmp1 = c4_x[c4_ixLead];
    c4_tmp2 = c4_work;
    c4_work = c4_tmp1;
    c4_tmp1 -= c4_tmp2;
    c4_ixLead++;
    c4_y[c4_iyLead] = c4_tmp1;
    c4_iyLead++;
  }
}

static real_T c4_sumColumnB(SFc4_flightControlSystemInstanceStruct
  *chartInstance, real_T c4_x[178])
{
  real_T c4_y;
  int32_T c4_b_k;
  int32_T c4_k;
  (void)chartInstance;
  c4_y = c4_x[0];
  for (c4_k = 0; c4_k < 177; c4_k++) {
    c4_b_k = c4_k;
    c4_y += c4_x[c4_b_k + 1];
  }

  return c4_y;
}

static real_T c4_b_sumColumnB(SFc4_flightControlSystemInstanceStruct
  *chartInstance, real_T c4_x_data[], int32_T c4_vlen)
{
  real_T c4_y;
  int32_T c4_b_vlen;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_k;
  (void)chartInstance;
  c4_b_vlen = c4_vlen - 1;
  c4_y = c4_x_data[0];
  c4_i = c4_b_vlen;
  c4_i1 = (uint8_T)c4_i;
  for (c4_k = 0; c4_k < c4_i1; c4_k++) {
    c4_y += c4_x_data[1];
  }

  return c4_y;
}

const mxArray *sf_c4_flightControlSystem_get_eml_resolved_functions_info(void)
{
  const mxArray *c4_nameCaptureInfo = NULL;
  c4_nameCaptureInfo = NULL;
  sf_mex_assign(&c4_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1, 0U, 2, 0, 1), false);
  return c4_nameCaptureInfo;
}

static real_T c4_emlrt_marshallIn(SFc4_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c4_nullptr, const char_T *c4_identifier)
{
  emlrtMsgIdentifier c4_thisId;
  real_T c4_y;
  c4_thisId.fIdentifier = (const char_T *)c4_identifier;
  c4_thisId.fParent = NULL;
  c4_thisId.bParentIsCell = false;
  c4_y = c4_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_nullptr), &c4_thisId);
  sf_mex_destroy(&c4_nullptr);
  return c4_y;
}

static real_T c4_b_emlrt_marshallIn(SFc4_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId)
{
  real_T c4_d;
  real_T c4_y;
  (void)chartInstance;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_u), &c4_d, 1, 0, 0U, 0, 0U, 0);
  c4_y = c4_d;
  sf_mex_destroy(&c4_u);
  return c4_y;
}

static const mxArray *c4_feval(SFc4_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, const mxArray *c4_input0, const
  mxArray *c4_input1)
{
  const mxArray *c4_m = NULL;
  (void)chartInstance;
  c4_m = NULL;
  sf_mex_assign(&c4_m, sf_mex_call(c4_sp, NULL, "feval", 1U, 2U, 14, sf_mex_dup
    (c4_input0), 14, sf_mex_dup(c4_input1)), false);
  sf_mex_destroy(&c4_input0);
  sf_mex_destroy(&c4_input1);
  return c4_m;
}

static void c4_b_feval(SFc4_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c4_sp, const mxArray *c4_input0, const mxArray *c4_input1)
{
  (void)chartInstance;
  sf_mex_call(c4_sp, NULL, "feval", 0U, 2U, 14, sf_mex_dup(c4_input0), 14,
              sf_mex_dup(c4_input1));
  sf_mex_destroy(&c4_input0);
  sf_mex_destroy(&c4_input1);
}

static void init_dsm_address_info(SFc4_flightControlSystemInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc4_flightControlSystemInstanceStruct
  *chartInstance)
{
  chartInstance->c4_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c4_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c4_BWimage = (real_T (*)[12800])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c4_DegAngle = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c4_flightControlSystem_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2929193145U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(4044110919U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1222126850U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1736150620U);
}

mxArray *sf_c4_flightControlSystem_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,5);
  mxSetCell(mxcell3p, 0, mxCreateString(
             "images.internal.coder.buildable.IppfilterBuildable"));
  mxSetCell(mxcell3p, 1, mxCreateString(
             "images.internal.coder.buildable.ImfilterBuildable"));
  mxSetCell(mxcell3p, 2, mxCreateString(
             "images.internal.coder.buildable.GetnumcoresBuildable"));
  mxSetCell(mxcell3p, 3, mxCreateString(
             "images.internal.coder.buildable.CannyThresholdingTbbBuildable"));
  mxSetCell(mxcell3p, 4, mxCreateString(
             "images.internal.coder.buildable.IppreconstructBuildable"));
  return(mxcell3p);
}

mxArray *sf_c4_flightControlSystem_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_function_calls");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("ippfilter_real64");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c4_flightControlSystem_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c4_flightControlSystem(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiBWYGRgYAPSHEDMxAABrFA+IxKGiLPAxRWAuKSyIBUkXlyU7JkCpPMSc8H8xNI"
    "Kz7y0fLD5FgwI89kImM8JFYeAD/aU6RdxQNfPgkU/B5J+ASjfJTXdMS89J5UPKg4AuUIPUA=="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c4_flightControlSystem_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sOKfM3ZdSqMbEJIUrHZKqnE";
}

static void sf_opaque_initialize_c4_flightControlSystem(void *chartInstanceVar)
{
  initialize_params_c4_flightControlSystem
    ((SFc4_flightControlSystemInstanceStruct*) chartInstanceVar);
  initialize_c4_flightControlSystem((SFc4_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c4_flightControlSystem(void *chartInstanceVar)
{
  enable_c4_flightControlSystem((SFc4_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c4_flightControlSystem(void *chartInstanceVar)
{
  disable_c4_flightControlSystem((SFc4_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c4_flightControlSystem(void *chartInstanceVar)
{
  sf_gateway_c4_flightControlSystem((SFc4_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c4_flightControlSystem(SimStruct*
  S)
{
  return get_sim_state_c4_flightControlSystem
    ((SFc4_flightControlSystemInstanceStruct *)sf_get_chart_instance_ptr(S));/* raw sim ctx */
}

static void sf_opaque_set_sim_state_c4_flightControlSystem(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c4_flightControlSystem((SFc4_flightControlSystemInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c4_flightControlSystem(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc4_flightControlSystemInstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_flightControlSystem_optimization_info();
    }

    mdl_cleanup_runtime_resources_c4_flightControlSystem
      ((SFc4_flightControlSystemInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c4_flightControlSystem(void *chartInstanceVar)
{
  mdl_start_c4_flightControlSystem((SFc4_flightControlSystemInstanceStruct*)
    chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc4_flightControlSystemInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c4_flightControlSystem(void
  *chartInstanceVar)
{
  mdl_terminate_c4_flightControlSystem((SFc4_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c4_flightControlSystem(SimStruct *S)
{
  mdlProcessParamsCommon(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c4_flightControlSystem
      ((SFc4_flightControlSystemInstanceStruct*)sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c4_flightControlSystem_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [20] = {
    "eNrdWE9v40QUn1Sl2oWlWiTEcgCx3LgglS1IHPiz3cRhwzY0wumCemEn9rM96njszp+k4cYX4BP",
    "xIbggceE7IHGBG28cJ41c03ocabuLJcd5dn7z3vvN++eQzmBI8NjF8/t7hOzg9RaeW2RxvFLKnb",
    "VzcX+bfFbKo1cJCRIq9UBEGXE/giyEGIRvooidO2KFSUdU0lS10CtoCt+CyrjRLBNuxjMRgQQR4",
    "AJ5JrWTXsVSw5k47RsRWM3qu4QFiZ9khoePcEEaHgk+/y+9udEj1NhjEgLdBwh1IjMTJ31O46tZ",
    "kHrWTSA4VSZ15kqB9k1uXVVDwzXLOXjnEAyE0hRZUNf462uqoavPnSOEKX+JztKcMyqac51Q5UO",
    "O0aHhOA/x88hoZK+hXtQ3YYLqTDLKvZR3bYQ3xI442jnEsObOPOtU92Bi4piJ2LIrTQoC/cc4ac",
    "BV1M2mIGkMR8IxB6133nmxwau4bJ6DAxuWrXLQpItdUa2whV5vigyplnr7gehSzpUbdpzlhzAFX",
    "ujvUU1bYBf6HcBKsXCcPaXSZoFjJhnBzgyU2G4mQtZ8h6cVVFFwv8Hi2QDOUhtSECLNK9NXC10X",
    "k0bpLO1iGvUODxvqu4wdCA0yogE0rn2SMgVocBFXjnpDpuiEWzSypAsvG68AojWUqMiI3iyTp8i",
    "xa5G94Mpmghsawhh6oKEoGB5G91PKTUObU4UVzobHscKK5aYXsTZ/WoEDGiQQ2n7COAxB2QVU4/",
    "qMfeQAvZ0yPe+BCiTLm2aSURBiI7Esjec5HItTkc1EX2apX04EV8QVAFYNKgW2hUfYluS8j8Y3s",
    "1rC2dhGVpvxLKWa04mNja9AYGexvtpOSAPMKk/g6IYGbYL12Y/Y2oViSuM4NfeKHAiLefTtjts8",
    "+kYp769yaaDGEneKYhsWOCkdTIphD8YsheKGT3GmWIjlYfXukQu9t7eu1ruF3zotcWRD3OM13HY",
    "NP2+t4e6WcvDxDxFncWKLsJYZ9+fIe3rZjjsN+K6zv4ojl3AXPC+vH6zhOzV6ydp1k/15uIZ7va",
    "Jnu4LbKTn75f13f/r8t7+C1/Z+fsb++SPaRP+vjvG8W8rvLOezVQebXiryTeLhXiUerKyOnkTD/",
    "ZPQPxtOvK8Hx/LxyZMz4RXr3Xe0d3n/Pp4aC1xRL2UwCMt3LStTs3gHsOt/umbvzjXr316LJ0L+",
    "/HIz/JsPq/g6vm5V+LJyD+IDEXPYfYnqxU3Vp5u0s0n96jxnHHnOuE39c63LL/vv966oB6Ty+7s",
    "vsB/Va9v+/KL59Ttx60fvlfIXq3fnbsJ4WDO9l49xwI7qnv5P4vtvR/6W84Jn+Sv//DvZPxCUz3",
    "FcX7wOlbdH0v7vtHokgar6d6Kb6EOkZv6r6/d3Kvlt5RkTYTZTH3704JMHm/S1fwF4xgMJ",
    ""
  };

  static char newstr [1421] = "";
  newstr[0] = '\0';
  for (i = 0; i < 20; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c4_flightControlSystem(SimStruct *S)
{
  const char* newstr = sf_c4_flightControlSystem_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(2166170044U));
  ssSetChecksum1(S,(1676924221U));
  ssSetChecksum2(S,(1619931147U));
  ssSetChecksum3(S,(1725823337U));
}

static void mdlRTW_c4_flightControlSystem(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c4_flightControlSystem(SimStruct *S)
{
  SFc4_flightControlSystemInstanceStruct *chartInstance;
  chartInstance = (SFc4_flightControlSystemInstanceStruct *)utMalloc(sizeof
    (SFc4_flightControlSystemInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc4_flightControlSystemInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c4_flightControlSystem;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c4_flightControlSystem;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c4_flightControlSystem;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c4_flightControlSystem;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c4_flightControlSystem;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c4_flightControlSystem;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c4_flightControlSystem;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c4_flightControlSystem;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c4_flightControlSystem;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c4_flightControlSystem;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c4_flightControlSystem;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c4_flightControlSystem;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartEventFcn = NULL;
  chartInstance->S = S;
  chartInstance->chartInfo.dispatchToExportedFcn = NULL;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c4_flightControlSystem(chartInstance);
}

void c4_flightControlSystem_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c4_flightControlSystem(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c4_flightControlSystem(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c4_flightControlSystem(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c4_flightControlSystem_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}

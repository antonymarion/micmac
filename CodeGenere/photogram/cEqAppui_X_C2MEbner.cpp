// File Automatically generated by eLiSe
#include "general/all.h"
#include "private/all.h"
#include "cEqAppui_X_C2MEbner.h"


cEqAppui_X_C2MEbner::cEqAppui_X_C2MEbner():
    cElCompiledFonc(1)
{
   AddIntRef (cIncIntervale("Intr",0,15));
   AddIntRef (cIncIntervale("Orient",15,21));
   Close(false);
}



void cEqAppui_X_C2MEbner::ComputeVal()
{
   double tmp0_ = mCompCoord[15];
   double tmp1_ = mCompCoord[16];
   double tmp2_ = cos(tmp1_);
   double tmp3_ = sin(tmp0_);
   double tmp4_ = cos(tmp0_);
   double tmp5_ = sin(tmp1_);
   double tmp6_ = mCompCoord[17];
   double tmp7_ = mCompCoord[18];
   double tmp8_ = mLocXTer-tmp7_;
   double tmp9_ = sin(tmp6_);
   double tmp10_ = -(tmp9_);
   double tmp11_ = -(tmp5_);
   double tmp12_ = cos(tmp6_);
   double tmp13_ = mCompCoord[19];
   double tmp14_ = mLocYTer-tmp13_;
   double tmp15_ = mCompCoord[20];
   double tmp16_ = mLocZTer-tmp15_;
   double tmp17_ = mLocEbner_State_0_0*mLocEbner_State_0_0;
   double tmp18_ = tmp17_*0.666667;
   double tmp19_ = mLocYIm*mLocYIm;
   double tmp20_ = tmp19_-tmp18_;
   double tmp21_ = mLocXIm*mLocXIm;
   double tmp22_ = tmp21_-tmp18_;

  mVal[0] = (mCompCoord[1]+mCompCoord[0]*((tmp4_*tmp2_*(tmp8_)+tmp3_*tmp2_*(tmp14_)+tmp5_*(tmp16_))/((-(tmp3_)*tmp10_+tmp4_*tmp11_*tmp12_)*(tmp8_)+(tmp4_*tmp10_+tmp3_*tmp11_*tmp12_)*(tmp14_)+tmp2_*tmp12_*(tmp16_))))-(((1+mCompCoord[3])*mLocXIm+mCompCoord[4]*mLocYIm)-mCompCoord[5]*2*(tmp22_)+mCompCoord[6]*mLocXIm*mLocYIm+mCompCoord[7]*(tmp20_)+mCompCoord[9]*mLocXIm*(tmp20_)+mCompCoord[11]*mLocYIm*(tmp22_)+mCompCoord[13]*(tmp22_)*(tmp20_));

}


void cEqAppui_X_C2MEbner::ComputeValDeriv()
{
   double tmp0_ = mCompCoord[15];
   double tmp1_ = mCompCoord[16];
   double tmp2_ = cos(tmp1_);
   double tmp3_ = sin(tmp0_);
   double tmp4_ = cos(tmp0_);
   double tmp5_ = sin(tmp1_);
   double tmp6_ = mCompCoord[17];
   double tmp7_ = mCompCoord[18];
   double tmp8_ = mLocXTer-tmp7_;
   double tmp9_ = sin(tmp6_);
   double tmp10_ = -(tmp9_);
   double tmp11_ = -(tmp5_);
   double tmp12_ = cos(tmp6_);
   double tmp13_ = mCompCoord[19];
   double tmp14_ = mLocYTer-tmp13_;
   double tmp15_ = mCompCoord[20];
   double tmp16_ = mLocZTer-tmp15_;
   double tmp17_ = mLocEbner_State_0_0*mLocEbner_State_0_0;
   double tmp18_ = tmp17_*0.666667;
   double tmp19_ = mLocYIm*mLocYIm;
   double tmp20_ = tmp19_-tmp18_;
   double tmp21_ = mLocXIm*mLocXIm;
   double tmp22_ = tmp21_-tmp18_;
   double tmp23_ = tmp4_*tmp2_;
   double tmp24_ = tmp23_*(tmp8_);
   double tmp25_ = tmp3_*tmp2_;
   double tmp26_ = tmp25_*(tmp14_);
   double tmp27_ = tmp24_+tmp26_;
   double tmp28_ = tmp5_*(tmp16_);
   double tmp29_ = tmp27_+tmp28_;
   double tmp30_ = -(tmp3_);
   double tmp31_ = tmp30_*tmp10_;
   double tmp32_ = tmp4_*tmp11_;
   double tmp33_ = tmp32_*tmp12_;
   double tmp34_ = tmp31_+tmp33_;
   double tmp35_ = (tmp34_)*(tmp8_);
   double tmp36_ = tmp4_*tmp10_;
   double tmp37_ = tmp3_*tmp11_;
   double tmp38_ = tmp37_*tmp12_;
   double tmp39_ = tmp36_+tmp38_;
   double tmp40_ = (tmp39_)*(tmp14_);
   double tmp41_ = tmp35_+tmp40_;
   double tmp42_ = tmp2_*tmp12_;
   double tmp43_ = tmp42_*(tmp16_);
   double tmp44_ = tmp41_+tmp43_;
   double tmp45_ = (tmp29_)/(tmp44_);
   double tmp46_ = mLocXIm*mLocYIm;
   double tmp47_ = -(1);
   double tmp48_ = tmp47_*tmp3_;
   double tmp49_ = mCompCoord[0];
   double tmp50_ = tmp47_*tmp5_;
   double tmp51_ = -(tmp2_);
   double tmp52_ = ElSquare(tmp44_);
   double tmp53_ = -(tmp12_);
   double tmp54_ = tmp47_*tmp9_;

  mVal[0] = (mCompCoord[1]+tmp49_*(tmp45_))-(((1+mCompCoord[3])*mLocXIm+mCompCoord[4]*mLocYIm)-mCompCoord[5]*2*(tmp22_)+mCompCoord[6]*tmp46_+mCompCoord[7]*(tmp20_)+mCompCoord[9]*mLocXIm*(tmp20_)+mCompCoord[11]*mLocYIm*(tmp22_)+mCompCoord[13]*(tmp22_)*(tmp20_));

  mCompDer[0][0] = tmp45_;
  mCompDer[0][1] = 1;
  mCompDer[0][2] = 0;
  mCompDer[0][3] = -(mLocXIm);
  mCompDer[0][4] = -(mLocYIm);
  mCompDer[0][5] = -(-(2*(tmp22_)));
  mCompDer[0][6] = -(tmp46_);
  mCompDer[0][7] = -(tmp20_);
  mCompDer[0][8] = 0;
  mCompDer[0][9] = -(mLocXIm*(tmp20_));
  mCompDer[0][10] = 0;
  mCompDer[0][11] = -(mLocYIm*(tmp22_));
  mCompDer[0][12] = 0;
  mCompDer[0][13] = -((tmp22_)*(tmp20_));
  mCompDer[0][14] = 0;
  mCompDer[0][15] = (((tmp48_*tmp2_*(tmp8_)+tmp23_*(tmp14_))*(tmp44_)-(tmp29_)*((-(tmp4_)*tmp10_+tmp48_*tmp11_*tmp12_)*(tmp8_)+(tmp48_*tmp10_+tmp33_)*(tmp14_)))/tmp52_)*tmp49_;
  mCompDer[0][16] = (((tmp50_*tmp4_*(tmp8_)+tmp50_*tmp3_*(tmp14_)+tmp2_*(tmp16_))*(tmp44_)-(tmp29_)*(tmp51_*tmp4_*tmp12_*(tmp8_)+tmp51_*tmp3_*tmp12_*(tmp14_)+tmp50_*tmp12_*(tmp16_)))/tmp52_)*tmp49_;
  mCompDer[0][17] = (-((tmp29_)*((tmp53_*tmp30_+tmp54_*tmp32_)*(tmp8_)+(tmp53_*tmp4_+tmp54_*tmp37_)*(tmp14_)+tmp54_*tmp2_*(tmp16_)))/tmp52_)*tmp49_;
  mCompDer[0][18] = ((tmp47_*tmp23_*(tmp44_)-(tmp29_)*tmp47_*(tmp34_))/tmp52_)*tmp49_;
  mCompDer[0][19] = ((tmp47_*tmp25_*(tmp44_)-(tmp29_)*tmp47_*(tmp39_))/tmp52_)*tmp49_;
  mCompDer[0][20] = ((tmp50_*(tmp44_)-(tmp29_)*tmp47_*tmp42_)/tmp52_)*tmp49_;
}


void cEqAppui_X_C2MEbner::ComputeValDerivHessian()
{
  ELISE_ASSERT(false,"Foncteur cEqAppui_X_C2MEbner Has no Der Sec");
}

void cEqAppui_X_C2MEbner::SetEbner_State_0_0(double aVal){ mLocEbner_State_0_0 = aVal;}
void cEqAppui_X_C2MEbner::SetXIm(double aVal){ mLocXIm = aVal;}
void cEqAppui_X_C2MEbner::SetXTer(double aVal){ mLocXTer = aVal;}
void cEqAppui_X_C2MEbner::SetYIm(double aVal){ mLocYIm = aVal;}
void cEqAppui_X_C2MEbner::SetYTer(double aVal){ mLocYTer = aVal;}
void cEqAppui_X_C2MEbner::SetZTer(double aVal){ mLocZTer = aVal;}



double * cEqAppui_X_C2MEbner::AdrVarLocFromString(const std::string & aName)
{
   if (aName == "Ebner_State_0_0") return & mLocEbner_State_0_0;
   if (aName == "XIm") return & mLocXIm;
   if (aName == "XTer") return & mLocXTer;
   if (aName == "YIm") return & mLocYIm;
   if (aName == "YTer") return & mLocYTer;
   if (aName == "ZTer") return & mLocZTer;
   return 0;
}


cElCompiledFonc::cAutoAddEntry cEqAppui_X_C2MEbner::mTheAuto("cEqAppui_X_C2MEbner",cEqAppui_X_C2MEbner::Alloc);


cElCompiledFonc *  cEqAppui_X_C2MEbner::Alloc()
{  return new cEqAppui_X_C2MEbner();
}


